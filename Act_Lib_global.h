#ifndef ACT_LIB_GLOBAL_H
#define ACT_LIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ACT_LIB_LIBRARY)
#  define ACT_LIB_EXPORT Q_DECL_EXPORT
#else
#  define ACT_LIB_EXPORT Q_DECL_IMPORT
#endif

#endif // ACT_LIB_GLOBAL_H
