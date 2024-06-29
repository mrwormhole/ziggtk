// Generated by gmmproc 2.80.0 -- DO NOT MODIFY!
#ifndef _GIOMM_DBUSCONNECTION_P_H
#define _GIOMM_DBUSCONNECTION_P_H


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gio
{

namespace DBus
{

class GIOMM_API Connection_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Connection;
  using BaseObjectType = GDBusConnection;
  using BaseClassType = GDBusConnectionClass;
  using CppClassParent = Glib::Object_Class;
  using BaseClassParent = GObjectClass;

  friend class Connection;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace DBus

} // namespace Gio


#endif /* _GIOMM_DBUSCONNECTION_P_H */

