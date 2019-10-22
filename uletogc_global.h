#ifndef ULETO_GC_GLOBAL_H
#define ULETO_GC_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ULETO_GC_LIBRARY)
#  define ULETO_GCSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ULETO_GCSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ULETO_GC_GLOBAL_H
