// Generated by gmmproc 2.80.0 -- DO NOT MODIFY!
#ifndef _GIOMM_TLSCERTIFICATE_H
#define _GIOMM_TLSCERTIFICATE_H

#include <giommconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2012 The giomm Development Team
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


#include <glibmm/object.h>
#include <glibmm/datetime.h>
#include <giomm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GTlsCertificate = struct _GTlsCertificate;
using GTlsCertificateClass = struct _GTlsCertificateClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gio
{ class GIOMM_API TlsCertificate_Class; } // namespace Gio
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Glib
{

// Forward declaration.
class GLIBMM_API ByteArray;

}

namespace Gio
{

class GIOMM_API SocketConnectable;

/** TlsCertificate - TLS certificate.
 * A certificate used for TLS authentication and encryption. This can represent
 * either a certificate only (eg, the certificate received by a client from a
 * server), or the combination of a certificate and a private key (which is
 * needed when acting as a TlsServerConnection).
 * @newin{2,36}
 */

class GIOMM_API TlsCertificate : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = TlsCertificate;
  using CppClassType = TlsCertificate_Class;
  using BaseObjectType = GTlsCertificate;
  using BaseClassType = GTlsCertificateClass;

  // noncopyable
  TlsCertificate(const TlsCertificate&) = delete;
  TlsCertificate& operator=(const TlsCertificate&) = delete;

private:  friend class TlsCertificate_Class;
  static CppClassType tlscertificate_class_;

protected:
  explicit TlsCertificate(const Glib::ConstructParams& construct_params);
  explicit TlsCertificate(GTlsCertificate* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  TlsCertificate(TlsCertificate&& src) noexcept;
  TlsCertificate& operator=(TlsCertificate&& src) noexcept;

  ~TlsCertificate() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GTlsCertificate*       gobj()       { return reinterpret_cast<GTlsCertificate*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GTlsCertificate* gobj() const { return reinterpret_cast<GTlsCertificate*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GTlsCertificate* gobj_copy();

private:


protected:
  //TODO: These constructors don't work. Delete them when we can break ABI and API.
  // There are no properties with the same names as the parameters.
  // _WRAP_CTOR() is not useful here anyway. See the next comment.
    explicit TlsCertificate(const std::string& data, gssize length);

    explicit TlsCertificate(const std::string& file);

    explicit TlsCertificate(const std::string& cert_file, const std::string& key_file);


public:
  // We can't use _WRAP_CTOR() and _WRAP_CREATE() because all the
  // g_tls_certificate_new_*() functions do more than just call g_object_new().
  
  /** Creates a TlsCertificate from the PEM-encoded data in @a data. If
   *  @a data includes both a certificate and a private key, then the
   * returned certificate will include the private key data as well. (See
   * the TlsCertificate::property_private_key_pem() property for information about
   * supported formats.)
   * 
   * The returned certificate will be the first certificate found in
   *  @a data. As of GLib 2.44, if @a data contains more certificates it will
   * try to load a certificate chain. All certificates will be verified in
   * the order found (top-level certificate should be the last one in the
   * file) and the TlsCertificate::property_issuer() property of each certificate
   * will be set accordingly if the verification succeeds. If any
   * certificate in the chain cannot be verified, the first certificate in
   * the file will still be returned.
   * 
   * @newin{2,28}
   * 
   * @param data PEM-encoded certificate data.
   * @param length The length of @a data, or -1 if it's 0-terminated.
   * @return The new certificate, or <tt>nullptr</tt> if @a data is invalid.
   * 
   * @throws Glib::Error
   */
  static Glib::RefPtr<TlsCertificate> create_from_pem(const std::string& data, gssize length =  -1);
  
  /** Creates a TlsCertificate from the data in @a file.
   * 
   * As of 2.72, if the filename ends in `.p12` or `.pfx` the data is loaded by
   * g_tls_certificate_new_from_pkcs12() otherwise it is loaded by
   * g_tls_certificate_new_from_pem(). See those functions for
   * exact details.
   * 
   * If @a file cannot be read or parsed, the function will return <tt>nullptr</tt> and
   * set @a error.
   * 
   * @newin{2,28}
   * 
   * @param file File containing a certificate to import.
   * @return The new certificate, or <tt>nullptr</tt> on error.
   * 
   * @throws Glib::Error
   */
  static Glib::RefPtr<TlsCertificate> create(const std::string& file);
  
  /** Creates a TlsCertificate from the PEM-encoded data in @a cert_file
   * and @a key_file. The returned certificate will be the first certificate
   * found in @a cert_file. As of GLib 2.44, if @a cert_file contains more
   * certificates it will try to load a certificate chain. All
   * certificates will be verified in the order found (top-level
   * certificate should be the last one in the file) and the
   * TlsCertificate::property_issuer() property of each certificate will be set
   * accordingly if the verification succeeds. If any certificate in the
   * chain cannot be verified, the first certificate in the file will
   * still be returned.
   * 
   * If either file cannot be read or parsed, the function will return
   * <tt>nullptr</tt> and set @a error. Otherwise, this behaves like
   * g_tls_certificate_new_from_pem().
   * 
   * @newin{2,28}
   * 
   * @param cert_file File containing one or more PEM-encoded
   * certificates to import.
   * @param key_file File containing a PEM-encoded private key
   * to import.
   * @return The new certificate, or <tt>nullptr</tt> on error.
   * 
   * @throws Glib::Error
   */
  static Glib::RefPtr<TlsCertificate> create(const std::string& cert_file, const std::string& key_file);

 
  /** Creates one or more TlsCertificates from the PEM-encoded
   * data in @a file. If @a file cannot be read or parsed, the function will
   * return <tt>nullptr</tt> and set @a error. If @a file does not contain any
   * PEM-encoded certificates, this will return an empty list and not
   * set @a error.
   * 
   * @newin{2,28}
   * 
   * @param file File containing PEM-encoded certificates to import.
   * @return A
   * List containing TlsCertificate objects. You must free the list
   * and its contents when you are done with it.
   * 
   * @throws Glib::Error
   */
  static std::vector< Glib::RefPtr<TlsCertificate> > create_list_from_file(const std::string& file);

  
  /** Gets the TlsCertificate representing @a cert's issuer, if known
   * 
   * @newin{2,28}
   * 
   * @return The certificate of @a cert's issuer,
   * or <tt>nullptr</tt> if @a cert is self-signed or signed with an unknown
   * certificate.
   */
  Glib::RefPtr<TlsCertificate> get_issuer();
  
  /** Gets the TlsCertificate representing @a cert's issuer, if known
   * 
   * @newin{2,28}
   * 
   * @return The certificate of @a cert's issuer,
   * or <tt>nullptr</tt> if @a cert is self-signed or signed with an unknown
   * certificate.
   */
  Glib::RefPtr<const TlsCertificate> get_issuer() const;

  
  /** This verifies @a cert and returns a set of TlsCertificateFlags
   * indicating any problems found with it. This can be used to verify a
   * certificate outside the context of making a connection, or to
   * check a certificate against a CA that is not part of the system
   * CA database.
   * 
   * If @a cert is valid, Gio::TlsCertificateFlags::NO_FLAGS is returned.
   * 
   * If @a identity is not <tt>nullptr</tt>, @a cert's name(s) will be compared against
   * it, and Gio::TlsCertificateFlags::BAD_IDENTITY will be set in the return
   * value if it does not match. If @a identity is <tt>nullptr</tt>, that bit will
   * never be set in the return value.
   * 
   * If @a trusted_ca is not <tt>nullptr</tt>, then @a cert (or one of the certificates
   * in its chain) must be signed by it, or else
   * Gio::TlsCertificateFlags::UNKNOWN_CA will be set in the return value. If
   *  @a trusted_ca is <tt>nullptr</tt>, that bit will never be set in the return
   * value.
   * 
   * GLib guarantees that if certificate verification fails, at least one
   * error will be set in the return value, but it does not guarantee
   * that all possible errors will be set. Accordingly, you may not safely
   * decide to ignore any particular type of error. For example, it would
   * be incorrect to mask Gio::TlsCertificateFlags::EXPIRED if you want to allow
   * expired certificates, because this could potentially be the only
   * error flag set even if other problems exist with the certificate.
   * 
   * Because TLS session context is not used, TlsCertificate may not
   * perform as many checks on the certificates as TlsConnection would.
   * For example, certificate constraints may not be honored, and
   * revocation checks may not be performed. The best way to verify TLS
   * certificates used by a TLS connection is to let TlsConnection
   * handle the verification.
   * 
   * @newin{2,28}
   * 
   * @param identity The expected peer identity.
   * @param trusted_ca The certificate of a trusted authority.
   * @return The appropriate TlsCertificateFlags.
   */
  TlsCertificateFlags verify(const Glib::RefPtr<const SocketConnectable>& identity, const Glib::RefPtr<const TlsCertificate>& trusted_ca) const;

  /// A verify() convenience overload.
  TlsCertificateFlags verify(const Glib::RefPtr<const SocketConnectable>& identity) const;

  /// A verify() convenience overload.
  TlsCertificateFlags verify(const Glib::RefPtr<const TlsCertificate>& trusted_ca) const;

  /// A verify() convenience overload.
  TlsCertificateFlags verify() const;
  
  /** Check if two TlsCertificate objects represent the same certificate.
   * The raw DER byte data of the two certificates are checked for equality.
   * This has the effect that two certificates may compare equal even if
   * their TlsCertificate::property_issuer(), TlsCertificate::property_private_key(), or
   * TlsCertificate::property_private_key_pem() properties differ.
   * 
   * @newin{2,34}
   * 
   * @param cert_two Second certificate to compare.
   * @return Whether the same or not.
   */
  bool is_same(const Glib::RefPtr<const TlsCertificate>& cert_two) const;

  
  /** Returns the time at which the certificate became or will become valid.
   * 
   * @newin{2,70}
   * 
   * @return The not-valid-before date, or <tt>nullptr</tt> if it's not available.
   */
  Glib::DateTime get_not_valid_before() const;
  
  /** Returns the time at which the certificate became or will become invalid.
   * 
   * @newin{2,70}
   * 
   * @return The not-valid-after date, or <tt>nullptr</tt> if it's not available.
   */
  Glib::DateTime get_not_valid_after() const;
  
  /** Returns the subject name from the certificate.
   * 
   * @newin{2,70}
   * 
   * @return The subject name, or <tt>nullptr</tt> if it's not available.
   */
  Glib::ustring get_subject_name() const;
  
  /** Returns the issuer name from the certificate.
   * 
   * @newin{2,70}
   * 
   * @return The issuer name, or <tt>nullptr</tt> if it's not available.
   */
  Glib::ustring get_issuer_name() const;

  /** The DER (binary) encoded representation of the certificate.
   * This property and the TlsCertificate::property_certificate_pem() property
   * represent the same data, just in different forms.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Glib::ByteArray> > property_certificate() const;


  /** The PEM (ASCII) encoded representation of the certificate.
   * This property and the TlsCertificate::property_certificate()
   * property represent the same data, just in different forms.
   * 
   * @newin{2,28}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::string > property_certificate_pem() const;


  /** The DER (binary) encoded representation of the certificate's
   * private key, in either [PKCS \\#1 format](https://datatracker.ietf.org/doc/html/rfc8017)
   * or unencrypted [PKCS \\#8 format.](https://datatracker.ietf.org/doc/html/rfc5208)
   * PKCS \\#8 format is supported since 2.32; earlier releases only
   * support PKCS \\#1. You can use the `openssl rsa` tool to convert
   * PKCS \\#8 keys to PKCS \\#1.
   * 
   * This property (or the TlsCertificate::property_private_key_pem() property)
   * can be set when constructing a key (for example, from a file).
   * Since GLib 2.70, it is now also readable; however, be aware that if
   * the private key is backed by a PKCS \\#11 URI – for example, if it
   * is stored on a smartcard – then this property will be <tt>nullptr</tt>. If so,
   * the private key must be referenced via its PKCS \\#11 URI,
   * TlsCertificate::property_private_key_pkcs11_uri(). You must check both
   * properties to see if the certificate really has a private key.
   * When this property is read, the output format will be unencrypted
   * PKCS \\#8.
   * 
   * @newin{2,72}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Glib::ByteArray> > property_private_key() const;


  /** The PEM (ASCII) encoded representation of the certificate's
   * private key in either [PKCS \\#1 format](https://datatracker.ietf.org/doc/html/rfc8017)
   * ("`BEGIN RSA PRIVATE KEY`") or unencrypted
   * [PKCS \\#8 format](https://datatracker.ietf.org/doc/html/rfc5208)
   * ("`BEGIN PRIVATE KEY`"). PKCS \\#8 format is supported since 2.32;
   * earlier releases only support PKCS \\#1. You can use the `openssl rsa`
   * tool to convert PKCS \\#8 keys to PKCS \\#1.
   * 
   * This property (or the TlsCertificate::property_private_key() property)
   * can be set when constructing a key (for example, from a file).
   * Since GLib 2.70, it is now also readable; however, be aware that if
   * the private key is backed by a PKCS \\#11 URI - for example, if it
   * is stored on a smartcard - then this property will be <tt>nullptr</tt>. If so,
   * the private key must be referenced via its PKCS \\#11 URI,
   * TlsCertificate::property_private_key_pkcs11_uri(). You must check both
   * properties to see if the certificate really has a private key.
   * When this property is read, the output format will be unencrypted
   * PKCS \\#8.
   * 
   * @newin{2,72}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::string > property_private_key_pem() const;


  /** A TlsCertificate representing the entity that issued this
   * certificate. If <tt>nullptr</tt>, this means that the certificate is either
   * self-signed, or else the certificate of the issuer is not
   * available.
   * 
   * Beware the issuer certificate may not be the same as the
   * certificate that would actually be used to construct a valid
   * certification path during certificate verification.
   * [RFC 4158](https://datatracker.ietf.org/doc/html/rfc4158) explains
   * why an issuer certificate cannot be naively assumed to be part of the
   * the certification path (though GLib's TLS backends may not follow the
   * path building strategies outlined in this RFC). Due to the complexity
   * of certification path building, GLib does not provide any way to know
   * which certification path will actually be used. Accordingly, this
   * property cannot be used to make security-related decisions. Only
   * GLib itself should make security decisions about TLS certificates.
   * 
   * @newin{2,28}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<TlsCertificate> > property_issuer() const;


  /** A URI referencing the [PKCS \\#11](https://docs.oasis-open.org/pkcs11/pkcs11-base/v3.0/os/pkcs11-base-v3.0-os.html)
   * objects containing an X.509 certificate and optionally a private key.
   * 
   * If <tt>nullptr</tt>, the certificate is either not backed by PKCS \\#11 or the
   * TlsBackend does not support PKCS \\#11.
   * 
   * @newin{2,72}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::string > property_pkcs11_uri() const;


  /** A URI referencing a [PKCS \\#11](https://docs.oasis-open.org/pkcs11/pkcs11-base/v3.0/os/pkcs11-base-v3.0-os.html)
   * object containing a private key.
   * 
   * @newin{2,72}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::string > property_private_key_pkcs11_uri() const;


  /** The time at which this cert is considered to be valid,
   * <tt>nullptr</tt> if unavailable.
   * 
   * @newin{2,70}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::DateTime > property_not_valid_before() const;


  /** The time at which this cert is no longer valid,
   * <tt>nullptr</tt> if unavailable.
   * 
   * @newin{2,70}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::DateTime > property_not_valid_after() const;


  /** The subject from the cert,
   * <tt>nullptr</tt> if unavailable.
   * 
   * @newin{2,70}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_subject_name() const;


  /** The issuer from the certificate,
   * <tt>nullptr</tt> if unavailable.
   * 
   * @newin{2,70}
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_issuer_name() const;


protected:
 

    virtual TlsCertificateFlags verify_vfunc(const Glib::RefPtr<const SocketConnectable>& identity, const Glib::RefPtr<const TlsCertificate>& trusted_ca) const;


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
   * @relates Gio::TlsCertificate
   */
  GIOMM_API
  Glib::RefPtr<Gio::TlsCertificate> wrap(GTlsCertificate* object, bool take_copy = false);
}


#endif /* _GIOMM_TLSCERTIFICATE_H */

