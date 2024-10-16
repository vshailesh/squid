/* include/autoconf.h.  Generated from autoconf.h.in by configure.  */
/* include/autoconf.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Defines how many threads aufs uses for I/O */
/* #undef AUFS_IO_THREADS */

/* Host type from configure */
#define CONFIG_HOST_TYPE "x86_64-apple-darwin22.6.0"

/* Define to 1 if using 'alloca.c'. */
/* #undef C_ALLOCA */

/* Default FD_SETSIZE value */
#define DEFAULT_FD_SETSIZE 1024

/* The install prefix */
#define DEFAULT_PREFIX /usr/local/squid

/* Enable following X-Forwarded-For headers */
#define FOLLOW_X_FORWARDED_FOR 1

/* Whether gettimeofday takes only one argument */
/* #undef GETTIMEOFDAY_NO_TZP */

/* Define to 1 if you have the <adserr.h> header file. */
/* #undef HAVE_ADSERR_H */

/* Define to 1 if you have the <adshlp.h> header file. */
/* #undef HAVE_ADSHLP_H */

/* Define to 1 if you have the <adsiid.h> header file. */
/* #undef HAVE_ADSIID_H */

/* Define to 1 if you have the <aio.h> header file. */
#define HAVE_AIO_H 1

/* Define to 1 if you have 'alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if <alloca.h> works. */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the 'argz_add' function. */
/* #undef HAVE_ARGZ_ADD */

/* Define to 1 if you have the 'argz_append' function. */
/* #undef HAVE_ARGZ_APPEND */

/* Define to 1 if you have the 'argz_count' function. */
/* #undef HAVE_ARGZ_COUNT */

/* Define to 1 if you have the 'argz_create_sep' function. */
/* #undef HAVE_ARGZ_CREATE_SEP */

/* Define to 1 if you have the <argz.h> header file. */
/* #undef HAVE_ARGZ_H */

/* Define to 1 if you have the 'argz_insert' function. */
/* #undef HAVE_ARGZ_INSERT */

/* Define to 1 if you have the 'argz_next' function. */
/* #undef HAVE_ARGZ_NEXT */

/* Define to 1 if you have the 'argz_stringify' function. */
/* #undef HAVE_ARGZ_STRINGIFY */

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <arpa/nameser.h> header file. */
#define HAVE_ARPA_NAMESER_H 1

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Basic auth module is built */
/* #undef HAVE_AUTH_MODULE_BASIC */

/* Digest auth module is built */
/* #undef HAVE_AUTH_MODULE_DIGEST */

/* Negotiate auth module is built */
/* #undef HAVE_AUTH_MODULE_NEGOTIATE */

/* NTLM auth module is built */
/* #undef HAVE_AUTH_MODULE_NTLM */

/* Define to 1 if you have the 'backtrace_symbols_fd' function. */
#define HAVE_BACKTRACE_SYMBOLS_FD 1

/* Define to 1 if you have the 'bcopy' function. */
#define HAVE_BCOPY 1

/* Heimdal krb5.h is broken for C++ */
/* #undef HAVE_BROKEN_HEIMDAL_KRB5_H */

/* Define to 1 if Solaris krb5.h is broken for C++ */
/* #undef HAVE_BROKEN_SOLARIS_KRB5_H */

/* Define to 1 if you have the <bstring.h> header file. */
/* #undef HAVE_BSTRING_H */

/* Define to 1 if you have the 'bswap16' function. */
/* #undef HAVE_BSWAP16 */

/* Define to 1 if you have the 'bswap32' function. */
/* #undef HAVE_BSWAP32 */

/* Define to 1 if you have the 'bswap_16' function. */
/* #undef HAVE_BSWAP_16 */

/* Define to 1 if you have the 'bswap_32' function. */
/* #undef HAVE_BSWAP_32 */

/* Define to 1 if you have the <byteswap.h> header file. */
/* #undef HAVE_BYTESWAP_H */

/* Define to 1 if you have the 'closedir' function. */
#define HAVE_CLOSEDIR 1

/* The system provides struct cmsghdr */
#define HAVE_CMSGHDR 1

/* Define to 1 if you have the <com_err.h> header file. */
/* #undef HAVE_COM_ERR_H */

/* Define to 1 if CMSG_SPACE is constant */
#define HAVE_CONSTANT_CMSG_SPACE 1

/* Define to 1 if you have the <cppunit/extensions/HelperMacros.h> header
   file. */
#define HAVE_CPPUNIT_EXTENSIONS_HELPERMACROS_H 1

/* Support setting CPU affinity for workers */
/* #undef HAVE_CPU_AFFINITY */

/* cpu_set_t is defined by the system headers */
/* #undef HAVE_CPU_SET_T */

/* Define to 1 if you have the 'crypt' function. */
/* #undef HAVE_CRYPT */

/* Define to 1 if you have the <crypt.h> header file. */
/* #undef HAVE_CRYPT_H */

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* define if the compiler supports basic C++17 syntax */
#define HAVE_CXX17 1

/* Define to 1 if you have the <db.h> header file. */
#define HAVE_DB_H 1

/* Define to 1 if you have the declaration of 'cygwin_conv_path', and to 0 if
   you don't. */
/* #undef HAVE_DECL_CYGWIN_CONV_PATH */

/* Define to 1 if you have the declaration of 'krb5_kt_free_entry', and to 0
   if you don't. */
/* #undef HAVE_DECL_KRB5_KT_FREE_ENTRY */

/* Define to 1 if you have the <direct.h> header file. */
/* #undef HAVE_DIRECT_H */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* POSIX AIO Disk I/O module is built */
/* #undef HAVE_DISKIO_MODULE_AIO */

/* Blocking Disk I/O module is built */
#define HAVE_DISKIO_MODULE_BLOCKING 1

/* DiskDaemon Disk I/O module is built */
#define HAVE_DISKIO_MODULE_DISKDAEMON 1

/* DiskThreads Disk I/O module is built */
#define HAVE_DISKIO_MODULE_DISKTHREADS 1

/* IpcIo Disk I/O module is built */
#define HAVE_DISKIO_MODULE_IPCIO 1

/* Mmapped Disk I/O module is built */
#define HAVE_DISKIO_MODULE_MMAPPED 1

/* Define if you have the GNU dld library. */
/* #undef HAVE_DLD */

/* Define to 1 if you have the <dld.h> header file. */
/* #undef HAVE_DLD_H */

/* Define to 1 if you have the 'dlerror' function. */
#define HAVE_DLERROR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <dl.h> header file. */
/* #undef HAVE_DL_H */

/* Define to 1 if you have the <dsrole.h> header file. */
/* #undef HAVE_DSROLE_H */

