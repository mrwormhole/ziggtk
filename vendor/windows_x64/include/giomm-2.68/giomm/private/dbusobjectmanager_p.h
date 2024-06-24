// Generated by gmmproc 2.80.0 -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSOBJECTMANAGER_P_H
#define _GIOMM_DBUSOBJECTMANAGER_P_H


#include <glibmm/private/interface_p.h>
#include <gio/gio.h>

#include <glibmm/private/interface_p.h>

namespace Gio
{

namespace DBus
{

class GIOMM_API ObjectManager_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = ObjectManager;
  using BaseObjectType = GDBusObjectManager;
  using BaseClassType = GDBusObjectManagerIface;
  using CppClassParent = Glib::Interface_Class;

  friend class ObjectManager;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void object_added_callback(GDBusObjectManager* self, GDBusObject* p0);
  static void object_removed_callback(GDBusObjectManager* self, GDBusObject* p0);
  static void interface_added_callback(GDBusObjectManager* self, GDBusObject* p0, GDBusInterface* p1);
  static void interface_removed_callback(GDBusObjectManager* self, GDBusObject* p0, GDBusInterface* p1);

  //Callbacks (virtual functions):
  static const gchar* get_object_path_vfunc_callback(GDBusObjectManager* self);
  static GList* get_objects_vfunc_callback(GDBusObjectManager* self);
  static GDBusObject* get_object_vfunc_callback(GDBusObjectManager* self, const gchar* object_path);
  static GDBusInterface* get_interface_vfunc_callback(GDBusObjectManager* self, const gchar* object_path, const gchar* interface_name);
};


} // namespace DBus

} // namespace Gio


#endif /* _GIOMM_DBUSOBJECTMANAGER_P_H */

