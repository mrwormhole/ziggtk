// Generated by gmmproc 2.78.1 -- DO NOT MODIFY!
#ifndef _GTKMM_CONSTRAINT_H
#define _GTKMM_CONSTRAINT_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2019 The gtkmm Development Team
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
#include <gtkmm/constrainttarget.h>
#include <gtk/gtk.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API Constraint_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** The description of a constraint.
 *
 * %Gtk::Constraint describes a constraint between an attribute on a widget
 * and another attribute on another widget, expressed as a linear equation like:
 *
 *   target.attr1 = source.attr2 × multiplier + constant
 *
 * Each %Constraint is part of a system that will be solved by a
 * Gtk::ConstraintLayout in order to allocate and position each child widget.
 *
 * A %Constraint is immutable once it's created.
 *
 * @newin{3,96}
 */

class GTKMM_API Constraint : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Constraint;
  using CppClassType = Constraint_Class;
  using BaseObjectType = GtkConstraint;
  using BaseClassType = GtkConstraintClass;

  // noncopyable
  Constraint(const Constraint&) = delete;
  Constraint& operator=(const Constraint&) = delete;

private:  friend class Constraint_Class;
  static CppClassType constraint_class_;

protected:
  explicit Constraint(const Glib::ConstructParams& construct_params);
  explicit Constraint(GtkConstraint* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Constraint(Constraint&& src) noexcept;
  Constraint& operator=(Constraint&& src) noexcept;

  ~Constraint() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkConstraint*       gobj()       { return reinterpret_cast<GtkConstraint*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkConstraint* gobj() const { return reinterpret_cast<GtkConstraint*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkConstraint* gobj_copy();

private:

        
public:
  /** @addtogroup gtkmmEnums gtkmm Enums and Flags */

  /** 
   *  @var Attribute NONE
   * No attribute, used for constant
   * relations.
   * 
   *  @var Attribute LEFT
   * The left edge of a widget, regardless of
   * text direction.
   * 
   *  @var Attribute RIGHT
   * The right edge of a widget, regardless
   * of text direction.
   * 
   *  @var Attribute TOP
   * The top edge of a widget.
   * 
   *  @var Attribute BOTTOM
   * The bottom edge of a widget.
   * 
   *  @var Attribute START
   * The leading edge of a widget, depending
   * on text direction; equivalent to Gtk::Constraint::Attribute::LEFT for LTR
   * languages, and Gtk::Constraint::Attribute::RIGHT for RTL ones.
   * 
   *  @var Attribute END
   * The trailing edge of a widget, depending
   * on text direction; equivalent to Gtk::Constraint::Attribute::RIGHT for LTR
   * languages, and Gtk::Constraint::Attribute::LEFT for RTL ones.
   * 
   *  @var Attribute WIDTH
   * The width of a widget.
   * 
   *  @var Attribute HEIGHT
   * The height of a widget.
   * 
   *  @var Attribute CENTER_X
   * The center of a widget, on the
   * horizontal axis.
   * 
   *  @var Attribute CENTER_Y
   * The center of a widget, on the
   * vertical axis.
   * 
   *  @var Attribute BASELINE
   * The baseline of a widget.
   * 
   *  @enum Attribute
   * 
   * The widget attributes that can be used when creating a Gtk::Constraint.
   *
   * @ingroup gtkmmEnums
   */
  enum class Attribute
  {
    NONE,
    LEFT,
    RIGHT,
    TOP,
    BOTTOM,
    START,
    END,
    WIDTH,
    HEIGHT,
    CENTER_X,
    CENTER_Y,
    BASELINE
  };


  /** 
   *  @var Relation EQ
   * Equal.
   * 
   *  @var Relation LE
   * Less than, or equal.
   * 
   *  @var Relation GE
   * Greater than, or equal.
   * 
   *  @enum Relation
   * 
   * The relation between two terms of a constraint.
   *
   * @ingroup gtkmmEnums
   */
  enum class Relation
  {
    LE = -1,
    EQ,
    GE
  };


  /** Wrapper for enum Strength.
   * Strength enumerators are scoped and can be implicitly converted to int.
   * The scope is Gtk::Constraint::Strength::
   *
   * @ingroup gtkmmEnums
   */
  class Strength_Wrapper final
  {
  public:
    /** 
     *  @var Strength REQUIRED
     * The constraint is required towards solving the layout.
     * 
     *  @var Strength STRONG
     * A strong constraint.
     * 
     *  @var Strength MEDIUM
     * A medium constraint.
     * 
     *  @var Strength WEAK
     * A weak constraint.
     * 
     *  @enum Strength
     * 
     * The strength of a constraint, expressed as a symbolic constant.
     * 
     * The strength of a Gtk::Constraint can be expressed with any positive
     * integer; the values of this enumeration can be used for readability.
     *
     * @ingroup gtkmmEnums
     */
    enum Strength
    {
      REQUIRED = 1001001000,
      STRONG = 1000000000,
      MEDIUM = 1000,
      WEAK = 1
    };
    #ifndef DOXYGEN_SHOULD_SKIP_THIS
    Strength_Wrapper() = delete;
    #endif
  };
  /** Strength enumerators are scoped by the wrapper class
   * and can be implicitly converted to int.
   *
   * @ingroup gtkmmEnums
   */
  using Strength = Strength_Wrapper::Strength;


protected:
    explicit Constraint(const Glib::RefPtr<ConstraintTarget>& target, Attribute target_attribute, Relation relation, const Glib::RefPtr<ConstraintTarget>& source, Attribute source_attribute, double multiplier, double constant, int strength);

    explicit Constraint(const Glib::RefPtr<ConstraintTarget>& target, Attribute target_attribute, Relation relation, double constant, int strength);


public:
  /** Creates a new %Gtk::Constraint representing a relation between a layout
   * attribute on a source and a layout attribute on a target.
   *
   * @param target A Gtk::ConstraintTarget or an empty Glib::RefPtr.
   * @param target_attribute The attribute of @a target to be set.
   * @param relation The relation equivalence between @a target_attribute and @a source_attribute.
   * @param source A Gtk::ConstraintTarget or an empty Glib::RefPtr.
   * @param source_attribute The attribute of @a source to be read.
   * @param multiplier A multiplication factor to be applied to @a source_attribute.
   * @param constant A constant to be added to @a source_attribute.
   * @param strength The strength of the constraint.
   * @return The newly created %Gtk::Constraint.
   */
  
  static Glib::RefPtr<Constraint> create(const Glib::RefPtr<ConstraintTarget>& target, Attribute target_attribute, Relation relation, const Glib::RefPtr<ConstraintTarget>& source, Attribute source_attribute, double multiplier, double constant, int strength);


  /** Creates a new %Gtk::Constraint representing a relation between a layout
   * attribute on a target and a constant value.
   *
   * @param target A Gtk::ConstraintTarget or an empty Glib::RefPtr.
   * @param target_attribute The attribute of @a target to be set.
   * @param relation The relation equivalence between @a target_attribute and @a constant.
   * @param constant A constant to be set on @a target_attribute.
   * @param strength The strength of the constraint.
   * @return The newly created %Gtk::Constraint.
   */
  
  static Glib::RefPtr<Constraint> create(const Glib::RefPtr<ConstraintTarget>& target, Attribute target_attribute, Relation relation, double constant, int strength);


  /** Retrieves the Gtk::ConstraintTarget used as the target for
   * the constraint.
   * 
   * If the targe is set to <tt>nullptr</tt> at creation, the constraint will use
   * the widget using the Gtk::ConstraintLayout as the target.
   * 
   * @return A `Gtk::ConstraintTarget`.
   */
  Glib::RefPtr<ConstraintTarget> get_target();
  
  /** Retrieves the Gtk::ConstraintTarget used as the target for
   * the constraint.
   * 
   * If the targe is set to <tt>nullptr</tt> at creation, the constraint will use
   * the widget using the Gtk::ConstraintLayout as the target.
   * 
   * @return A `Gtk::ConstraintTarget`.
   */
  Glib::RefPtr<const ConstraintTarget> get_target() const;
  
  /** Retrieves the attribute of the target to be set by the constraint.
   * 
   * @return The target's attribute.
   */
  Attribute get_target_attribute() const;
  
  /** Retrieves the Gtk::ConstraintTarget used as the source for the
   * constraint.
   * 
   * If the source is set to <tt>nullptr</tt> at creation, the constraint will use
   * the widget using the Gtk::ConstraintLayout as the source.
   * 
   * @return The source of the constraint.
   */
  Glib::RefPtr<ConstraintTarget> get_source();
  
  /** Retrieves the Gtk::ConstraintTarget used as the source for the
   * constraint.
   * 
   * If the source is set to <tt>nullptr</tt> at creation, the constraint will use
   * the widget using the Gtk::ConstraintLayout as the source.
   * 
   * @return The source of the constraint.
   */
  Glib::RefPtr<const ConstraintTarget> get_source() const;
  
  /** Retrieves the attribute of the source to be read by the constraint.
   * 
   * @return The source's attribute.
   */
  Attribute get_source_attribute() const;
  
  /** The order relation between the terms of the constraint.
   * 
   * @return A relation type.
   */
  Relation get_relation() const;
  
  /** Retrieves the multiplication factor applied to the source
   * attribute's value.
   * 
   * @return A multiplication factor.
   */
  double get_multiplier() const;
  
  /** Retrieves the constant factor added to the source attributes' value.
   * 
   * @return A constant factor.
   */
  double get_constant() const;
  
  /** Retrieves the strength of the constraint.
   * 
   * @return The strength value.
   */
  int get_strength() const;
  
  /** Checks whether the constraint is a required relation for solving the
   * constraint layout.
   * 
   * @return <tt>true</tt> if the constraint is required.
   */
  bool is_required() const;
  
  /** Checks whether the constraint is attached to a Gtk::ConstraintLayout,
   * and it is contributing to the layout.
   * 
   * @return <tt>true</tt> if the constraint is attached.
   */
  bool is_attached() const;
  
  /** Checks whether the constraint describes a relation between an attribute
   * on the property_target() and a constant value.
   * 
   * @return <tt>true</tt> if the constraint is a constant relation.
   */
  bool is_constant() const;

  /** The target of the constraint.
   * 
   * The constraint will set the property_target_attribute()
   * property of the target using the property_source_attribute()
   * property of the source widget.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ConstraintTarget> > property_target() const;


  /** The attribute of the property_target() set by the constraint.
   *
   * Default value: Gtk::Constraint::Attribute::NONE
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Attribute > property_target_attribute() const;


  /** The order relation between the terms of the constraint.
   *
   * Default value: Gtk::Constraint::Relation::EQ
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Relation > property_relation() const;


  /** The source of the constraint.
   * 
   * The constraint will set the property_target_attribute()
   * property of the target using the property_source_attribute()
   * property of the source.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<ConstraintTarget> > property_source() const;


  /** The attribute of the property_source() read by the
   * constraint.
   *
   * Default value: Gtk::Constraint::Attribute::NONE
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Attribute > property_source_attribute() const;


  /** The multiplication factor to be applied to
   * the property_source_attribute().
   *
   * Default value: 1
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_multiplier() const;


  /** The constant value to be added to the property_source_attribute().
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_constant() const;


  /** The strength of the constraint.
   * 
   * The strength can be expressed either using one of the symbolic values
   * of the Gtk::ConstraintStrength enumeration, or any positive integer
   * value.
   *
   * Default value: 1001001000
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_strength() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GTKMM_API Value<Gtk::Constraint::Attribute> : public Glib::Value_Enum<Gtk::Constraint::Attribute>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GTKMM_API Value<Gtk::Constraint::Relation> : public Glib::Value_Enum<Gtk::Constraint::Relation>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GTKMM_API Value<Gtk::Constraint::Strength> : public Glib::Value_Enum<Gtk::Constraint::Strength>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Constraint
   */
  GTKMM_API
  Glib::RefPtr<Gtk::Constraint> wrap(GtkConstraint* object, bool take_copy = false);
}


#endif /* _GTKMM_CONSTRAINT_H */