/* Define if you have the _dyld_func_lookup function. */
/* #undef HAVE_DYLD */

/* Define to 1 if you have the <endian.h> header file. */
/* #undef HAVE_ENDIAN_H */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have error_message */
/* #undef HAVE_ERROR_MESSAGE */

/* Define to 1 if the system has the type 'error_t'. */
/* #undef HAVE_ERROR_T */

/* Define to 1 if you have the <et/com_err.h> header file. */
/* #undef HAVE_ET_COM_ERR_H */

/* Define to 1 if you have the 'eui64_aton' function. */
/* #undef HAVE_EUI64_ATON */

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the 'fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* fd_mask is defined by the system headers */
#define HAVE_FD_MASK 1

/* Define to 1 if you have the <fnmatch.h> header file. */
#define HAVE_FNMATCH_H 1

/* Define to 1 if you have the 'fsync' function. */
/* #undef HAVE_FSYNC */

/* "Define to 1 if aufs filesystem module is build" */
#define HAVE_FS_AUFS 1

/* "Define to 1 if diskd filesystem module is build" */
#define HAVE_FS_DISKD 1

/* "Define to 1 if rock filesystem module is build" */
#define HAVE_FS_ROCK 1

/* "Define to 1 if ufs filesystem module is build" */
#define HAVE_FS_UFS 1

/* Define if struct statfs has field f_frsize (Linux 2.6 or later) */
/* #undef HAVE_F_FRSIZE_IN_STATFS */

/* Define to 1 if you have the 'getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the 'getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the 'getpass' function. */
#define HAVE_GETPASS 1

/* Define to 1 if you have the 'getrlimit' function. */
#define HAVE_GETRLIMIT 1

/* Define to 1 if you have the 'getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the 'getspnam' function. */
/* #undef HAVE_GETSPNAM */

/* Define to 1 if you have the 'gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have krb5_get_init_creds_keytab */
/* #undef HAVE_GET_INIT_CREDS_KEYTAB */

/* Define to 1 if you have the <glib.h> header file. */
/* #undef HAVE_GLIB_H */

/* Define to 1 if you have the 'glob' function. */
#define HAVE_GLOB 1

/* Define to 1 if you have the <glob.h> header file. */
#define HAVE_GLOB_H 1

/* Define to 1 if you have the <gnumalloc.h> header file. */
/* #undef HAVE_GNUMALLOC_H */

/* Define to 1 if you have the <gnutls/abstract.h> header file. */
/* #undef HAVE_GNUTLS_ABSTRACT_H */

/* Define to 1 if you have the <gnutls/gnutls.h> header file. */
/* #undef HAVE_GNUTLS_GNUTLS_H */

/* Define to 1 if you have the <gnutls/x509.h> header file. */
/* #undef HAVE_GNUTLS_X509_H */

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* GSSAPI support */
/* #undef HAVE_GSSAPI */

/* Define to 1 if you have the <gssapi/gssapi_ext.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_EXT_H */

/* Define to 1 if you have the <gssapi/gssapi_generic.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_GENERIC_H */

/* Define to 1 if you have the <gssapi/gssapi.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_H */

/* Define to 1 if you have the <gssapi/gssapi_krb5.h> header file. */
/* #undef HAVE_GSSAPI_GSSAPI_KRB5_H */

/* Define to 1 if you have the <gssapi.h> header file. */
/* #undef HAVE_GSSAPI_H */

/* Define to 1 if you have the 'gsskrb5_extract_authz_data_from_sec_context'
   function. */
/* #undef HAVE_GSSKRB5_EXTRACT_AUTHZ_DATA_FROM_SEC_CONTEXT */

/* Define to 1 if you have the <gss.h> header file. */
/* #undef HAVE_GSS_H */

/* Define to 1 if you have gss_map_name_to_any */
/* #undef HAVE_GSS_MAP_ANY_TO_ANY */

/* Define to 1 if you have the 'gss_map_name_to_any' function. */
/* #undef HAVE_GSS_MAP_NAME_TO_ANY */

/* Define to 1 if you have the 'htole16' function. */
/* #undef HAVE_HTOLE16 */

/* Define to 1 if you have the 'htole32' function. */
/* #undef HAVE_HTOLE32 */

/* Define to 1 if you have the <iads.h> header file. */
/* #undef HAVE_IADS_H */

/* Define to 1 if you have the 'initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define to 1 if you have the <initguid.h> header file. */
/* #undef HAVE_INITGUID_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the 'ioctl' function. */
#define HAVE_IOCTL 1

/* The system provides struct iovec */
#define HAVE_IOVEC 1

/* Define to 1 if you have the <io.h> header file. */
/* #undef HAVE_IO_H */

/* Define to 1 if you have the <ipl.h> header file. */
/* #undef HAVE_IPL_H */

/* Define to 1 if you have the <ip_compat.h> header file. */
/* #undef HAVE_IP_COMPAT_H */

/* Define to 1 if you have the <ip_fil_compat.h> header file. */
/* #undef HAVE_IP_FIL_COMPAT_H */

/* Define to 1 if you have the <ip_fil.h> header file. */
/* #undef HAVE_IP_FIL_H */

/* Define to 1 if you have the <ip_nat.h> header file. */
/* #undef HAVE_IP_NAT_H */

/* Define to 1 if you have the 'kqueue' function. */
#define HAVE_KQUEUE 1

/* KRB5 support */
/* #undef HAVE_KRB5 */

/* Define to 1 if you have krb5_free_error_message */
/* #undef HAVE_KRB5_FREE_ERROR_MESSAGE */

/* Define to 1 if you have krb5_free_error_string */
/* #undef HAVE_KRB5_FREE_ERROR_STRING */

/* Define to 1 if you have krb5_get_error_message */
/* #undef HAVE_KRB5_GET_ERROR_MESSAGE */

/* Define to 1 if you have krb5_get_err_text */
/* #undef HAVE_KRB5_GET_ERR_TEXT */

/* Define to 1 if you krb5_get_init_creds_free requires krb5_context */
/* #undef HAVE_KRB5_GET_INIT_CREDS_FREE_CONTEXT */

/* Define to 1 if you have krb5_get_init_creds_opt_alloc */
/* #undef HAVE_KRB5_GET_INIT_CREDS_OPT_ALLOC */

/* Define to 1 if you have krb5_get_max_time_skew */
/* #undef HAVE_KRB5_GET_MAX_TIME_SKEW */

/* Define to 1 if you have krb5_get_profile */
/* #undef HAVE_KRB5_GET_PROFILE */

/* Define to 1 if you have krb5_get_renewed_creds */
/* #undef HAVE_KRB5_GET_RENEWED_CREDS */

