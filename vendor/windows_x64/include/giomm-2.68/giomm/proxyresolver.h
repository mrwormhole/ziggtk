// Generated by gmmproc 2.80.0 -- DO NOT MODIFY!
#ifndef _GIOMM_PROXYRESOLVER_H
#define _GIOMM_PROXYRESOLVER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2010 The gtkmm Development Team
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

#include <glibmm/error.h>
#include <glibmm/interface.h>
#include <giomm/asyncresult.h>
#include <giomm/cancellable.h>
//#include <giomm/error.h> //Because this is thrown by some of these methods.


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GProxyResolverInterface GProxyResolverInterface;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GProxyResolver = struct _GProxyResolver;
using GProxyResolverClass = struct _GProxyResolverClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API ProxyResolver_Class; } // namespace Gio
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gio
{


/** ProxyResolver - Asynchronous and cancellable network proxy resolver.
 * ProxyResolver provides synchronous and asynchronous network proxy
 * resolution. ProxyResolver is used within ClientSocket through the method
 * Gio::SocketConnectable::proxy_enumerate().
 *
 * @ingroup NetworkIO
 * @newin{2,28}
 */

class GIOMM_API ProxyResolver : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = ProxyResolver;
  using CppClassType = ProxyResolver_Class;
  using BaseObjectType = GProxyResolver;
  using BaseClassType = GProxyResolverInterface;

  // noncopyable
  ProxyResolver(const ProxyResolver&) = delete;
  ProxyResolver& operator=(const ProxyResolver&) = delete;

private:
  friend class ProxyResolver_Class;
  static CppClassType proxyresolver_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  ProxyResolver();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of
   * the Class init() function to ensure that it is properly
   * initialized.
   *
   * @param interface_class The Class object for the derived type.
   */
  explicit ProxyResolver(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface.
  explicit ProxyResolver(GProxyResolver* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  ProxyResolver(ProxyResolver&& src) noexcept;
  ProxyResolver& operator=(ProxyResolver&& src) noexcept;

  ~ProxyResolver() noexcept override;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GProxyResolver*       gobj()       { return reinterpret_cast<GProxyResolver*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GProxyResolver* gobj() const { return reinterpret_cast<GProxyResolver*>(gobject_); }

private:


public:

  
  /** Gets the default ProxyResolver for the system.
   * 
   * @newin{2,26}
   * 
   * @return The default ProxyResolver, which
   * will be a dummy object if no proxy resolver is available.
   */
  static Glib::RefPtr<ProxyResolver> get_default();

  
  /** Checks if @a resolver can be used on this system. (This is used
   * internally; g_proxy_resolver_get_default() will only return a proxy
   * resolver that returns <tt>true</tt> for this method.)
   * 
   * @newin{2,26}
   * 
   * @return <tt>true</tt> if @a resolver is supported.
   */
  bool is_supported() const;

  //TODO: Use std::string instead of ustring?:
 

  /** Looks into the system proxy configuration to determine what proxy,
   * if any, to use to connect to @a uri. The returned proxy URIs are of
   * the form `<protocol>://[user[:password]@]host[:port]` or
   * `direct://`, where <protocol> could be http, rtsp, socks
   * or other proxying protocol.
   * 
   * If you don't know what network protocol is being used on the
   * socket, you should use `none` as the URI protocol.
   * In this case, the resolver might still return a generic proxy type
   * (such as SOCKS), but would not return protocol-specific proxy types
   * (such as http).
   * 
   * `direct://` is used when no proxy is needed.
   * Direct connection should not be attempted unless it is part of the
   * returned array of proxies.
   * 
   * @newin{2,26}
   * 
   * @param uri A URI representing the destination to connect to.
   * @param cancellable A Cancellable, or <tt>nullptr</tt>.
   * @return A
   * <tt>nullptr</tt>-terminated array of proxy URIs.
   * 
   * @throws Glib::Error
   */
  std::vector<Glib::ustring> lookup(const Glib::ustring& uri, const Glib::RefPtr<Cancellable>& cancellable);

  /** Looks into the system proxy configuration to determine what proxy, if any, to use to connect to uri.
   * The returned proxy URIs are of the form \<protocol\>://[user[:password]\@]host:port or direct://, where \<protocol\> could be http, rtsp, socks or other proxying protocol.
   *
   * If you don't know what network protocol is being used on the socket, you should use none as the URI protocol.
   * In this case, the resolver might still return a generic proxy type (such as SOCKS), but would not return protocol-specific proxy types (such as http).
   *
   * direct:// is used when no proxy is needed. Direct connection should not be attempted unless it is part of the returned array of proxies.
   *
   * @param uri a URI representing the destination to connect to.
   */
  std::vector<Glib::ustring> lookup(const Glib::ustring& uri);

  /** Asynchronous lookup of proxy. See lookup() for more details.
   * @param uri a URI representing the destination to connect to.
   * @param slot A callback slot to call after the resolution completes.
   * @param cancellable A Cancellable object which can be used to cancel the operation.
   */
  void lookup_async(const Glib::ustring& uri, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable);

  /** Asynchronous lookup of proxy. See lookup() for more details.
   * @param uri a URI representing the destination to connect to.
   * @param slot A callback slot to call after the resolution completes.
   */
  void lookup_async(const Glib::ustring& uri, const SlotAsyncReady& slot);

  
  /** Call this function to obtain the array of proxy URIs when
   * g_proxy_resolver_lookup_async() is complete. See
   * g_proxy_resolver_lookup() for more details.
   * 
   * @newin{2,26}
   * 
   * @param result The result passed to your SlotAsyncReady.
   * @return A
   * <tt>nullptr</tt>-terminated array of proxy URIs.
   * 
   * @throws Glib::Error
   */
  std::vector<Glib::ustring> lookup_finish(const Glib::RefPtr<AsyncResult>& result);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};


} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::ProxyResolver
   */
  GIOMM_API
  Glib::RefPtr<Gio::ProxyResolver> wrap(GProxyResolver* object, bool take_copy = false);

} // namespace Glib


#endif /* _GIOMM_PROXYRESOLVER_H */

