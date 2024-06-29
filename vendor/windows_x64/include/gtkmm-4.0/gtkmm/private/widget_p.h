// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_WIDGET_P_H
#define _GTKMM_WIDGET_P_H


#include <gtkmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API Widget_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Widget;
  using BaseObjectType = GtkWidget;
  using BaseClassType = GtkWidgetClass;
  using CppClassParent = Object_Class;
  using BaseClassParent = GObjectClass;

  friend class Widget;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void show_callback(GtkWidget* self);
  static void hide_callback(GtkWidget* self);
  static void map_callback(GtkWidget* self);
  static void unmap_callback(GtkWidget* self);
  static void realize_callback(GtkWidget* self);
  static void unrealize_callback(GtkWidget* self);
  static void state_flags_changed_callback(GtkWidget* self, GtkStateFlags p0);
  static void direction_changed_callback(GtkWidget* self, GtkTextDirection p0);
  static gboolean mnemonic_activate_callback(GtkWidget* self, gboolean p0);
  static gboolean query_tooltip_callback(GtkWidget* self, gint p0, gint p1, gboolean p2, GtkTooltip* p3);

  //Callbacks (virtual functions):
    static void dispose_vfunc_callback(GObject* self);
    static void root_vfunc_callback(GtkWidget* self);
  static void unroot_vfunc_callback(GtkWidget* self);
  static void size_allocate_vfunc_callback(GtkWidget* self, int width, int height, int baseline);
  static GtkSizeRequestMode get_request_mode_vfunc_callback(GtkWidget* self);
  static void measure_vfunc_callback(GtkWidget* self, GtkOrientation orientation, int for_size, int* minimum, int* natural, int* minimum_baseline, int* natural_baseline);
  static gboolean grab_focus_vfunc_callback(GtkWidget* self);
  static void set_focus_child_vfunc_callback(GtkWidget* self, GtkWidget* child);
  static void compute_expand_vfunc_callback(GtkWidget* self, gboolean* hexpand_p, gboolean* vexpand_p);
  static gboolean contains_vfunc_callback(GtkWidget* self, gdouble x, gdouble y);
  static void snapshot_vfunc_callback(GtkWidget* self, GtkSnapshot* snapshot);
};


} // namespace Gtk


#endif /* _GTKMM_WIDGET_P_H */