/* Define to 1 if you have the <krb5.h> header file. */
/* #undef HAVE_KRB5_H */

/* Define to 1 if you have krb5_kt_free_entry */
/* #undef HAVE_KRB5_KT_FREE_ENTRY */

/* Define if kerberos has MEMORY: cache support */
/* #undef HAVE_KRB5_MEMORY_CACHE */

/* Define if kerberos has MEMORY: keytab support */
/* #undef HAVE_KRB5_MEMORY_KEYTAB */

/* Define to 1 if you have krb5_pac */
/* #undef HAVE_KRB5_PAC */

/* Define to 1 if you have krb5_principal_get_realm */
/* #undef HAVE_KRB5_PRINCIPAL_GET_REALM */

/* Define to 1 if you have the <lber.h> header file. */
#define HAVE_LBER_H 1

/* Define to 1 if you have LDAP */
#define HAVE_LDAP 1

/* Define to 1 if you have ldapssl_client_init */
/* #undef HAVE_LDAPSSL_CLIENT_INIT */

/* Define to 1 if you have the <ldap.h> header file. */
#define HAVE_LDAP_H 1

/* Define to 1 if you have LDAP_OPT_DEBUG_LEVEL */
#define HAVE_LDAP_OPT_DEBUG_LEVEL 1

/* Define to 1 if you have LDAP_REBINDPROC_CALLBACK */
#define HAVE_LDAP_REBINDPROC_CALLBACK 0

/* Define to 1 if you have LDAP_REBIND_FUNCTION */
#define HAVE_LDAP_REBIND_FUNCTION 0

/* Define to 1 if you have LDAP_REBIND_PROC */
#define HAVE_LDAP_REBIND_PROC 1

/* Define to 1 if you have LDAP_SCOPE_DEFAULT */
#define HAVE_LDAP_SCOPE_DEFAULT 1

/* Define to 1 if you have ldap_start_tls_s */
/* #undef HAVE_LDAP_START_TLS_S */

/* Define to 1 if you have ldap_url_desc2str */
/* #undef HAVE_LDAP_URL_DESC2STR */

/* Define to 1 if you have LDAP_URL_LUD_SCHEME */
#define HAVE_LDAP_URL_LUD_SCHEME 0

/* Define to 1 if you have ldap_url_parse */
/* #undef HAVE_LDAP_URL_PARSE */

/* Define to 1 if you have the 'le16toh' function. */
/* #undef HAVE_LE16TOH */

/* Define to 1 if you have the 'le32toh' function. */
/* #undef HAVE_LE32TOH */

/* Define as 1 to enable 'cap' library support. */
/* #undef HAVE_LIBCAP */

/* Define as 1 to enable 'cppunit' library support. */
#define HAVE_LIBCPPUNIT 1

/* "Define to 1 if the ASN1_STRING_get0_data() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_ASN1_STRING_GET0_DATA */

/* "Define to 1 if the BIO_get_data() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_BIO_GET_DATA */

/* "Define to 1 if the BIO_get_init() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_BIO_GET_INIT */

/* "Define to 1 if the BIO_meth_new() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_BIO_METH_NEW */

/* "Define to 1 if the DH_up_ref() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_DH_UP_REF */

/* "Define to 1 if the EVP_PKEY_get0_RSA() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_EVP_PKEY_GET0_RSA */

/* "Define to 1 if the EVP_PKEY_up_ref() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_EVP_PKEY_UP_REF */

/* "Define to 1 if the OPENSSL_LH_strhash() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_OPENSSL_LH_STRHASH */

/* "Define to 1 if the X509_chain_up_ref() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_X509_CHAIN_UP_REF */

/* "Define to 1 if the X509_CRL_up_ref() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_X509_CRL_UP_REF */

/* "Define to 1 if the X509_get0_signature() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_X509_GET0_SIGNATURE */

/* "Define to 1 if the X509_STORE_CTX_get0_cert() OpenSSL API function exists"
   */
/* #undef HAVE_LIBCRYPTO_X509_STORE_CTX_GET0_CERT */

/* "Define to 1 if the X509_STORE_CTX_get0_untrusted() OpenSSL API function
   exists" */
/* #undef HAVE_LIBCRYPTO_X509_STORE_CTX_GET0_UNTRUSTED */

/* "Define to 1 if the X509_up_ref() OpenSSL API function exists" */
/* #undef HAVE_LIBCRYPTO_X509_UP_REF */

/* "Define to 1 if the X509_VERIFY_PARAM_get_depth() OpenSSL API function
   exists" */
/* #undef HAVE_LIBCRYPTO_X509_VERIFY_PARAM_GET_DEPTH */

/* Define to 1 if you have the <libc.h> header file. */
#define HAVE_LIBC_H 1

/* Define as 1 to enable 'dl' library support. */
#define HAVE_LIBDL 1

/* Define if libdlloader will be built on this platform */
#define HAVE_LIBDLLOADER 1

/* Define to 1 if you have the <libecap/adapter/service.h> header file. */
/* #undef HAVE_LIBECAP_ADAPTER_SERVICE_H */

/* Define to 1 if you have the <libecap/adapter/xaction.h> header file. */
/* #undef HAVE_LIBECAP_ADAPTER_XACTION_H */

/* Define to 1 if you have the <libecap/common/area.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_AREA_H */

/* Define to 1 if you have the <libecap/common/body.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_BODY_H */

/* Define to 1 if you have the <libecap/common/delay.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_DELAY_H */

/* Define to 1 if you have the <libecap/common/forward.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_FORWARD_H */

/* Define to 1 if you have the <libecap/common/header.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_HEADER_H */

/* Define to 1 if you have the <libecap/common/memory.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_MEMORY_H */

/* Define to 1 if you have the <libecap/common/message.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_MESSAGE_H */

/* Define to 1 if you have the <libecap/common/named_values.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_NAMED_VALUES_H */

/* Define to 1 if you have the <libecap/common/names.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_NAMES_H */

/* Define to 1 if you have the <libecap/common/name.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_NAME_H */

/* Define to 1 if you have the <libecap/common/options.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_OPTIONS_H */

/* Define to 1 if you have the <libecap/common/registry.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_REGISTRY_H */

/* Define to 1 if you have the <libecap/common/version.h> header file. */
/* #undef HAVE_LIBECAP_COMMON_VERSION_H */

/* Define to 1 if you have the <libecap/host/host.h> header file. */
/* #undef HAVE_LIBECAP_HOST_HOST_H */

/* Define to 1 if you have the <libecap/host/xaction.h> header file. */
/* #undef HAVE_LIBECAP_HOST_XACTION_H */

/* Define to 1 if you have the 'gnumalloc' library (-lgnumalloc). */
/* #undef HAVE_LIBGNUMALLOC */

