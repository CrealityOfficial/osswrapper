#ifndef _NULLSPACE_OSS_WRAPPER_
#define _NULLSPACE_OSS_WRAPPER_
#include <ccglobal/export.h>

#if USE_OSSWRAPPER_DLL
#  define OSSWRAPPER_API CC_DECLARE_IMPORT
#elif USE_OSSWRAPPER_STATIC
#  define OSSWRAPPER_API CC_DECLARE_STATIC
#else
#  if OSSWRAPPER_DLL
#    define OSSWRAPPER_API CC_DECLARE_EXPORT
#  else
#    define OSSWRAPPER_API CC_DECLARE_STATIC
#  endif
#endif

#define OSS_WRAPPER_API OSSWRAPPER_API
#endif // _NULLSPACE_OSS_WRAPPER_
