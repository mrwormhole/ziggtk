// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_FONTDIALOGBUTTON_H
#define _GTKMM_FONTDIALOGBUTTON_H

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


#include <gtkmm/fontdialog.h>
#include <gtkmm/widget.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API FontDialogButton_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/** 
 *  @var FontLevel FAMILY
 * Select a font family.
 * 
 *  @var FontLevel FACE
 * Select a font face (i.e. a family and a style).
 * 
 *  @var FontLevel FONT
 * Select a font (i.e. a face with a size, and possibly font variations).
 * 
 *  @var FontLevel FEATURES
 * Select a font and font features.
 * 
 *  @enum FontLevel
 * 
 * The level of granularity for the font selection.
 * 
 * Depending on this value, the `Pango::FontDescription` that
 * is returned by Gtk::FontDialogButton::get_font_desc()
 * will have more or less fields set.
 * 
 * @newin{4,10}
 *
 * @ingroup gtkmmEnums
 */
enum class FontLevel
{
  FAMILY,
  FACE,
  FONT,
  FEATURES
};


} // namespace Gtk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GTKMM_API Value<Gtk::FontLevel> : public Glib::Value_Enum<Gtk::FontLevel>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gtk
{


/** A wrapper around a Gtk::FontDialog.
 *
 * Allows to open a font dialog to change the font.
 *
 * It is a suitable widget for selecting a font in a preference dialog.
 *
 * @ingroup Widgets
 * @newin{4,10}
 */

class GTKMM_API FontDialogButton : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef FontDialogButton CppObjectType;
  typedef FontDialogButton_Class CppClassType;
  typedef GtkFontDialogButton BaseObjectType;
  typedef GtkFontDialogButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  FontDialogButton(FontDialogButton&& src) noexcept;
  FontDialogButton& operator=(FontDialogButton&& src) noexcept;

  // noncopyable
  FontDialogButton(const FontDialogButton&) = delete;
  FontDialogButton& operator=(const FontDialogButton&) = delete;

  ~FontDialogButton() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend GTKMM_API class FontDialogButton_Class;
  static CppClassType fontdialogbutton_class_;

protected:
  explicit FontDialogButton(const Glib::ConstructParams& construct_params);
  explicit FontDialogButton(GtkFontDialogButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkFontDialogButton*       gobj()       { return reinterpret_cast<GtkFontDialogButton*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkFontDialogButton* gobj() const { return reinterpret_cast<GtkFontDialogButton*>(gobject_); }

private:

     
public:
  
  /** Creates a new `Gtk::FontDialogButton` with the
   * given `Gtk::FontDialog`.
   * 
   * You can pass <tt>nullptr</tt> to this function and set a `Gtk::FontDialog`
   * later. The button will be insensitive until that happens.
   * 
   * @newin{4,10}
   */

    explicit FontDialogButton(const Glib::RefPtr<FontDialog>& dialog =  {});


  /** Returns the `Gtk::FontDialog` of @a self.
   * 
   * @newin{4,10}
   * 
   * @return The `Gtk::FontDialog`.
   */
  Glib::RefPtr<FontDialog> get_dialog();
  
  /** Returns the `Gtk::FontDialog` of @a self.
   * 
   * @newin{4,10}
   * 
   * @return The `Gtk::FontDialog`.
   */
  Glib::RefPtr<const FontDialog> get_dialog() const;
  
  /** Sets a `Gtk::FontDialog` object to use for
   * creating the font chooser dialog that is
   * presented when the user clicks the button.
   * 
   * @newin{4,10}
   * 
   * @param dialog The new `Gtk::FontDialog`.
   */
  void set_dialog(const Glib::RefPtr<FontDialog>& dialog);

  
  /** Returns the level of detail at which this dialog
   * lets the user select fonts.
   * 
   * @newin{4,10}
   * 
   * @return The level of detail.
   */
  FontLevel get_level() const;
  
  /** Sets the level of detail at which this dialog
   * lets the user select fonts.
   * 
   * @newin{4,10}
   * 
   * @param level The level of detail.
   */
  void set_level(FontLevel level);
 

  /** Returns the font of the button.
   * 
   * This function is what should be used to obtain
   * the font that was chosen by the user. To get
   * informed about changes, listen to "notify::font-desc".
   * 
   * @newin{4,10}
   * 
   * @return The font.
   */
  Pango::FontDescription get_font_desc() const;
  
  /** Sets the font of the button.
   * 
   * @newin{4,10}
   * 
   * @param font_desc The new font.
   */
  void set_font_desc(const Pango::FontDescription& font_desc);
  
  /** Returns the font features of the button.
   * 
   * This function is what should be used to obtain the font features
   * that were chosen by the user. To get informed about changes, listen
   * to "notify::font-features".
   * 
   * Note that the button will only let users choose font features
   * if property_level() is set to
   * `Gtk::FontLevel::FEATURES`.
   * 
   * @newin{4,10}
   * 
   * @return The font features.
   */
  Glib::ustring get_font_features() const;
  
  /** Sets the font features of the button.
   * 
   * @newin{4,10}
   * 
   * @param font_features The font features.
   */
  void set_font_features(const Glib::ustring& font_features);
  
  /** Returns the language that is used for font features.
   * 
   * @newin{4,10}
   * 
   * @return The language.
   */
  Pango::Language get_language() const;
 

  /** Sets the language to use for font features.
   * 
   * @newin{4,10}
   * 
   * @param language The new language.
   */
  void set_language(const Pango::Language& language);
  
  /** Returns whether the selected font is used in the label.
   * 
   * @newin{4,10}
   * 
   * @return Whether the selected font is used in the label.
   */
  bool get_use_font() const;
  
  /** If @a use_font is <tt>true</tt>, the font name will be written
   * using the selected font.
   * 
   * @newin{4,10}
   * 
   * @param use_font If <tt>true</tt>, font name will be written using
   * the chosen font.
   */
  void set_use_font(bool use_font =  true);
  
  /** Returns whether the selected font size is used in the label.
   * 
   * @newin{4,10}
   * 
   * @return Whether the selected font size is used in the label.
   */
  bool get_use_size() const;
  
  /** If @a use_size is <tt>true</tt>, the font name will be written
   * using the selected font size.
   * 
   * @newin{4,10}
   * 
   * @param use_size If <tt>true</tt>, font name will be written using
   * the chosen font size.
   */
  void set_use_size(bool use_size =  true);

  /** The `Gtk::FontDialog` that contains parameters for
   * the font chooser dialog.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<FontDialog> > property_dialog() ;

/** The `Gtk::FontDialog` that contains parameters for
   * the font chooser dialog.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<FontDialog> > property_dialog() const;

  /** The level of detail for the font chooser dialog.
   *
   * Default value: Gtk::FontLevel::FONT
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< FontLevel > property_level() ;

/** The level of detail for the font chooser dialog.
   *
   * Default value: Gtk::FontLevel::FONT
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< FontLevel > property_level() const;

  /** The selected font.
   * 
   * This property can be set to give the button its initial
   * font, and it will be updated to reflect the users choice
   * in the font chooser dialog.
   * 
   * Listen to `notify::font-desc` to get informed about changes
   * to the buttons font.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::FontDescription > property_font_desc() ;

/** The selected font.
   * 
   * This property can be set to give the button its initial
   * font, and it will be updated to reflect the users choice
   * in the font chooser dialog.
   * 
   * Listen to `notify::font-desc` to get informed about changes
   * to the buttons font.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::FontDescription > property_font_desc() const;

  /** The selected font features.
   * 
   * This property will be updated to reflect the users choice
   * in the font chooser dialog.
   * 
   * Listen to `notify::font-features` to get informed about changes
   * to the buttons font features.
   * 
   * @newin{4,10}
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_font_features() ;

/** The selected font features.
   * 
   * This property will be updated to reflect the users choice
   * in the font chooser dialog.
   * 
   * Listen to `notify::font-features` to get informed about changes
   * to the buttons font features.
   * 
   * @newin{4,10}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_font_features() const;

  /** The selected language for font features.
   * 
   * This property will be updated to reflect the users choice
   * in the font chooser dialog.
   * 
   * Listen to `notify::language` to get informed about changes
   * to the buttons language.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Pango::Language > property_language() ;

/** The selected language for font features.
   * 
   * This property will be updated to reflect the users choice
   * in the font chooser dialog.
   * 
   * Listen to `notify::language` to get informed about changes
   * to the buttons language.
   * 
   * @newin{4,10}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Pango::Language > property_language() const;

  /** Whether the buttons label will be drawn in the selected font.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_font() ;

/** Whether the buttons label will be drawn in the selected font.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_font() const;

  /** Whether the buttons label will use the selected font size.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_use_size() ;

/** Whether the buttons label will use the selected font size.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_use_size() const;


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
   * @relates Gtk::FontDialogButton
   */
  GTKMM_API
  Gtk::FontDialogButton* wrap(GtkFontDialogButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_FONTDIALOGBUTTON_H */

