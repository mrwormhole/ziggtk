// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_ACCESSIBLETEXT_P_H
#define _GTKMM_ACCESSIBLETEXT_P_H


#include <glibmm/private/interface_p.h>

#include <glibmm/private/interface_p.h>

namespace Gtk
{

class GTKMM_API AccessibleText_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = AccessibleText;
  using BaseObjectType = GtkAccessibleText;
  using BaseClassType = GtkAccessibleTextInterface;
  using CppClassParent = Glib::Interface_Class;

  friend class AccessibleText;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
  static GBytes* get_contents_vfunc_callback(GtkAccessibleText* self, unsigned int start, unsigned int end);
  static GBytes* get_contents_at_vfunc_callback(GtkAccessibleText* self, unsigned int offset, GtkAccessibleTextGranularity granularity, unsigned int* start, unsigned int* end);
  static unsigned int get_caret_position_vfunc_callback(GtkAccessibleText* self);
  static gboolean get_selection_vfunc_callback(GtkAccessibleText* self, gsize* n_ranges, GtkAccessibleTextRange** ranges);
  static gboolean get_attributes_vfunc_callback(GtkAccessibleText* self, unsigned int offset, gsize* n_ranges, GtkAccessibleTextRange** ranges, char*** attribute_names, char*** attribute_values);
  static void get_default_attributes_vfunc_callback(GtkAccessibleText* self, char*** attribute_names, char*** attribute_values);
};


} // namespace Gtk


#endif /* _GTKMM_ACCESSIBLETEXT_P_H */