/* Define as 1 to enable 'gnutls' library support. */
/* #undef HAVE_LIBGNUTLS */

/* Define as 1 to enable 'gss' library support. */
/* #undef HAVE_LIBGSS */

/* Define as 1 to enable 'heimdal-krb5' library support. */
/* #undef HAVE_LIBHEIMDAL_KRB5 */

/* Define to 1 if you have the 'intl' library (-lintl). */
/* #undef HAVE_LIBINTL */

/* Define as 1 to enable 'ldap' library support. */
/* #undef HAVE_LIBLDAP */

/* Define to 1 if you have the 'malloc' library (-lmalloc). */
/* #undef HAVE_LIBMALLOC */

/* Define as 1 to enable 'mit-krb5' library support. */
/* #undef HAVE_LIBMIT_KRB5 */

/* Define as 1 to enable 'netfilter-conntrack' library support. */
/* #undef HAVE_LIBNETFILTER_CONNTRACK */

/* Define to 1 if you have the
   <libnetfilter_conntrack/libnetfilter_conntrack.h> header file. */
/* #undef HAVE_LIBNETFILTER_CONNTRACK_LIBNETFILTER_CONNTRACK_H */

/* Define to 1 if you have the
   <libnetfilter_conntrack/libnetfilter_conntrack_tcp.h> header file. */
/* #undef HAVE_LIBNETFILTER_CONNTRACK_LIBNETFILTER_CONNTRACK_TCP_H */

/* Define as 1 to enable 'nettle' library support. */
/* #undef HAVE_LIBNETTLE */

/* Define as 1 to enable 'psapi' library support. */
/* #undef HAVE_LIBPSAPI */

/* Define as 1 to enable 'sasl' library support. */
/* #undef HAVE_LIBSASL */

/* "Define to 1 if the OPENSSL_init_ssl() OpenSSL API function exists" */
/* #undef HAVE_LIBSSL_OPENSSL_INIT_SSL */

/* "Define to 1 if the SSL_CIPHER_find() OpenSSL API function exists" */
/* #undef HAVE_LIBSSL_SSL_CIPHER_FIND */

/* "Define to 1 if the SSL_CTX_set_tmp_rsa_callback() OpenSSL API function
   exists" */
/* #undef HAVE_LIBSSL_SSL_CTX_SET_TMP_RSA_CALLBACK */

/* "Define to 1 if the SSL_get_client_random() OpenSSL API function exists" */
/* #undef HAVE_LIBSSL_SSL_GET_CLIENT_RANDOM */

/* "Define to 1 if the SSL_SESSION_get_id() OpenSSL API function exists" */
/* #undef HAVE_LIBSSL_SSL_SESSION_GET_ID */

/* "Define to 1 if the SSL_SESSION_get_master_key() OpenSSL API function
   exists" */
/* #undef HAVE_LIBSSL_SSL_SESSION_GET_MASTER_KEY */

/* Define as 1 to enable 'systemd' library support. */
/* #undef HAVE_LIBSYSTEMD */

/* Define as 1 to enable 'tdb' library support. */
/* #undef HAVE_LIBTDB */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/netfilter_ipv4.h> header file. */
/* #undef HAVE_LINUX_NETFILTER_IPV4_H */

/* Define to 1 if you have the <linux/netfilter_ipv6/ip6_tables.h> header
   file. */
/* #undef HAVE_LINUX_NETFILTER_IPV6_IP6_TABLES_H */

/* Define to 1 if you have the <linux/posix_types.h> header file. */
/* #undef HAVE_LINUX_POSIX_TYPES_H */

/* Define to 1 if you have the <linux/types.h> header file. */
/* #undef HAVE_LINUX_TYPES_H */

/* Define to 1 if you have the <lm.h> header file. */
/* #undef HAVE_LM_H */

/* Define this if a modern libltdl is already installed */
#define HAVE_LTDL 1

/* Define to 1 if you have the <machine/byte_swap.h> header file. */
/* #undef HAVE_MACHINE_BYTE_SWAP_H */

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
#define HAVE_MACH_O_DYLD_H 1

/* Define to 1 if you have the 'mallocblksize' function. */
/* #undef HAVE_MALLOCBLKSIZE */

/* Define to 1 if you have the <malloc.h> header file. */
/* #undef HAVE_MALLOC_H */

/* Define to 1 if you have the 'mallopt' function. */
/* #undef HAVE_MALLOPT */

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the 'memcpy' function. */
#define HAVE_MEMCPY 1

/* Define to 1 if you have the 'memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the 'memrchr' function. */
/* #undef HAVE_MEMRCHR */

/* Define to 1 if you have the 'memset' function. */
#define HAVE_MEMSET 1

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef HAVE_MINIX_CONFIG_H */

/* Define to 1 if you have the 'mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the 'mktime' function. */
#define HAVE_MKTIME 1

/* mode_t is defined by the system headers */
#define HAVE_MODE_T 1

/* Define to 1 if you have the <mount.h> header file. */
/* #undef HAVE_MOUNT_H */

/* Define to 1 if you have the <mozldap/ldap.h> header file. */
/* #undef HAVE_MOZLDAP_LDAP_H */

/* The system provides struct msghdr */
#define HAVE_MSGHDR 1

/* Define to 1 if you have the 'mstats' function. */
#define HAVE_MSTATS 1

/* Define to 1 if you have the <mswsock.h> header file. */
/* #undef HAVE_MSWSOCK_H */

/* mtyp_t is defined by the system headers */
/* #undef HAVE_MTYP_T */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/icmp6.h> header file. */
#define HAVE_NETINET_ICMP6_H 1

/* Define to 1 if you have the <netinet/if_ether.h> header file. */
#define HAVE_NETINET_IF_ETHER_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/in_systm.h> header file. */
#define HAVE_NETINET_IN_SYSTM_H 1

/* Define to 1 if you have the <netinet/ip6.h> header file. */
#define HAVE_NETINET_IP6_H 1

/* Define to 1 if you have the <netinet/ipl.h> header file. */
/* #undef HAVE_NETINET_IPL_H */

/* Define to 1 if you have the <netinet/ip_compat.h> header file. */
/* #undef HAVE_NETINET_IP_COMPAT_H */

/* Define to 1 if you have the <netinet/ip_fil_compat.h> header file. */
/* #undef HAVE_NETINET_IP_FIL_COMPAT_H */

/* Define to 1 if you have the <netinet/ip_fil.h> header file. */
/* #undef HAVE_NETINET_IP_FIL_H */

/* Define to 1 if you have the <netinet/ip.h> header file. */
#define HAVE_NETINET_IP_H 1

