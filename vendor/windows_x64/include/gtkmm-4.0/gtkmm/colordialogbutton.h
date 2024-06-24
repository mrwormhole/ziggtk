// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_COLORDIALOGBUTTON_H
#define _GTKMM_COLORDIALOGBUTTON_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2022 The gtkmm Development Team
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


#include <gdkmm/rgba.h>
#include <gtkmm/colordialog.h>
#include <gtkmm/widget.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API ColorDialogButton_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A wrapper around a Gtk::ColorDialog.
 *
 * Allows to open a color dialog to change the color.
 *
 * It is a suitable widget for selecting a color in a preference dialog.
 *
 * @ingroup Widgets
 * @newin{4,10}
 */

class GTKMM_API ColorDialogButton : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ColorDialogButton CppObjectType;
  typedef ColorDialogButton_Class CppClassType;
  typedef GtkColorDialogButton BaseObjectType;
  typedef GtkColorDialogButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  ColorDialogButton(ColorDialogButton&& src) noexcept;
  ColorDialogButton& operator=(ColorDialogButton&& src) noexcept;

  // noncopyable
  ColorDialogButton(const ColorDialogButton&) = delete;
  ColorDialogButton& operator=(const ColorDialogButton&) = delete;

  ~ColorDialogButton() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class ColorDialogButton_Class;
  static CppClassType colordialogbutton_class_;

protected:
  explicit ColorDialogButton(const Glib::ConstructParams& construct_params);
  explicit ColorDialogButton(GtkColorDialogButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkColorDialogButton*       gobj()       { return reinterpret_cast<GtkColorDialogButton*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkColorDialogButton* gobj() const { return reinterpret_cast<GtkColorDialogButton*>(gobject_); }

private:

     
public:
  
  /** Creates a new `Gtk::ColorDialogButton` with the
   * given `Gtk::ColorDialog`.
   * 
   * You can pass <tt>nullptr</tt> to this function and set a `Gtk::ColorDialog`
   * later. The button will be insensitive until that happens.
   * 
   * @newin{4,10}
   */

    explicit ColorDialogButton(const Glib::RefPtr<ColorDialog>& dialog =  {});


  /** Returns the `Gtk::ColorDialog` of @a self.
   * 
   * @newin{4,10}
   * 
   * @return The `Gtk::ColorDialog`.
   */
  Glib::RefPtr<ColorDialog> get_dialog();
  
  /** Returns the `Gtk::ColorDialog` of @a self.
   * 
   * @newin{4,10}
   * 
   * @return The `Gtk::ColorDialog`.
   */
  Glib::RefPtr<const ColorDialog> get_dialog() const;
  
  /** Sets a `Gtk::ColorDialog` object to use for
   * creating the color chooser dialog that is
   * presented when the user clicks the button.
   * 
   * @newin{4,10}
   * 
   * @param dialog The new `Gtk::ColorDialog`.
   */
  void set_dialog(const Glib::RefPtr<ColorDialog>& dialog);

 
  /** Returns the color of the button.
   * 
   * This function is what should be used to obtain
   * the color that was chosen by the user. To get
   * informed about changes, listen to "notify::rgba".
   * 
   * @newin{4,10}
   * 
   * @return The color.
   */
  Gdk::RGBA get_rgba() const;
  
  /** Sets the color of the button.
   * 
   * @newin{4,10}
   * 
   * @param color The new color.
   */
  void set_rgba(const Gdk::RGBA& color);

  /** The `Gtk::ColorDialog` that contains parameters for
   * the color chooser dialog.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<ColorDialog> > property_dialog() ;

/** The `Gtk::ColorDialog` that contains parameters for
   * the color chooser dialog.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ColorDialog> > property_dialog() const;

  /** The selected color.
   * 
   * This property can be set to give the button its initial
   * color, and it will be updated to reflect the users choice
   * in the color chooser dialog.
   * 
   * Listen to `notify::rgba` to get informed about changes
   * to the buttons color.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gdk::RGBA > property_rgba() ;

/** The selected color.
   * 
   * This property can be set to give the button its initial
   * color, and it will be updated to reflect the users choice
   * in the color chooser dialog.
   * 
   * Listen to `notify::rgba` to get informed about changes
   * to the buttons color.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gdk::RGBA > property_rgba() const;


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
   * @relates Gtk::ColorDialogButton
   */
  GTKMM_API
  Gtk::ColorDialogButton* wrap(GtkColorDialogButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_COLORDIALOGBUTTON_H */

