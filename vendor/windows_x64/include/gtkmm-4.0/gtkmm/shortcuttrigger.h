// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_SHORTCUTTRIGGER_H
#define _GTKMM_SHORTCUTTRIGGER_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2020 The gtkmm Development Team
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


#include <glibmm/object.h>
#include <gdkmm/display.h>
#include <gdkmm/event.h>
#include <gdkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkShortcutTrigger = struct _GtkShortcutTrigger;
using GtkShortcutTriggerClass = struct _GtkShortcutTriggerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API ShortcutTrigger_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkNeverTrigger = struct _GtkNeverTrigger;
using GtkNeverTriggerClass = struct _GtkNeverTriggerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API NeverTrigger_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkKeyvalTrigger = struct _GtkKeyvalTrigger;
using GtkKeyvalTriggerClass = struct _GtkKeyvalTriggerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API KeyvalTrigger_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkMnemonicTrigger = struct _GtkMnemonicTrigger;
using GtkMnemonicTriggerClass = struct _GtkMnemonicTriggerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API MnemonicTrigger_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkAlternativeTrigger = struct _GtkAlternativeTrigger;
using GtkAlternativeTriggerClass = struct _GtkAlternativeTriggerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API AlternativeTrigger_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** Triggers to track if shortcuts should be activated.
 *
 * %Gtk::ShortcutTrigger is the object used to track if a Gtk::Shortcut should be
 * activated. For this purpose, trigger() can be called on a Gdk::Event.
 *
 * ShortcutTriggers contain methods that allow easy presentation to end
 * users as well as being printed for debugging.
 *
 * All ShortcutTriggers are immutable, you can only specify their properties
 * during construction. If you want to change a trigger, you have to replace it
 * with a new one.
 *
 * @see Gtk::Shortcut
 * @ingroup Gestures
 * @newin{3,98}
 */

class GTKMM_API ShortcutTrigger : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = ShortcutTrigger;
  using CppClassType = ShortcutTrigger_Class;
  using BaseObjectType = GtkShortcutTrigger;
  using BaseClassType = GtkShortcutTriggerClass;

  // noncopyable
  ShortcutTrigger(const ShortcutTrigger&) = delete;
  ShortcutTrigger& operator=(const ShortcutTrigger&) = delete;

private:  friend class ShortcutTrigger_Class;
  static CppClassType shortcuttrigger_class_;