/* Define to 1 if you have the <netinet/ip_icmp.h> header file. */
#define HAVE_NETINET_IP_ICMP_H 1

/* Define to 1 if you have the <netinet/ip_nat.h> header file. */
/* #undef HAVE_NETINET_IP_NAT_H */

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define to 1 if you have the <nettle/base64.h> header file. */
/* #undef HAVE_NETTLE_BASE64_H */

/* Define to 1 if you have the <nettle/md5.h> header file. */
/* #undef HAVE_NETTLE_MD5_H */

/* Define to 1 if you have the <net/if_arp.h> header file. */
#define HAVE_NET_IF_ARP_H 1

/* Define to 1 if you have the <net/if_dl.h> header file. */
#define HAVE_NET_IF_DL_H 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the <net/pfvar.h> header file. */
/* #undef HAVE_NET_PFVAR_H */

/* Define to 1 if you have the <net/pf/pfvar.h> header file. */
/* #undef HAVE_NET_PF_PFVAR_H */

/* Define to 1 if you have the <net/route.h> header file. */
#define HAVE_NET_ROUTE_H 1

/* Define to 1 if you have the <ntsecapi.h> header file. */
/* #undef HAVE_NTSECAPI_H */

/* Define to 1 if you have the <objbase.h> header file. */
/* #undef HAVE_OBJBASE_H */

/* Define to 1 if you have the 'opendir' function. */
#define HAVE_OPENDIR 1

/* Define to 1 if you have the <openssl/asn1.h> header file. */
/* #undef HAVE_OPENSSL_ASN1_H */

/* Define to 1 if you have the <openssl/bio.h> header file. */
/* #undef HAVE_OPENSSL_BIO_H */

/* Define to 1 if you have the <openssl/bn.h> header file. */
/* #undef HAVE_OPENSSL_BN_H */

/* Define to 1 if you have the <openssl/crypto.h> header file. */
/* #undef HAVE_OPENSSL_CRYPTO_H */

/* Define to 1 if you have the <openssl/decoder.h> header file. */
/* #undef HAVE_OPENSSL_DECODER_H */

/* Define to 1 if you have the <openssl/dh.h> header file. */
/* #undef HAVE_OPENSSL_DH_H */

/* Define to 1 if you have the <openssl/engine.h> header file. */
/* #undef HAVE_OPENSSL_ENGINE_H */

/* Define to 1 if you have the <openssl/err.h> header file. */
/* #undef HAVE_OPENSSL_ERR_H */

/* Define to 1 if you have the <openssl/evp.h> header file. */
/* #undef HAVE_OPENSSL_EVP_H */

/* Define to 1 if you have the <openssl/lhash.h> header file. */
/* #undef HAVE_OPENSSL_LHASH_H */

/* Define to 1 if you have the <openssl/md5.h> header file. */
/* #undef HAVE_OPENSSL_MD5_H */

/* Define to 1 if you have the <openssl/opensslv.h> header file. */
/* #undef HAVE_OPENSSL_OPENSSLV_H */

/* Define to 1 if you have the <openssl/pem.h> header file. */
/* #undef HAVE_OPENSSL_PEM_H */

/* Define to 1 if you have the <openssl/rsa.h> header file. */
/* #undef HAVE_OPENSSL_RSA_H */

/* Define to 1 if you have the <openssl/ssl.h> header file. */
/* #undef HAVE_OPENSSL_SSL_H */

/* "Define to 1 if the TLS_client_method() OpenSSL API function exists" */
/* #undef HAVE_OPENSSL_TLS_CLIENT_METHOD */

/* "Define to 1 if the TLS_method() OpenSSL API function exists" */
/* #undef HAVE_OPENSSL_TLS_METHOD */

/* "Define to 1 if the TLS_server_method() OpenSSL API function exists" */
/* #undef HAVE_OPENSSL_TLS_SERVER_METHOD */

/* Define to 1 if you have the <openssl/txt_db.h> header file. */
/* #undef HAVE_OPENSSL_TXT_DB_H */

/* Define to 1 if you have the <openssl/x509v3.h> header file. */
/* #undef HAVE_OPENSSL_X509V3_H */

/* Define to 1 if you have the <openssl/x509.h> header file. */
/* #undef HAVE_OPENSSL_X509_H */

/* pad128_t is defined in system headers */
/* #undef HAVE_PAD128_T */

/* Define to 1 if you have the <paths.h> header file. */
#define HAVE_PATHS_H 1

/* Define to 1 if you have the 'poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the 'prctl' function. */
/* #undef HAVE_PRCTL */

/* Define if libtool can extract symbol lists from object files. */
#define HAVE_PRELOADED_SYMBOLS 1

/* Define to 1 if you have the <priv.h> header file. */
/* #undef HAVE_PRIV_H */

/* Define to 1 if you have the 'procctl' function. */
/* #undef HAVE_PROCCTL */

/* Define to 1 if you have profile_get_integer */
/* #undef HAVE_PROFILE_GET_INTEGER */

/* Define to 1 if you have the <profile.h> header file. */
/* #undef HAVE_PROFILE_H */

/* Define to 1 if you have profile_release */
/* #undef HAVE_PROFILE_RELEASE */

/* Define to 1 if you have the <psapi.h> header file. */
/* #undef HAVE_PSAPI_H */

/* Define to 1 if you have the 'psignal' function. */
#define HAVE_PSIGNAL 1

/* Define to 1 if you have the 'pthread_attr_setschedparam' function. */
#define HAVE_PTHREAD_ATTR_SETSCHEDPARAM 1

/* Define to 1 if you have the 'pthread_attr_setscope' function. */
#define HAVE_PTHREAD_ATTR_SETSCOPE 1

/* Define to 1 if you have the 'pthread_setschedparam' function. */
#define HAVE_PTHREAD_SETSCHEDPARAM 1

/* Define to 1 if you have the 'pthread_sigmask' function. */
#define HAVE_PTHREAD_SIGMASK 1

/* Define to 1 if you have the 'putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the 'readdir' function. */
#define HAVE_READDIR 1

/* Define to 1 if you have the 'regcomp' function. */
#define HAVE_REGCOMP 1

/* Define to 1 if you have the 'regexec' function. */
#define HAVE_REGEXEC 1

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the 'regfree' function. */
#define HAVE_REGFREE 1

/* Define to 1 if you have the <resolv.h> header file. */
#define HAVE_RESOLV_H 1

/* Define to 1 if you have the 'res_init' function. */
#define HAVE_RES_INIT 1

/* Define to 1 if you have the 'rint' function. */
#define HAVE_RINT 1

/* Define to 1 if you have the <rpcsvc/ypclnt.h> header file. */
/* #undef HAVE_RPCSVC_YPCLNT_H */

