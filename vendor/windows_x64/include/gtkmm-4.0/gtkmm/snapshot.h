// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_SNAPSHOT_H
#define _GTKMM_SNAPSHOT_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2017 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */


#include <gdkmm/snapshot.h>
#include <gdkmm/rectangle.h>
#include <gdkmm/graphene_rect.h>
#include <gtkmm/stylecontext.h>
#include <pangomm/layout.h>
#include <gtk/gtk.h>


typedef struct _graphene_rect_t graphene_rect_t;


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Snapshot_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gdk
{
class GTKMM_API Paintable;
class GTKMM_API RGBA;
class GTKMM_API Texture;
}

namespace Gtk
{

/** Auxiliary object for snapshots.
 *
 * %Snapshot is an auxiliary object that assists in creating GskRenderNodes
 * in Gtk::Widget::snapshot_vfunc(). It functions in a similar way to
 * a cairo context, and maintains a stack of render nodes and their associated
 * transformations.
 *
 * The node at the top of the stack is the the one that append_node()
 * operates on. Use the push() and pop() functions to change the current node.
 *
 * The typical way to obtain a %Snapshot object is as an argument to
 * Gtk::Widget::snapshot_vfunc(). If you need to create your own %Snapshot, use create().
 *
 * @newin{3,90}
 */

class GTKMM_API Snapshot : public Gdk::Snapshot
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Snapshot;
  using CppClassType = Snapshot_Class;
  using BaseObjectType = GtkSnapshot;
  using BaseClassType = GtkSnapshotClass;

