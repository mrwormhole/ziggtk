// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_ACTIONABLE_P_H
#define _GTKMM_ACTIONABLE_P_H


#include <glibmm/private/interface_p.h>

#include <glibmm/private/interface_p.h>

namespace Gtk
{

class GTKMM_API Actionable_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = Actionable;
  using BaseObjectType = GtkActionable;
  using BaseClassType = GtkActionableInterface;
  using CppClassParent = Glib::Interface_Class;

  friend class Actionable;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static const gchar* get_action_name_vfunc_callback(GtkActionable* self);
  static void set_action_name_vfunc_callback(GtkActionable* self, const gchar* action_name);
  static GVariant* get_action_target_value_vfunc_callback(GtkActionable* self);
  static void set_action_target_value_vfunc_callback(GtkActionable* self, GVariant* action_target_value);
};


} // namespace Gtk


#endif /* _GTKMM_ACTIONABLE_P_H */