/* Define to 1 if you have the <rpcsvc/yp_prot.h> header file. */
/* #undef HAVE_RPCSVC_YP_PROT_H */

/* Define to 1 if you have the <rpc/rpc.h> header file. */
/* #undef HAVE_RPC_RPC_H */

/* Define to 1 if you have the <sasl.h> header file. */
/* #undef HAVE_SASL_H */

/* Define to 1 if you have the <sasl/sasl.h> header file. */
#define HAVE_SASL_SASL_H 1

/* Define to 1 if you have the 'sched_getaffinity' function. */
/* #undef HAVE_SCHED_GETAFFINITY */

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the 'sched_setaffinity' function. */
/* #undef HAVE_SCHED_SETAFFINITY */

/* Define to 1 if you have the <sddl.h> header file. */
/* #undef HAVE_SDDL_H */

/* Define to 1 if you have the <security.h> header file. */
/* #undef HAVE_SECURITY_H */

/* Define to 1 if you have the <security/pam_appl.h> header file. */
/* #undef HAVE_SECURITY_PAM_APPL_H */

/* Define to 1 if you have the 'select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the 'seteuid' function. */
#define HAVE_SETEUID 1

/* Define to 1 if you have the 'setgroups' function. */
#define HAVE_SETGROUPS 1

/* Define to 1 if you have the 'setpflags' function. */
/* #undef HAVE_SETPFLAGS */

/* Define to 1 if you have the 'setpgrp' function. */
#define HAVE_SETPGRP 1

/* Define to 1 if you have the 'setresuid' function. */
/* #undef HAVE_SETRESUID */

/* Define to 1 if you have the 'setrlimit' function. */
#define HAVE_SETRLIMIT 1

/* Define to 1 if you have the 'setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the <shadow.h> header file. */
/* #undef HAVE_SHADOW_H */

/* Define if you have the shl_load function. */
/* #undef HAVE_SHL_LOAD */

/* Support shared memory features */
#define HAVE_SHM 1

/* Define to 1 if you have the 'sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the <siginfo.h> header file. */
/* #undef HAVE_SIGINFO_H */

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Defined if struct sockaddr_in6 has sin6_len */
#define HAVE_SIN6_LEN_IN_SAI 1

/* Define if sockaddr_in has field sin_len */
#define HAVE_SIN_LEN_IN_SAI 1

/* Define to 1 if you have the 'snprintf' function. */
#define HAVE_SNPRINTF 1

/* The system provides sockaddr_un */
#define HAVE_SOCKADDR_UN 1

/* Define to 1 if you have the 'socketpair' function. */
#define HAVE_SOCKETPAIR 1

/* socklen_t is defined by the system headers */
#define HAVE_SOCKLEN_T 1

/* SPNEGO support */
/* #undef HAVE_SPNEGO */

/* SSL_CTX_get0_certificate is available */
/* #undef HAVE_SSL_CTX_GET0_CERTIFICATE */

/* "Define to 1 of the SSL_get0_param() OpenSSL API function exists" */
/* #undef HAVE_SSL_GET0_PARAM */

/* Define to 1 if you have the <sspi.h> header file. */
/* #undef HAVE_SSPI_H */

/* Define if sockaddr_storage has field ss_len */
#define HAVE_SS_LEN_IN_SS 1

/* Define to 1 if you have the 'statfs' function. */
/* #undef HAVE_STATFS */

/* set to 1 if our system has statvfs(), and if it actually works */
#define HAVE_STATVFS 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the 'strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the 'strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the 'strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the 'strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if 'ip_hl' is a member of 'struct iphdr'. */
#define HAVE_STRUCT_IPHDR_IP_HL 1

/* Define to 1 if 'nl_inipaddr.in6' is a member of 'struct natlookup'. */
/* #undef HAVE_STRUCT_NATLOOKUP_NL_INIPADDR_IN6 */

/* Define to 1 if 'nl_realipaddr.in6' is a member of 'struct natlookup'. */
/* #undef HAVE_STRUCT_NATLOOKUP_NL_REALIPADDR_IN6 */

/* The system provides struct rusage */
#define HAVE_STRUCT_RUSAGE 1

/* Define to 1 if 'tm_gmtoff' is a member of 'struct tm'. */
#define HAVE_STRUCT_TM_TM_GMTOFF 1

/* Define to 1 if you have the <syscall.h> header file. */
/* #undef HAVE_SYSCALL_H */

/* Define to 1 if you have the 'sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the 'syslog' function. */
#define HAVE_SYSLOG 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <systemd/sd-daemon.h> header file. */
/* #undef HAVE_SYSTEMD_SD_DAEMON_H */

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/bswap.h> header file. */
/* #undef HAVE_SYS_BSWAP_H */

/* Define to 1 if you have the <sys/capability.h> header file. */
/* #undef HAVE_SYS_CAPABILITY_H */

/* Define to 1 if you have the <sys/devpoll.h> header file. */
/* #undef HAVE_SYS_DEVPOLL_H */

/* Define to 1 if you have the <sys/dl.h> header file. */
/* #undef HAVE_SYS_DL_H */

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
/* #undef HAVE_SYS_EPOLL_H */

/* Define to 1 if you have the <sys/event.h> header file. */
#define HAVE_SYS_EVENT_H 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioccom.h> header file. */
/* #undef HAVE_SYS_IOCCOM_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/ipc.cc> header file. */
/* #undef HAVE_SYS_IPC_CC */

/* Define to 1 if you have the <sys/md5.h> header file. */
/* #undef HAVE_SYS_MD5_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/msg.h> header file. */
#define HAVE_SYS_MSG_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
/* #undef HAVE_SYS_PRCTL_H */

/* Define to 1 if you have the <sys/procctl.h> header file. */
/* #undef HAVE_SYS_PROCCTL_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */
#define HAVE_SYS_SHM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
#define HAVE_SYS_SOCKIO_H 1

/* Define to 1 if you have the <sys/statfs.h> header file. */
/* #undef HAVE_SYS_STATFS_H */

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/syscall.h> header file. */
#define HAVE_SYS_SYSCALL_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
/* #undef HAVE_SYS_VFS_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <tchar.h> header file. */
/* #undef HAVE_TCHAR_H */

/* Define to 1 if you have the <tdb.h> header file. */
/* #undef HAVE_TDB_H */

/* Define to 1 if you have the 'tempnam' function. */
#define HAVE_TEMPNAM 1

/* Define to 1 if you have the 'timegm' function. */
#define HAVE_TIMEGM 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* System supports unix sockets */
#define HAVE_UNIXSOCKET 1