  // noncopyable
  Snapshot(const Snapshot&) = delete;
  Snapshot& operator=(const Snapshot&) = delete;

private:  friend class Snapshot_Class;
  static CppClassType snapshot_class_;

protected:
  explicit Snapshot(const Glib::ConstructParams& construct_params);
  explicit Snapshot(GtkSnapshot* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Snapshot(Snapshot&& src) noexcept;
  Snapshot& operator=(Snapshot&& src) noexcept;

  ~Snapshot() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkSnapshot*       gobj()       { return reinterpret_cast<GtkSnapshot*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkSnapshot* gobj() const { return reinterpret_cast<GtkSnapshot*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkSnapshot* gobj_copy();

private:

  // GtkSnapshot is typedefed as GdkSnapshot in gtktypes.h.
  // GtkSnapshot's wrap function can't be called wrap(). It would be ambiguous
  // when there is a wrap(GdkSnapshot*, bool)
  

public:
  //TODO: Add more methods. What shall be done with methods that take Gsk or graphene classes?

 
  // gtk_snapshot_new() does more than call g_object_new().
  
  /** Creates a new `Gtk::Snapshot`.
   * 
   * @return A newly-allocated `Gtk::Snapshot`.
   */
  static Glib::RefPtr<Snapshot> create();

  
  /** Returns a paintable encapsulating the render node
   * that was constructed by @a snapshot.
   * 
   * After calling this function, it is no longer possible to
   * add more nodes to @a snapshot. The only function that should
   * be called after this is GObject::Object::unref().
   * 
   * @newin{4,12}
   * 
   * @param size The size of the resulting paintable
   * or <tt>nullptr</tt> to use the bounds of the snapshot.
   * @return A new `Gdk::Paintable`.
   */
  Glib::RefPtr<Gdk::Paintable> to_paintable(const Gdk::Graphene::Size& size);

  /// A to_paintable() convenience overload.
  Glib::RefPtr<Gdk::Paintable> to_paintable();
  

  /** Creates a new debug node.
   *
   * @newin{3,94}
   *
   * @param name The name for the new node, or an empty string for no name.
   */
  void push_debug(const Glib::ustring& name);
  

  /** Modifies the opacity of an image.
   * 
   * The image is recorded until the next call to pop().
   * 
   * @param opacity The opacity to use.
   */
  void push_opacity(double opacity);
  
  /** Blurs an image.
   * 
   * The image is recorded until the next call to pop().
   * 
   * @param radius The blur radius to use. Must be positive.
   */
  void push_blur(double radius);

 
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a node that repeats the child node.
   * 
   * The child is recorded until the next call to pop().
   * 
   * @deprecated Use push_repeat() with Gdk::Graphene::Rect instead.
   * 
   * @param bounds The bounds within which to repeat.
   * @param child_bounds The bounds of the child or <tt>nullptr</tt>
   * to use the full size of the collected child node.
   */
  void push_repeat(const graphene_rect_t* bounds, const graphene_rect_t* child_bounds);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a node that repeats the child node.
   * 
   * The child is recorded until the next call to pop().
   * 
   * @deprecated Use push_repeat() with Gdk::Graphene::Rect instead.
   * 
   * @param bounds The bounds within which to repeat.
   * @param child_bounds The bounds of the child or <tt>nullptr</tt>
   * to use the full size of the collected child node.
   */
  void push_repeat(const Gdk::Rectangle& bounds, const Gdk::Rectangle& child_bounds);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED


  /// A push_repeat() convenience overload.
  void push_repeat(const Gdk::Rectangle& bounds);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Creates a node that repeats the child node.
   * 
   * The child is recorded until the next call to pop().
   * 
   * @newin{4,12}
   * 
   * @param bounds The bounds within which to repeat.
   * @param child_bounds The bounds of the child or <tt>nullptr</tt>
   * to use the full size of the collected child node.
   */
  void push_repeat(const Gdk::Graphene::Rect& bounds, const Gdk::Graphene::Rect& child_bounds);

  /// A push_repeat() convenience overload.
  void push_repeat(const Gdk::Graphene::Rect& bounds);

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Clips an image to a rectangle.
   * 
   * The image is recorded until the next call to pop().
   * 
   * @deprecated Use push_clip() with Gdk::Graphene::Rect instead.
   * 
   * @param bounds The rectangle to clip to.
   */
  void push_clip(const graphene_rect_t* bounds);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Clips an image to a rectangle.
   * 
   * The image is recorded until the next call to pop().
   * 
   * @deprecated Use push_clip() with Gdk::Graphene::Rect instead.
   * 
   * @param bounds The rectangle to clip to.
   */
  void push_clip(const Gdk::Rectangle& bounds);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Clips an image to a rectangle.
   * 
   * The image is recorded until the next call to pop().
   * 
   * @newin{4,12}
   * 
   * @param bounds The rectangle to clip to.
   */
  void push_clip(const Gdk::Graphene::Rect& bounds);

  
  /** Snapshots a cross-fade operation between two images with the
   * given @a progress.
   * 
   * Until the first call to pop(), the start image
   * will be snapshot. After that call, the end image will be recorded
   * until the second call to pop().
   * 
   * Calling this function requires two subsequent calls
   * to pop().
   * 
   * @param progress Progress between 0.0 and 1.0.
   */
  void push_cross_fade(double progress);

  
  /** Removes the top element from the stack of render nodes and
   * adds it to the nearest Gsk::GLShaderNode below it.
   * 
   * This must be called the same number of times as the number
   * of textures is needed for the shader in
   * push_gl_shader().
   */
  void gl_shader_pop_texture();
  
  /** Removes the top element from the stack of render nodes,
   * and appends it to the node underneath it.
   */
  void pop();

  
  /** Makes a copy of the current state of @a snapshot and saves it
   * on an internal stack.
   * 
   * When restore() is called, @a snapshot will
   * be restored to the saved state.
   * 
   * Multiple calls to save() and restore()
   * can be nested; each call to `restore()` restores the state from
   * the matching paired `save()`.
   * 
   * It is necessary to clear all saved states with corresponding
   * calls to `restore()`.
   */
  void save();
  
  /** Restores @a snapshot to the state saved by a preceding call to
   * save() and removes that state from the stack of
   * saved states.
   */
  void restore();

  
  /** Translates @a snapshot's coordinate system by @a point in 2-dimensional space.
   * 
   * @newin{4,12}
   * 
   * @param point The point to translate the snapshot by.
   */
  void translate(const Gdk::Graphene::Point& point);
  
  /** Rotates @ @a snapshot's coordinate system by @a angle degrees in 2D space -
   * or in 3D speak, rotates around the Z axis. The rotation happens around
   * the origin point of (0, 0) in the @a snapshot's current coordinate system.
   * 
   * To rotate around axes other than the Z axis, use Gsk::Transform::rotate_3d().
   * 
   * @param angle The rotation angle, in degrees (clockwise).
   */
  void rotate(float angle);
  
  /** Scales @a snapshot's coordinate system in 2-dimensional space by
   * the given factors.
   * 
   * Use scale_3d() to scale in all 3 dimensions.
   * 
   * @param factor_x Scaling factor on the X axis.
   * @param factor_y Scaling factor on the Y axis.
   */
  void scale(float factor_x, float factor_y);
  
  /** Scales @a snapshot's coordinate system by the given factors.
   * 
   * @param factor_x Scaling factor on the X axis.
   * @param factor_y Scaling factor on the Y axis.
   * @param factor_z Scaling factor on the Z axis.
   */
  void scale(float factor_x, float factor_y, float factor_z);
  
  /** Applies a perspective projection transform.
   * 
   * See Gsk::Transform::perspective() for a discussion on the details.
   * 
   * @param depth Distance of the z=0 plane.
   */
  void perspective(float depth);

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a new Gsk::CairoNode and appends it to the current
   * render node of @a snapshot, without changing the current node.
   * 
   * @deprecated Use append_cairo() with Gdk::Graphene::Rect instead.
   * 
   * @param bounds The bounds for the new node.
   * @return A `cairo_t` suitable for drawing the contents of
   * the newly created render node.
   */
  Cairo::RefPtr<Cairo::Context> append_cairo(const graphene_rect_t* bounds);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a new Gsk::CairoNode and appends it to the current
   * render node of @a snapshot, without changing the current node.
   * 
   * @deprecated Use append_cairo() with Gdk::Graphene::Rect instead.
   * 
   * @param bounds The bounds for the new node.
   * @return A `cairo_t` suitable for drawing the contents of
   * the newly created render node.
   */
  Cairo::RefPtr<Cairo::Context> append_cairo(const Gdk::Rectangle& bounds);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Creates a new Gsk::CairoNode and appends it to the current
   * render node of @a snapshot, without changing the current node.
   * 
   * @newin{4,12}
   * 
   * @param bounds The bounds for the new node.
   * @return A `cairo_t` suitable for drawing the contents of
   * the newly created render node.
   */
  Cairo::RefPtr<Cairo::Context> append_cairo(const Gdk::Graphene::Rect& bounds);

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a new render node drawing the @a texture
   * into the given @a bounds and appends it to the
   * current render node of @a snapshot.
   * 
   * If the texture needs to be scaled to fill @a bounds,
   * linear filtering is used. See append_scaled_texture()
   * if you need other filtering, such as nearest-neighbour.
   * 
   * @deprecated Use append_texture() with Gdk::Graphene::Rect instead.
   * 
   * @param texture The texture to render.
   * @param bounds The bounds for the new node.
   */
  void append_texture(const Glib::RefPtr<Gdk::Texture>& texture, const graphene_rect_t* bounds);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a new render node drawing the @a texture
   * into the given @a bounds and appends it to the
   * current render node of @a snapshot.
   * 
   * If the texture needs to be scaled to fill @a bounds,
   * linear filtering is used. See append_scaled_texture()
   * if you need other filtering, such as nearest-neighbour.
   * 
   * @deprecated Use append_texture() with Gdk::Graphene::Rect instead.
   * 
   * @param texture The texture to render.
   * @param bounds The bounds for the new node.
   */
  void append_texture(const Glib::RefPtr<Gdk::Texture>& texture, const Gdk::Rectangle& bounds);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Creates a new render node drawing the @a texture
   * into the given @a bounds and appends it to the
   * current render node of @a snapshot.
   * 
   * If the texture needs to be scaled to fill @a bounds,
   * linear filtering is used. See append_scaled_texture()
   * if you need other filtering, such as nearest-neighbour.
   * 
   * @newin{4,12}
   * 
   * @param texture The texture to render.
   * @param bounds The bounds for the new node.
   */
  void append_texture(const Glib::RefPtr<Gdk::Texture>& texture, const Gdk::Graphene::Rect& bounds);

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a new render node drawing the @a color into the
   * given @a bounds and appends it to the current render node
   * of @a snapshot.
   * 
   * You should try to avoid calling this function if
   *  @a color is transparent.
   * 
   * @deprecated Use append_color() with Gdk::Graphene::Rect instead.
   * 
   * @param color The color to draw.
   * @param bounds The bounds for the new node.
   */
  void append_color(const Gdk::RGBA& color, const graphene_rect_t* bounds);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a new render node drawing the @a color into the
   * given @a bounds and appends it to the current render node
   * of @a snapshot.
   * 
   * You should try to avoid calling this function if
   *  @a color is transparent.
   * 
   * @deprecated Use append_color() with Gdk::Graphene::Rect instead.
   * 
   * @param color The color to draw.
   * @param bounds The bounds for the new node.
   */
  void append_color(const Gdk::RGBA& color, const Gdk::Rectangle& bounds);
#endif // GTKMM_DISABLE_DEPRECATED


  /** Creates a new render node drawing the @a color into the
   * given @a bounds and appends it to the current render node
   * of @a snapshot.
   * 
   * You should try to avoid calling this function if
   *  @a color is transparent.
   * 
   * @newin{4,12}
   * 
   * @param color The color to draw.
   * @param bounds The bounds for the new node.
   */
  void append_color(const Gdk::RGBA& color, const Gdk::Graphene::Rect& bounds);
  
  /** Creates render nodes for rendering @a layout in the given foregound @a color
   * and appends them to the current node of @a snapshot without changing the
   * current node. The current theme's foreground color for a widget can be
   * obtained with Gtk::Widget::get_color().
   * 
   * Note that if the layout does not produce any visible output, then nodes
   * may not be added to the @a snapshot.
   * 
   * @param layout The `Pango::Layout` to render.
   * @param color The foreground color to render the layout in.
   */
  void append_layout(const Glib::RefPtr<Pango::Layout>& layout, const Gdk::RGBA& color);

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a render node for the CSS background according to @a context,
   * and appends it to the current node of @a snapshot, without changing
   * the current node.
   * 
   * Deprecated: 4.10
   * 
   * @deprecated There is no replacement for querying the style machinery. Stylable UI elements should use widgets.
   * 
   * @param context The style context that defines the background.
   * @param x X origin of the rectangle.
   * @param y Y origin of the rectangle.
   * @param width Rectangle width.
   * @param height Rectangle height.
   */
  void render_backgrount(const Glib::RefPtr<StyleContext>& context, double x, double y, double width, double height);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a render node for the CSS border according to @a context,
   * and appends it to the current node of @a snapshot, without changing
   * the current node.
   * 
   * Deprecated: 4.10
   * 
   * @deprecated There is no replacement for querying the style machinery. Stylable UI elements should use widgets.
   * 
   * @param context The style context that defines the frame.
   * @param x X origin of the rectangle.
   * @param y Y origin of the rectangle.
   * @param width Rectangle width.
   * @param height Rectangle height.
   */
  void render_frame(const Glib::RefPtr<StyleContext>& context, double x, double y, double width, double height);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a render node for the focus outline according to @a context,
   * and appends it to the current node of @a snapshot, without changing
   * the current node.
   * 
   * Deprecated: 4.10
   * 
   * @deprecated There is no replacement for querying the style machinery. Stylable UI elements should use widgets.
   * 
   * @param context The style context that defines the focus ring.
   * @param x X origin of the rectangle.
   * @param y Y origin of the rectangle.
   * @param width Rectangle width.
   * @param height Rectangle height.
   */
  void render_focus(const Glib::RefPtr<StyleContext>& context, double x, double y, double width, double height);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Creates a render node for rendering @a layout according to the style
   * information in @a context, and appends it to the current node of @a snapshot,
   * without changing the current node.
   * 
   * Deprecated: 4.10
   * 
   * @deprecated There is no replacement for querying the style machinery. Stylable UI elements should use widgets.
   * 
   * @param context The style context that defines the text.
   * @param x X origin of the rectangle.
   * @param y Y origin of the rectangle.
   * @param layout The `Pango::Layout` to render.
   */
  void render_layout(const Glib::RefPtr<StyleContext>& context, double x, double y, const Glib::RefPtr<Pango::Layout>& layout);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Draws a text caret using @a snapshot at the specified index of @a layout.
   * 
   * Deprecated: 4.10
   * 
   * @deprecated There is no replacement for querying the style machinery. Stylable UI elements should use widgets.
   * 
   * @param context A `Gtk::StyleContext`.
   * @param x X origin.
   * @param y Y origin.
   * @param layout The `Pango::Layout` of the text.
   * @param index The index in the `Pango::Layout`.
   * @param direction The `Pango::Direction` of the text.
   */
  void render_insertion_cursor(const Glib::RefPtr<StyleContext>& context, double x, double y, const Glib::RefPtr<Pango::Layout>& layout, int index, Pango::Direction direction);
#endif // GTKMM_DISABLE_DEPRECATED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk

namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * It's not called %wrap() because GtkSnapshot is a typedef of GdkSnapshot.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Snapshot
   */
  GTKMM_API
  Glib::RefPtr<Gtk::Snapshot> wrap_gtk_snapshot(GtkSnapshot* object, bool take_copy = false);
}


#endif /* _GTKMM_SNAPSHOT_H */
