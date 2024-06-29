// Generated by gmmproc 2.80.0 -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSINTROSPECTION_H
#define _GIOMM_DBUSINTROSPECTION_H

#include <giommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2010 The giomm Development Team
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
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <glibmm/refptr.h>
#include <glibmm/value.h>
#include <gio/gio.h>
#include <vector>


namespace Gio
{

namespace DBus
{

/** @addtogroup giommEnums giomm Enums and Flags */

/** 
 *  @var PropertyInfoFlags NONE
 * No flags set.
 * 
 *  @var PropertyInfoFlags READABLE
 * Property is readable.
 * 
 *  @var PropertyInfoFlags WRITABLE
 * Property is writable.
 * 
 *  @enum PropertyInfoFlags
 * 
 * Flags describing the access control of a D-Bus property.
 * 
 * @newin{2,26}
 *
 * @ingroup giommEnums
 * @par Bitwise operators:
 * <tt>PropertyInfoFlags operator|(PropertyInfoFlags, PropertyInfoFlags)</tt><br>
 * <tt>PropertyInfoFlags operator&(PropertyInfoFlags, PropertyInfoFlags)</tt><br>
 * <tt>PropertyInfoFlags operator^(PropertyInfoFlags, PropertyInfoFlags)</tt><br>
 * <tt>PropertyInfoFlags operator~(PropertyInfoFlags)</tt><br>
 * <tt>PropertyInfoFlags& operator|=(PropertyInfoFlags&, PropertyInfoFlags)</tt><br>
 * <tt>PropertyInfoFlags& operator&=(PropertyInfoFlags&, PropertyInfoFlags)</tt><br>
 * <tt>PropertyInfoFlags& operator^=(PropertyInfoFlags&, PropertyInfoFlags)</tt><br>
 */
enum class PropertyInfoFlags
{
  NONE = 0x0,
  READABLE = (1<<0),
  WRITABLE = (1<<1)
};

/** @ingroup giommEnums */
inline PropertyInfoFlags operator|(PropertyInfoFlags lhs, PropertyInfoFlags rhs)
  { return static_cast<PropertyInfoFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline PropertyInfoFlags operator&(PropertyInfoFlags lhs, PropertyInfoFlags rhs)
  { return static_cast<PropertyInfoFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline PropertyInfoFlags operator^(PropertyInfoFlags lhs, PropertyInfoFlags rhs)
  { return static_cast<PropertyInfoFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup giommEnums */
inline PropertyInfoFlags operator~(PropertyInfoFlags flags)
  { return static_cast<PropertyInfoFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup giommEnums */
inline PropertyInfoFlags& operator|=(PropertyInfoFlags& lhs, PropertyInfoFlags rhs)
  { return (lhs = static_cast<PropertyInfoFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline PropertyInfoFlags& operator&=(PropertyInfoFlags& lhs, PropertyInfoFlags rhs)
  { return (lhs = static_cast<PropertyInfoFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup giommEnums */
inline PropertyInfoFlags& operator^=(PropertyInfoFlags& lhs, PropertyInfoFlags rhs)
  { return (lhs = static_cast<PropertyInfoFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }


/** Stores information about an annotation.
 *
 * @newin{2,28}
 * @ingroup DBus
 */
class GIOMM_API AnnotationInfo final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = AnnotationInfo;
  using BaseObjectType = GDBusAnnotationInfo;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GDBusAnnotationInfo*       gobj();

  ///Provides access to the underlying C instance.
  const GDBusAnnotationInfo* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDBusAnnotationInfo* gobj_copy() const;

  AnnotationInfo() = delete;

  // noncopyable
  AnnotationInfo(const AnnotationInfo&) = delete;
  AnnotationInfo& operator=(const AnnotationInfo&) = delete;

protected:
  // Do not derive this.  Gio::DBus::AnnotationInfo can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:
 

  /** Looks up the value of an annotation.
   * 
   * The cost of this function is O(n) in number of annotations.
   * 
   * @newin{2,26}
   * 
   * @param annotations A <tt>nullptr</tt>-terminated array of annotations or <tt>nullptr</tt>.
   * @param name The name of the annotation to look up.
   * @return The value or <tt>nullptr</tt> if not found. Do not free, it is owned by @a annotations.
   */
  static Glib::ustring info_lookup(const std::vector<Glib::RefPtr<AnnotationInfo>>& annotations, const Glib::ustring& name);


};

/** ArgInfo - Stores information about an argument for a method or a
 * signal.
 *
 * @newin{2,28}
 * @ingroup DBus
 */
class GIOMM_API ArgInfo final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = ArgInfo;
  using BaseObjectType = GDBusArgInfo;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GDBusArgInfo*       gobj();

  ///Provides access to the underlying C instance.
  const GDBusArgInfo* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDBusArgInfo* gobj_copy() const;

  ArgInfo() = delete;

  // noncopyable
  ArgInfo(const ArgInfo&) = delete;
  ArgInfo& operator=(const ArgInfo&) = delete;

protected:
  // Do not derive this.  Gio::DBus::ArgInfo can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:


};

/** Stores information about a method on an D-Bus interface.
 *
 * @newin{2,28}
 * @ingroup DBus
 */
class GIOMM_API MethodInfo final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = MethodInfo;
  using BaseObjectType = GDBusMethodInfo;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GDBusMethodInfo*       gobj();

  ///Provides access to the underlying C instance.
  const GDBusMethodInfo* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDBusMethodInfo* gobj_copy() const;

  MethodInfo() = delete;

  // noncopyable
  MethodInfo(const MethodInfo&) = delete;
  MethodInfo& operator=(const MethodInfo&) = delete;

protected:
  // Do not derive this.  Gio::DBus::MethodInfo can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:


};

/** Stores information about a signal on a D-Bus interface.
 *
 * @newin{2,28}
 * @ingroup DBus
 */
class GIOMM_API SignalInfo final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = SignalInfo;
  using BaseObjectType = GDBusSignalInfo;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GDBusSignalInfo*       gobj();

  ///Provides access to the underlying C instance.
  const GDBusSignalInfo* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDBusSignalInfo* gobj_copy() const;

  SignalInfo() = delete;

  // noncopyable
  SignalInfo(const SignalInfo&) = delete;
  SignalInfo& operator=(const SignalInfo&) = delete;

protected:
  // Do not derive this.  Gio::DBus::SignalInfo can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:


};

/** Stores information about a property on a D-Bus interface.
 *
 * @newin{2,28}
 * @ingroup DBus
 */
class GIOMM_API PropertyInfo final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = PropertyInfo;
  using BaseObjectType = GDBusPropertyInfo;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GDBusPropertyInfo*       gobj();

  ///Provides access to the underlying C instance.
  const GDBusPropertyInfo* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDBusPropertyInfo* gobj_copy() const;

  PropertyInfo() = delete;

  // noncopyable
  PropertyInfo(const PropertyInfo&) = delete;
  PropertyInfo& operator=(const PropertyInfo&) = delete;

protected:
  // Do not derive this.  Gio::DBus::PropertyInfo can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:


};

/** Stores information about a D-Bus interface.
 *
 * @newin{2,28}
 * @ingroup DBus
 */
class GIOMM_API InterfaceInfo final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = InterfaceInfo;
  using BaseObjectType = GDBusInterfaceInfo;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GDBusInterfaceInfo*       gobj();

  ///Provides access to the underlying C instance.
  const GDBusInterfaceInfo* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDBusInterfaceInfo* gobj_copy() const;

  InterfaceInfo() = delete;

  // noncopyable
  InterfaceInfo(const InterfaceInfo&) = delete;
  InterfaceInfo& operator=(const InterfaceInfo&) = delete;

protected:
  // Do not derive this.  Gio::DBus::InterfaceInfo can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:
  
  /** Looks up information about a method.
   * 
   * The cost of this function is O(n) in number of methods unless
   * g_dbus_interface_info_cache_build() has been used on @a info.
   * 
   * @newin{2,26}
   * 
   * @param name A D-Bus method name (typically in CamelCase).
   * @return A DBusMethodInfo or <tt>nullptr</tt> if not found. Do not free, it is owned by @a info.
   */
  Glib::RefPtr<MethodInfo> lookup_method(const Glib::ustring& name);
  
  /** Looks up information about a method.
   * 
   * The cost of this function is O(n) in number of methods unless
   * g_dbus_interface_info_cache_build() has been used on @a info.
   * 
   * @newin{2,26}
   * 
   * @param name A D-Bus method name (typically in CamelCase).
   * @return A DBusMethodInfo or <tt>nullptr</tt> if not found. Do not free, it is owned by @a info.
   */
  Glib::RefPtr<const MethodInfo> lookup_method(const Glib::ustring& name) const;

  
  /** Looks up information about a signal.
   * 
   * The cost of this function is O(n) in number of signals unless
   * g_dbus_interface_info_cache_build() has been used on @a info.
   * 
   * @newin{2,26}
   * 
   * @param name A D-Bus signal name (typically in CamelCase).
   * @return A DBusSignalInfo or <tt>nullptr</tt> if not found. Do not free, it is owned by @a info.
   */
  Glib::RefPtr<SignalInfo> lookup_signal(const Glib::ustring& name);
  
  /** Looks up information about a signal.
   * 
   * The cost of this function is O(n) in number of signals unless
   * g_dbus_interface_info_cache_build() has been used on @a info.
   * 
   * @newin{2,26}
   * 
   * @param name A D-Bus signal name (typically in CamelCase).
   * @return A DBusSignalInfo or <tt>nullptr</tt> if not found. Do not free, it is owned by @a info.
   */
  Glib::RefPtr<const SignalInfo> lookup_signal(const Glib::ustring& name) const;

  
  /** Looks up information about a property.
   * 
   * The cost of this function is O(n) in number of properties unless
   * g_dbus_interface_info_cache_build() has been used on @a info.
   * 
   * @newin{2,26}
   * 
   * @param name A D-Bus property name (typically in CamelCase).
   * @return A DBusPropertyInfo or <tt>nullptr</tt> if not found. Do not free, it is owned by @a info.
   */
  Glib::RefPtr<PropertyInfo> lookup_property(const Glib::ustring& name);
  
  /** Looks up information about a property.
   * 
   * The cost of this function is O(n) in number of properties unless
   * g_dbus_interface_info_cache_build() has been used on @a info.
   * 
   * @newin{2,26}
   * 
   * @param name A D-Bus property name (typically in CamelCase).
   * @return A DBusPropertyInfo or <tt>nullptr</tt> if not found. Do not free, it is owned by @a info.
   */
  Glib::RefPtr<const PropertyInfo> lookup_property(const Glib::ustring& name) const;

  
  /** Builds a lookup-cache to speed up
   * g_dbus_interface_info_lookup_method(),
   * g_dbus_interface_info_lookup_signal() and
   * g_dbus_interface_info_lookup_property().
   * 
   * If this has already been called with @a info, the existing cache is
   * used and its use count is increased.
   * 
   * Note that @a info cannot be modified until
   * g_dbus_interface_info_cache_release() is called.
   * 
   * @newin{2,44}
   */
  void cache_build();
  
  /** Decrements the usage count for the cache for @a info built by
   * g_dbus_interface_info_cache_build() (if any) and frees the
   * resources used by the cache if the usage count drops to zero.
   * 
   * @newin{2,44}
   */
  void cache_release();

  //TODO: _WRAP_METHOD(void generate_xml(guint indent, GString* string_builder), g_dbus_interface_info_generate_xml)


};

/** NodeInfo - Stores information about nodes in a remote object
 * hierarchy.
 *
 * @newin{2,28}
 * @ingroup DBus
 */
class GIOMM_API NodeInfo final
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = NodeInfo;
  using BaseObjectType = GDBusNodeInfo;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  /** Increment the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void reference()   const;

  /** Decrement the reference count for this object.
   * You should never need to do this manually - use the object via a RefPtr instead.
   */
  void unreference() const;

  ///Provides access to the underlying C instance.
  GDBusNodeInfo*       gobj();

  ///Provides access to the underlying C instance.
  const GDBusNodeInfo* gobj() const;

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDBusNodeInfo* gobj_copy() const;

  NodeInfo() = delete;

  // noncopyable
  NodeInfo(const NodeInfo&) = delete;
  NodeInfo& operator=(const NodeInfo&) = delete;

protected:
  // Do not derive this.  Gio::DBus::NodeInfo can neither be constructed nor deleted.

  void operator delete(void*, std::size_t);

private:

  
public:
  
  /** Parses @a xml_data and returns a DBusNodeInfo representing the data.
   * 
   * The introspection XML must contain exactly one top-level
   * <node> element.
   * 
   * Note that this routine is using a
   * [GMarkup][glib-Simple-XML-Subset-Parser.description]-based
   * parser that only accepts a subset of valid XML documents.
   * 
   * @newin{2,26}
   * 
   * @param xml_data Valid D-Bus introspection XML.
   * @return A DBusNodeInfo structure or <tt>nullptr</tt> if @a error is set. Free
   * with g_dbus_node_info_unref().
   * 
   * @throws Glib::MarkupError
   */
  static Glib::RefPtr<NodeInfo> create_for_xml(const Glib::ustring& xml_data);

  
  /** Looks up information about an interface.
   * 
   * The cost of this function is O(n) in number of interfaces.
   * 
   * @newin{2,26}
   * 
   * @param name A D-Bus interface name.
   * @return A Gio::DBus::InterfaceInfo or <tt>nullptr</tt> if not found. Do not free, it is owned by @a info.
   */
  Glib::RefPtr<InterfaceInfo> lookup_interface(const Glib::ustring& name);
  
  /** Looks up information about an interface.
   * 
   * The cost of this function is O(n) in number of interfaces.
   * 
   * @newin{2,26}
   * 
   * @param name A D-Bus interface name.
   * @return A Gio::DBus::InterfaceInfo or <tt>nullptr</tt> if not found. Do not free, it is owned by @a info.
   */
  Glib::RefPtr<const InterfaceInfo> lookup_interface(const Glib::ustring& name) const;

  /** Looks up information about the first interface.
   */
  Glib::RefPtr<InterfaceInfo> lookup_interface();

  /** Looks up information about the first interface.
   */
  Glib::RefPtr<const InterfaceInfo> lookup_interface() const;

  //TODO: _WRAP_METHOD(void generate_xml(guint indent, GString* string_builder), g_dbus_node_info_generate_xml)


};

} //namespace DBus

} // namespace Gio


namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gio::DBus::AnnotationInfo
 */
GIOMM_API
Glib::RefPtr<Gio::DBus::AnnotationInfo> wrap(GDBusAnnotationInfo* object, bool take_copy = false);

} // namespace Glib


namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gio::DBus::ArgInfo
 */
GIOMM_API
Glib::RefPtr<Gio::DBus::ArgInfo> wrap(GDBusArgInfo* object, bool take_copy = false);

} // namespace Glib


namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gio::DBus::MethodInfo
 */
GIOMM_API
Glib::RefPtr<Gio::DBus::MethodInfo> wrap(GDBusMethodInfo* object, bool take_copy = false);

} // namespace Glib


namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gio::DBus::SignalInfo
 */
GIOMM_API
Glib::RefPtr<Gio::DBus::SignalInfo> wrap(GDBusSignalInfo* object, bool take_copy = false);

} // namespace Glib


namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gio::DBus::PropertyInfo
 */
GIOMM_API
Glib::RefPtr<Gio::DBus::PropertyInfo> wrap(GDBusPropertyInfo* object, bool take_copy = false);

} // namespace Glib


namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gio::DBus::InterfaceInfo
 */
GIOMM_API
Glib::RefPtr<Gio::DBus::InterfaceInfo> wrap(GDBusInterfaceInfo* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class GIOMM_API Value<Glib::RefPtr<Gio::DBus::InterfaceInfo>> : public Glib::Value_RefPtrBoxed<Gio::DBus::InterfaceInfo>
{
public:
  CppType get() const { return Glib::wrap(static_cast<GDBusInterfaceInfo*>(get_boxed()), true); }
};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


namespace Glib
{

/** A Glib::wrap() method for this object.
 *
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gio::DBus::NodeInfo
 */
GIOMM_API
Glib::RefPtr<Gio::DBus::NodeInfo> wrap(GDBusNodeInfo* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_DBUSINTROSPECTION_H */