/* upad128_t is defined in system headers */
/* #undef HAVE_UPAD128_T */

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the <valgrind/memcheck.h> header file. */
/* #undef HAVE_VALGRIND_MEMCHECK_H */

/* Define to 1 if you have the <varargs.h> header file. */
/* #undef HAVE_VARARGS_H */

/* Define to 1 if you have the 'vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <w32api/windows.h> header file. */
/* #undef HAVE_W32API_WINDOWS_H */

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to 1 if you have the <winldap.h> header file. */
/* #undef HAVE_WINLDAP_H */

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* This value is set to 1 to indicate that the system argz facility works */
/* #undef HAVE_WORKING_ARGZ */

/* Define to 1 if you have the 'write' function. */
#define HAVE_WRITE 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* "Define to 1 if the X509_VERIFY_PARAM_set_auth_level() OpenSSL API function
   exists" */
/* #undef HAVE_X509_VERIFY_PARAM_SET_AUTH_LEVEL */

/* Define to 1 if you have the '__htole16' function. */
/* #undef HAVE___HTOLE16 */

/* Define to 1 if you have the '__htole32' function. */
/* #undef HAVE___HTOLE32 */

/* Define to 1 if you have the '__le16toh' function. */
/* #undef HAVE___LE16TOH */

/* Define to 1 if you have the '__le32toh' function. */
/* #undef HAVE___LE32TOH */

/* Define to 1 if you have the '__res_init' function. */
/* #undef HAVE___RES_INIT */

/* Enable ICAP client features in Squid */
#define ICAP_CLIENT 1

/* Enable support for Transparent Proxy on systems using FreeBSD IPFW-style
   firewalling. */
#define IPFW_TRANSPARENT 1

/* Enable support for IPF-style transparent proxying */
#define IPF_TRANSPARENT 0

/* libresolv.a has been hacked to export _dns_ttl_ */
#define LIBRESOLV_DNS_TTL_HACK 0

/* Enable support for Transparent Proxy on Linux via Netfilter */
#define LINUX_NETFILTER 0

/* Define if the OS needs help to load dependent libraries for dlopen(). */
/* #undef LTDL_DLOPEN_DEPLIBS */

/* Define to the system default library search path. */
#define LT_DLSEARCH_PATH "/usr/local/lib:/lib:/usr/lib"

/* The archive extension */
#define LT_LIBEXT "a"

/* The archive prefix */
#define LT_LIBPREFIX "lib"

/* Define to the extension used for runtime loadable modules, say, ".so". */
#define LT_MODULE_EXT ".so"

/* Define to the name of the environment variable that determines the run-time
   module search path. */
#define LT_MODULE_PATH_VAR "DYLD_LIBRARY_PATH"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to the shared library suffix, say, ".dylib". */
#define LT_SHARED_EXT ".dylib"

/* Define to the shared archive member specification, say "(shr.o)". */
/* #undef LT_SHARED_LIB_MEMBER */

/* If MAXPATHLEN has not been defined */
/* #undef MAXPATHLEN */

/* If we need to declare sys_errlist as extern */
#define NEED_SYS_ERRLIST 1

/* Define if dlsym() requires a leading underscore in symbol names. */
/* #undef NEED_USCORE */

/* Name of package */
#define PACKAGE "squid"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://bugs.squid-cache.org/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Squid Web Proxy"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Squid Web Proxy 7.0.0-VCS"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "squid"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "7.0.0-VCS"

/* Defined to const or empty depending on the style used by the OS to refer to
   the PAM message dialog func */
/* #undef PAM_CONV_FUNC_CONST_PARM */

/* Enable support for PF-style transparent proxying */
#define PF_TRANSPARENT 0

/* Print stack traces on fatal errors */
#define PRINT_STACK_TRACE 1

/* The size of 'int64_t', as computed by sizeof. */
#define SIZEOF_INT64_T 8

/* The size of 'long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of 'off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of 'size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 8

/* The size of 'void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Squid extended build info field for "squid -v" output */
#define SQUID_BUILD_INFO "squid test build"

/* configure command line used to configure Squid */
#define SQUID_CONFIGURE_OPTIONS " '--enable-shared' '--enable-optimizations' '--enable-inline' '--enable-xmalloc-statistics' '--enable-async-io' '--enable-storeio' '--enable-disk-io' '--enable-removal-policies' '--enable-icmp' '--enable-delay-pools' '--enable-icap-client' '--enable-useragent-log' '--enable-referer-log' '--enable-wccp' '--enable-wccpv2' '--enable-snmp' '--enable-eui' '--enable-htcp' '--enable-ssl' '--enable-forw-via-db' '--enable-cache-digests' '--enable-poll' '--enable-select' '--enable-http-violations' '--enable-ipfw-transparent' '--enable-follow-x-forwarded-for' '--enable-internal-dns' '--enable-default-hostsfile' '--disable-auth' '--disable-basic-auth-helpers' '--disable-ntlm-auth-helpers' '--disable-negotiate-auth-helpers' '--disable-digest-auth-helpers' '--disable-ntlm-fail-open' '--enable-external-acl-helpers' '--enable-url-rewrite-helpers' '--enable-mempools' '--enable-unlinkd' '--enable-stacktraces' '--enable-vary' '--enable-x-accelerator-vary' '--enable-ipv6' '--enable-auto-locale' '--disable-translation' '--enable-zph-qos' '--with-aio' '--with-build-environment=default' '--with-dl' '--with-dns-cname' '--with-gnu-ld' '--with-ipv6-split-stack' '--with-large-files' '--with-pic' '--with-pthreads' '--enable-build-info=squid test build'"

/* Define to const if X509_get0_signature() accepts const parameters; define
   as empty otherwise. Don't leave it undefined! */
/* #undef SQUID_CONST_X509_GET0_SIGNATURE_ARGS */

/* UDP receive buffer size */
#define SQUID_DETECT_UDP_SO_RCVBUF 786896

/* UDP send buffer size */
#define SQUID_DETECT_UDP_SO_SNDBUF 9216

/* Maximum number of open filedescriptors */
#define SQUID_MAXFD 10240

/* Define to enable SNMP monitoring of Squid */
#define SQUID_SNMP 1

/* "Define to 1 if the SSL_get_certificate crashes squid" */
/* #undef SQUID_SSLGETCERTIFICATE_BUGGY */

/* "Define to 1 if the TXT_DB uses OPENSSL_PSTRING data member" */
/* #undef SQUID_SSLTXTDB_PSTRINGDATA */

/* "Define to 1 to use squid workaround for buggy versions of
   sk_OPENSSL_PSTRING_value" */
/* #undef SQUID_STACKOF_PSTRINGDATA_HACK */

/* TCP receive buffer size */
#define SQUID_TCP_SO_RCVBUF 65535

