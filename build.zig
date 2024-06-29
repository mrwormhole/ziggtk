const std = @import("std");

const names = [_][]const u8{ "manual", "builder", "embedded" };

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});
    const use_llvm = b.option(bool, "use-llvm", "use the LLVM backend");

    inline for (names) |n| {
        const exe = b.addExecutable(.{
            .name = n,
            .root_source_file = b.path("src/" ++ n ++ ".zig"),
            .optimize = optimize,
            .target = target,
            .use_llvm = use_llvm,
            .use_lld = use_llvm,
        });
        exe.linkLibC();
        exe.addIncludePath(b.path("./vendor/windows_x64/include")); //renamed include/gtk-4.0 to include/gtk-4
        exe.addIncludePath(b.path("./vendor/windows_x64/include/gtk-4/"));
        exe.addIncludePath(b.path("./vendor/windows_x64/include/glib-2.0/"));
        exe.addIncludePath(b.path("./vendor/windows_x64/include/glib-2.0/glib/"));
        exe.addLibraryPath(b.path("./vendor/windows_x64/lib")); // contains lib/gtk-4.lib
        //exe.addLibraryPath(b.path("./vendor/windows_x64/bin")); //not using it because .dll is gtk-4-1.dll
        exe.addLibraryPath(b.path("./vendor/windows_x64/vulkan-bin"));
        exe.linkSystemLibrary2("gtk-4", .{ .preferred_link_mode = .static, .use_pkg_config = .no });

        b.installArtifact(exe);

        const run = b.addRunArtifact(exe);
        run.step.dependOn(b.getInstallStep());
        const step = b.step(n, "Run the " ++ n ++ " app");
        step.dependOn(&run.step);
    }
}
