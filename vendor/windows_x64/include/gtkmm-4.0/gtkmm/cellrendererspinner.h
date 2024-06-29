// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_CELLRENDERERSPINNER_H
#define _GTKMM_CELLRENDERERSPINNER_H


#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2009 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/cellrenderer.h>
#include <gtkmm/enums.h>


 // The entire file is deprecated.

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkCellRendererSpinner = struct _GtkCellRendererSpinner;
using GtkCellRendererSpinnerClass = struct _GtkCellRendererSpinnerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API CellRendererSpinner_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{


/** Renders a spinning animation in a cell.
 * A CellRendererSpinner can be used as an alternative to CellRendererProgress for displaying
 * indefinite activity, instead of actual progress.
 *
 * To start the animation in a cell, set the active property to	true and increment the pulse property
 * at regular intervals.
 *
 * @ingroup TreeView
 * @deprecated 4.10: List views use widgets to display their contents.
 *   You should use Gtk::Spinner instead.
 */

class GTKMM_API CellRendererSpinner : public CellRenderer
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CellRendererSpinner CppObjectType;
  typedef CellRendererSpinner_Class CppClassType;
  typedef GtkCellRendererSpinner BaseObjectType;
  typedef GtkCellRendererSpinnerClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  CellRendererSpinner(CellRendererSpinner&& src) noexcept;
  CellRendererSpinner& operator=(CellRendererSpinner&& src) noexcept;

  // noncopyable
  CellRendererSpinner(const CellRendererSpinner&) = delete;
  CellRendererSpinner& operator=(const CellRendererSpinner&) = delete;

  ~CellRendererSpinner() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class CellRendererSpinner_Class;
  static CppClassType cellrendererspinner_class_;

protected:
  explicit CellRendererSpinner(const Glib::ConstructParams& construct_params);
  explicit CellRendererSpinner(GtkCellRendererSpinner* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkCellRendererSpinner*       gobj()       { return reinterpret_cast<GtkCellRendererSpinner*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkCellRendererSpinner* gobj() const { return reinterpret_cast<GtkCellRendererSpinner*>(gobject_); }

private:

public:

  CellRendererSpinner();

  /** Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_active() ;

/** Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_active() const;

  /** Pulse of the spinner. Increment this value to draw the next frame of the
   * spinner animation. Usually, you would update this value in a timeout.
   * 
   * By default, the `Gtk::Spinner` widget draws one full cycle of the animation,
   * consisting of 12 frames, in 750 milliseconds.
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_pulse() ;

/** Pulse of the spinner. Increment this value to draw the next frame of the
   * spinner animation. Usually, you would update this value in a timeout.
   * 
   * By default, the `Gtk::Spinner` widget draws one full cycle of the animation,
   * consisting of 12 frames, in 750 milliseconds.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_pulse() const;

  /** The `Gtk::IconSize` value that specifies the size of the rendered spinner.
   *
   * Default value: Gtk::IconSize::INHERIT
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gtk::IconSize > property_size() ;

/** The `Gtk::IconSize` value that specifies the size of the rendered spinner.
   *
   * Default value: Gtk::IconSize::INHERIT
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gtk::IconSize > property_size() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::CellRendererSpinner
   */
  GTKMM_API
  Gtk::CellRendererSpinner* wrap(GtkCellRendererSpinner* object, bool take_copy = false);
} //namespace Glib


#endif // GTKMM_DISABLE_DEPRECATED


#endif /* _GTKMM_CELLRENDERERSPINNER_H */

