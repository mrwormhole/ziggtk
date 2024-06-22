# ZIG GTK+

> [!IMPORTANT]  
> Works with zig version 0.13.0 and may not work in older versions.

Sample "hello world" GTK+ applications in [zig](https://ziglang.org/). Based on the examples at [GTK+ Getting Started](https://developer.gnome.org/gtk3/stable/gtk-getting-started.html)

There are three applications:

1. manual: uses the in-code method of defining the UI
1. builder: uses the 'builder.ui' file to define the UI.
1. embedded: uses the 'builder.ui' file to define the UI, but embeds the text into the application at compile time


## Build

Ensure libgtk3 development headers are installed.

    zig build

## Run

    zig build manual
    zig build builder
    zig build embedded