/* TCP send buffer size */
#define SQUID_TCP_SO_SNDBUF 32768

/* "Define to 1 if the SSL_get_new_ex_index() dup callback accepts 'const
   CRYPTO_EX_DATA *'" */
/* #undef SQUID_USE_CONST_CRYPTO_EX_DATA_DUP */

/* "Define to 1 if the SSL_CTX_new and similar openSSL API functions require
   'const SSL_METHOD *'" */
/* #undef SQUID_USE_CONST_SSL_METHOD */

/* "Define to 1 if the SSL_CTX_sess_set_get_cb() callback accepts a const ID
   argument" */
/* #undef SQUID_USE_CONST_SSL_SESSION_CBID */

/* "Define to 1 to use squid workaround for SSL_get_certificate" */
/* #undef SQUID_USE_SSLGETCERTIFICATE_HACK */

/* "Define to 1 to use squid workaround for openssl IMPLEMENT_LHASH_* type
   conversion errors" */
/* #undef SQUID_USE_SSLLHASH_HACK */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if all of the C89 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* common adaptation support */
#define USE_ADAPTATION 1

/* Apple Kerberos support is available */
/* #undef USE_APPLE_KRB5 */

/* Enable support for authentication */
#define USE_AUTH 0

/* BerkleyDB support is available */
/* #undef USE_BERKLEYDB */

/* Use Cache Digests for locating objects in neighbor caches. */
#define USE_CACHE_DIGESTS 1

/* Traffic management via "delay pools". */
#define USE_DELAY_POOLS 1

/* Use /dev/poll for the IO loop */
/* #undef USE_DEVPOLL */

/* DiskIO modules are expected to be available. */
#define USE_DISKIO 1

/* Whether to use eCAP support */
#define USE_ECAP 0

/* Use epoll() for the IO loop */
/* #undef USE_EPOLL */

/* Use multi-language support on error pages */
#define USE_ERR_LOCALES 1

/* Enable Forw/Via database */
#define USE_FORW_VIA_DB 1

/* Define this to include code for the Hypertext Cache Protocol (HTCP) */
#define USE_HTCP 1

/* Define to enable code which volates the HTTP standard specification */
#define USE_HTTP_VIOLATIONS 1

/* Define to use Squid ICMP and Network Measurement features (highly
   recommended!) */
#define USE_ICMP 1

/* Enable support for IPv6 */
#define USE_IPV6 1

/* Use kqueue() for the IO loop */
#define USE_KQUEUE 1

/* Enable support for QOS netfilter mark preservation */
#define USE_LIBNETFILTERCONNTRACK 0

/* Support Loadable Modules */
#define USE_LOADABLE_MODULES 1

/* Enable support for /dev/pf NAT lookups */
#define USE_NAT_DEVPF 0

/* OpenSSL support is available */
/* #undef USE_OPENSSL */

/* Use poll() for the IO loop */
/* #undef USE_POLL */

/* Enable Zero Penalty Hit QOS. When set, Squid will alter the TOS field of
   HIT responses to help policing network traffic */
#define USE_QOS_TOS 1

/* Use select() for the IO loop */
/* #undef USE_SELECT */

/* Workaround IPFilter minor_t breakage */
/* #undef USE_SOLARIS_IPFILTER_MINOR_T_HACK */

/* Solaris Kerberos support is available */
/* #undef USE_SOLARIS_KRB5 */

/* Define this to include code which lets you use ethernet addresses. This
   code uses API initially defined in 4.4-BSD. */
#define USE_SQUID_EUI 1

/* Use ssl-crtd daemon */
#define USE_SSL_CRTD 0

/* Enable extensions on AIX, Interix, z/OS.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by C23 Annex F.  */
#ifndef __STDC_WANT_IEC_60559_EXT__
# define __STDC_WANT_IEC_60559_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by C23 Annex H and ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* Enable useage of unlinkd */
#define USE_UNLINKD 1

/* Define to enable WCCP */
#define USE_WCCP 1

/* Define to enable WCCP V2 */
#define USE_WCCPv2 1

/* Enable code supporting MS Windows service mode */
#define USE_WIN32_SERVICE 0

/* Version number of package */
#define VERSION "7.0.0-VCS"

/* Valgrind memory debugger support */
#define WITH_VALGRIND 0

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Show malloc statistics in status page */
#define XMALLOC_STATISTICS 1

/* Enable support for the X-Accelerator-Vary HTTP header */
#define X_ACCELERATOR_VARY 1

/* Nameserver Counter for IPv6 _res */
/* #undef _SQUID_RES_NSADDR6_COUNT */

/* If _res_ext structure has nsaddr_list member */
/* #undef _SQUID_RES_NSADDR6_LARRAY */

/* If _res structure has _ext.nsaddrs member */
/* #undef _SQUID_RES_NSADDR6_LPTR */

/* Nameserver counter for IPv4 _res */
#define _SQUID_RES_NSADDR_COUNT _res.nscount

/* If _res structure has ns_list member */
#define _SQUID_RES_NSADDR_LIST _res.nsaddr_list

/* Define for Solaris 2.5.1 so the uint32_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT32_T */

/* Define for Solaris 2.5.1 so the uint64_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT64_T */

/* Define for Solaris 2.5.1 so the uint8_t typedef from <sys/synch.h>,
   <pthread.h>, or <semaphore.h> is not used. If the typedef were allowed, the
   #define below would cause a syntax error. */
/* #undef _UINT8_T */

/* Define so that glibc/gnulib argp.h does not typedef error_t. */
#define __error_t_defined 1

/* Define to empty if 'const' does not conform to ANSI C. */
/* #undef const */

/* Define to a type to use for 'error_t' if it is not otherwise available. */
#define error_t int

/* Define as 'int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to the type of a signed integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int16_t */

/* Define to the type of a signed integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int32_t */

/* Define to the type of a signed integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef int64_t */

/* Define to the type of a signed integer type of width exactly 8 bits if such
   a type exists and the standard includes do not define it. */
/* #undef int8_t */

/* Define to 1 if you have Mozilla LDAP SDK */
/* #undef m4_translit */

/* Define to 'long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define as a signed integer type capable of holding a process identifier. */
/* #undef pid_t */

/* Define as 'unsigned int' if <stddef.h> doesn't define. */
/* #undef size_t */

/* Define as 'int' if <sys/types.h> doesn't define. */
/* #undef ssize_t */

/* Define as 'int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */

/* Define to the type of an unsigned integer type of width exactly 32 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint32_t */

/* Define to the type of an unsigned integer type of width exactly 64 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint64_t */

/* Define to the type of an unsigned integer type of width exactly 8 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint8_t */
