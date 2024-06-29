// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_GESTUREZOOM_H
#define _GTKMM_GESTUREZOOM_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2014 The gtkmm Development Team
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

#include <gtkmm/gesture.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkGestureZoom = struct _GtkGestureZoom;
using GtkGestureZoomClass = struct _GtkGestureZoomClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API GestureZoom_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** Zoom gesture.
 *
 * This is a Gesture implementation able to recognize
 * pinch/zoom gestures. Whenever the distance between both tracked
 * sequences changes, signal_scale_changed() is emitted to report the scale factor.
 *
 * @newin{3,14}
 *
 * @ingroup Gestures
 */

class GTKMM_API GestureZoom : public Gesture
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = GestureZoom;
  using CppClassType = GestureZoom_Class;
  using BaseObjectType = GtkGestureZoom;
  using BaseClassType = GtkGestureZoomClass;

  // noncopyable
  GestureZoom(const GestureZoom&) = delete;
  GestureZoom& operator=(const GestureZoom&) = delete;

private:  friend class GestureZoom_Class;
  static CppClassType gesturezoom_class_;

protected:
  explicit GestureZoom(const Glib::ConstructParams& construct_params);
  explicit GestureZoom(GtkGestureZoom* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  GestureZoom(GestureZoom&& src) noexcept;
  GestureZoom& operator=(GestureZoom&& src) noexcept;

  ~GestureZoom() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkGestureZoom*       gobj()       { return reinterpret_cast<GtkGestureZoom*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkGestureZoom* gobj() const { return reinterpret_cast<GtkGestureZoom*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkGestureZoom* gobj_copy();

private:


protected:
  /** Constructs a Gesture that recognizes zoom in/out gestures
   * (usually known as pinch/zoom).
   */
  GestureZoom();

public:
  /** Creates a Gesture that recognizes zoom in/out gestures
   * (usually known as pinch/zoom).
   *
   * @newin{3,14}
   *
   * @return A RefPtr to a new GestureZoom.
   */
  
  static Glib::RefPtr<GestureZoom> create();


  /** Gets the scale delta.
   * 
   * If @a gesture is active, this function returns the zooming
   * difference since the gesture was recognized (hence the
   * starting point is considered 1:1). If @a gesture is not
   * active, 1 is returned.
   * 
   * @return The scale delta.
   */
  double get_scale_delta() const;

  // no_default_handler because GtkGestureZoomClass is private.
  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%scale_changed(double scale)</tt>
   *
   * Flags: Run First
   *
   * Emitted whenever the distance between both tracked sequences changes.
   * 
   * @param scale Scale delta, taking the initial state as 1:1.
   */

  Glib::SignalProxy<void(double)> signal_scale_changed();


  // GestureZoom has no properties


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
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::GestureZoom
   */
  GTKMM_API
  Glib::RefPtr<Gtk::GestureZoom> wrap(GtkGestureZoom* object, bool take_copy = false);
}


#endif /* _GTKMM_GESTUREZOOM_H */