protected:
  explicit ShortcutTrigger(const Glib::ConstructParams& construct_params);
  explicit ShortcutTrigger(GtkShortcutTrigger* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ShortcutTrigger(ShortcutTrigger&& src) noexcept;
  ShortcutTrigger& operator=(ShortcutTrigger&& src) noexcept;

  ~ShortcutTrigger() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkShortcutTrigger*       gobj()       { return reinterpret_cast<GtkShortcutTrigger*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkShortcutTrigger* gobj() const { return reinterpret_cast<GtkShortcutTrigger*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkShortcutTrigger* gobj_copy();

private:

      protected:
  ShortcutTrigger();

public:
  
  /** Tries to parse the given string into a trigger.
   * 
   * On success, the parsed trigger is returned.
   * When parsing failed, <tt>nullptr</tt> is returned.
   * 
   * The accepted strings are:
   * 
   * - `never`, for `Gtk::NeverTrigger`
   * - a string parsed by gtk_accelerator_parse(), for a `Gtk::KeyvalTrigger`, e.g. `<Control>C`
   * - underscore, followed by a single character, for `Gtk::MnemonicTrigger`, e.g. `_l`
   * - two valid trigger strings, separated by a `|` character, for a
   * `Gtk::AlternativeTrigger`: `<Control>q|<Control>w`
   * 
   * Note that you will have to escape the `<` and `>` characters when specifying
   * triggers in XML files, such as GtkBuilder ui files. Use `<` instead of
   * `<` and `>` instead of `>`.
   * 
   * @param string The string to parse.
   * @return A new `Gtk::ShortcutTrigger`.
   */
  static Glib::RefPtr<ShortcutTrigger> parse_string(const Glib::ustring& string);

  
  /** Prints the given trigger into a human-readable string.
   *
   * This is meant for debugging and logging.
   * The form of the representation may change at any time and is
   * not guaranteed to stay identical.
   *
   * @return A new string.
   */
  Glib::ustring to_string() const;
  

  /** Gets textual representation for the given trigger.
   * 
   * This function is returning a translated string for
   * presentation to end users for example in menu items
   * or in help texts.
   * 
   * The @a display in use may influence the resulting string in
   * various forms, such as resolving hardware keycodes or by
   * causing display-specific modifier names.
   * 
   * The form of the representation may change at any time and is
   * not guaranteed to stay identical.
   * 
   * @param display `Gdk::Display` to print for.
   * @return A new string.
   */
  Glib::ustring to_label(const Glib::RefPtr<const Gdk::Display>& display) const;
  

  // Is this useful? _WRAP_METHOD(guint hash() const, gtk_shortcut_trigger_hash)

 
  /** Checks if @a trigger1 and @a trigger2 trigger under the same conditions.
   * 
   * The types of @a one and @a two are `gconstpointer` only to allow use of this
   * function with `HashTable`. They must each be a `Gtk::ShortcutTrigger`.
   * 
   * @param trigger2 A `Gtk::ShortcutTrigger`.
   * @return <tt>true</tt> if @a trigger1 and @a trigger2 are equal.
   */
  bool equal(const Glib::RefPtr<const ShortcutTrigger>& trigger2) const;
  
  /** The types of @a trigger1 and @a trigger2 are `gconstpointer` only to allow
   * use of this function as a `CompareFunc`.
   * 
   * They must each be a `Gtk::ShortcutTrigger`.
   * 
   * @param trigger2 A `Gtk::ShortcutTrigger`.
   * @return An integer less than, equal to, or greater than zero if
   *  @a trigger1 is found, respectively, to be less than, to match,
   * or be greater than @a trigger2.
   */
  int compare(const Glib::RefPtr<const ShortcutTrigger>& trigger2) const;

  
  /** Checks if the given @a event triggers @a self.
   * 
   * @param event The event to check.
   * @param enable_mnemonics <tt>true</tt> if mnemonics should trigger. Usually the
   * value of this property is determined by checking that the passed
   * in @a event is a Key event and has the right modifiers set.
   * @return Whether the event triggered the shortcut.
   */
  Gdk::KeyMatch trigger(const Glib::RefPtr<const Gdk::Event>& event, bool enable_mnemonics) const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};


/** A Gtk::ShortcutTrigger that never triggers.
 */

class GTKMM_API NeverTrigger : public ShortcutTrigger
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = NeverTrigger;
  using CppClassType = NeverTrigger_Class;
  using BaseObjectType = GtkNeverTrigger;
  using BaseClassType = GtkNeverTriggerClass;

  // noncopyable
  NeverTrigger(const NeverTrigger&) = delete;
  NeverTrigger& operator=(const NeverTrigger&) = delete;

private:  friend class NeverTrigger_Class;
  static CppClassType nevertrigger_class_;

protected:
  explicit NeverTrigger(const Glib::ConstructParams& construct_params);
  explicit NeverTrigger(GtkNeverTrigger* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  NeverTrigger(NeverTrigger&& src) noexcept;
  NeverTrigger& operator=(NeverTrigger&& src) noexcept;

  ~NeverTrigger() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkNeverTrigger*       gobj()       { return reinterpret_cast<GtkNeverTrigger*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkNeverTrigger* gobj() const { return reinterpret_cast<GtkNeverTrigger*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkNeverTrigger* gobj_copy();

private:

      protected:
  NeverTrigger();

public:
  
  /** Gets the never trigger.
   * 
   * This is a singleton for a trigger that never triggers.
   * Use this trigger instead of <tt>nullptr</tt> because it implements
   * all virtual functions.
   * 
   * @return The never trigger.
   */
  static Glib::RefPtr<NeverTrigger> get();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

/** A Gtk::ShortcutTrigger that triggers when a specific keyval
 * and (optionally) modifiers are pressed.
 *
 * Key values are the codes which are sent whenever a key is pressed or released.
 * The complete list of key values can be found in the
 * <a href="https://gitlab.gnome.org/GNOME/gtk/tree/main/gdk/gdkkeysyms.h">gdk/gdkkeysyms.h</a>
 * header file. They are prefixed with <tt>GDK_KEY_</tt>.
 */

class GTKMM_API KeyvalTrigger : public ShortcutTrigger
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = KeyvalTrigger;
  using CppClassType = KeyvalTrigger_Class;
  using BaseObjectType = GtkKeyvalTrigger;
  using BaseClassType = GtkKeyvalTriggerClass;

  // noncopyable
  KeyvalTrigger(const KeyvalTrigger&) = delete;
  KeyvalTrigger& operator=(const KeyvalTrigger&) = delete;

private:  friend class KeyvalTrigger_Class;
  static CppClassType keyvaltrigger_class_;

protected:
  explicit KeyvalTrigger(const Glib::ConstructParams& construct_params);
  explicit KeyvalTrigger(GtkKeyvalTrigger* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  KeyvalTrigger(KeyvalTrigger&& src) noexcept;
  KeyvalTrigger& operator=(KeyvalTrigger&& src) noexcept;

  ~KeyvalTrigger() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkKeyvalTrigger*       gobj()       { return reinterpret_cast<GtkKeyvalTrigger*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkKeyvalTrigger* gobj() const { return reinterpret_cast<GtkKeyvalTrigger*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkKeyvalTrigger* gobj_copy();

private:

      protected:
    explicit KeyvalTrigger(guint keyval, Gdk::ModifierType modifiers);


public:
  
  static Glib::RefPtr<KeyvalTrigger> create(guint keyval, Gdk::ModifierType modifiers =  static_cast<Gdk::ModifierType>(0));


  /** Gets the keyval that must be pressed to succeed
   * triggering @a self.
   * 
   * @return The keyval.
   */
  guint get_keyval() const;
  
  /** Gets the modifiers that must be present to succeed
   * triggering @a self.
   * 
   * @return The modifiers.
   */
  Gdk::ModifierType get_modifiers() const;

  /** The key value for the trigger.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_keyval() const;


  /** The key modifiers for the trigger.
   *
   * Default value: Gdk::ModifierType::NO_MODIFIER_MASK
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gdk::ModifierType > property_modifiers() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

/** A Gtk::ShortcutTrigger that triggers when a specific mnemonic is pressed.
 *
 * Key values are the codes which are sent whenever a key is pressed or released.
 * The complete list of key values can be found in the
 * <a href="https://gitlab.gnome.org/GNOME/gtk/tree/main/gdk/gdkkeysyms.h">gdk/gdkkeysyms.h</a>
 * header file. They are prefixed with <tt>GDK_KEY_</tt>.
 */

class GTKMM_API MnemonicTrigger : public ShortcutTrigger
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = MnemonicTrigger;
  using CppClassType = MnemonicTrigger_Class;
  using BaseObjectType = GtkMnemonicTrigger;
  using BaseClassType = GtkMnemonicTriggerClass;

  // noncopyable
  MnemonicTrigger(const MnemonicTrigger&) = delete;
  MnemonicTrigger& operator=(const MnemonicTrigger&) = delete;

private:  friend class MnemonicTrigger_Class;
  static CppClassType mnemonictrigger_class_;

protected:
  explicit MnemonicTrigger(const Glib::ConstructParams& construct_params);
  explicit MnemonicTrigger(GtkMnemonicTrigger* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  MnemonicTrigger(MnemonicTrigger&& src) noexcept;
  MnemonicTrigger& operator=(MnemonicTrigger&& src) noexcept;

  ~MnemonicTrigger() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkMnemonicTrigger*       gobj()       { return reinterpret_cast<GtkMnemonicTrigger*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkMnemonicTrigger* gobj() const { return reinterpret_cast<GtkMnemonicTrigger*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkMnemonicTrigger* gobj_copy();

private:

      protected:
    explicit MnemonicTrigger(guint keyval);


public:
  
  static Glib::RefPtr<MnemonicTrigger> create(guint keyval);


  /** Gets the keyval that must be pressed to succeed triggering @a self.
   * 
   * @return The keyval.
   */
  guint get_keyval() const;

  /** The key value for the trigger.
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_keyval() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

/** A Gtk::ShortcutTrigger that triggers when either of two ShortcutTriggers trigger.
 */

class GTKMM_API AlternativeTrigger : public ShortcutTrigger
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = AlternativeTrigger;
  using CppClassType = AlternativeTrigger_Class;
  using BaseObjectType = GtkAlternativeTrigger;
  using BaseClassType = GtkAlternativeTriggerClass;

  // noncopyable
  AlternativeTrigger(const AlternativeTrigger&) = delete;
  AlternativeTrigger& operator=(const AlternativeTrigger&) = delete;

private:  friend class AlternativeTrigger_Class;
  static CppClassType alternativetrigger_class_;

protected:
  explicit AlternativeTrigger(const Glib::ConstructParams& construct_params);
  explicit AlternativeTrigger(GtkAlternativeTrigger* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  AlternativeTrigger(AlternativeTrigger&& src) noexcept;
  AlternativeTrigger& operator=(AlternativeTrigger&& src) noexcept;

  ~AlternativeTrigger() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkAlternativeTrigger*       gobj()       { return reinterpret_cast<GtkAlternativeTrigger*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkAlternativeTrigger* gobj() const { return reinterpret_cast<GtkAlternativeTrigger*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkAlternativeTrigger* gobj_copy();

private:

      protected:
    explicit AlternativeTrigger(const Glib::RefPtr<const ShortcutTrigger>& first, const Glib::RefPtr<const ShortcutTrigger>& second);


public:
  
  static Glib::RefPtr<AlternativeTrigger> create(const Glib::RefPtr<const ShortcutTrigger>& first, const Glib::RefPtr<const ShortcutTrigger>& second);


  /** Gets the first of the two alternative triggers that may
   * trigger @a self.
   * 
   * get_second() will return
   * the other one.
   * 
   * @return The first alternative trigger.
   */
  Glib::RefPtr<const ShortcutTrigger> get_first() const;
  
  /** Gets the second of the two alternative triggers that may
   * trigger @a self.
   * 
   * get_first() will return
   * the other one.
   * 
   * @return The second alternative trigger.
   */
  Glib::RefPtr<const ShortcutTrigger> get_second() const;

  /** The first `Gtk::ShortcutTrigger` to check.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<const ShortcutTrigger> > property_first() const;


  /** The second `Gtk::ShortcutTrigger` to check.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<const ShortcutTrigger> > property_second() const;


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
   * @relates Gtk::ShortcutTrigger
   */
  GTKMM_API
  Glib::RefPtr<Gtk::ShortcutTrigger> wrap(GtkShortcutTrigger* object, bool take_copy = false);
}


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::NeverTrigger
   */
  GTKMM_API
  Glib::RefPtr<Gtk::NeverTrigger> wrap(GtkNeverTrigger* object, bool take_copy = false);
}


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::KeyvalTrigger
   */
  GTKMM_API
  Glib::RefPtr<Gtk::KeyvalTrigger> wrap(GtkKeyvalTrigger* object, bool take_copy = false);
}


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::MnemonicTrigger
   */
  GTKMM_API
  Glib::RefPtr<Gtk::MnemonicTrigger> wrap(GtkMnemonicTrigger* object, bool take_copy = false);
}


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::AlternativeTrigger
   */
  GTKMM_API
  Glib::RefPtr<Gtk::AlternativeTrigger> wrap(GtkAlternativeTrigger* object, bool take_copy = false);
}


#endif /* _GTKMM_SHORTCUTTRIGGER_H */
