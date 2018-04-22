//license-placeholder 2018-4-20 JustinLau
#ifndef OUPUTLIB_GLOBAL_H
#define OUPUTLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(OUPUTLIB_LIBRARY)
#  define OUPUTLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define OUPUTLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // OUPUTLIB_GLOBAL_H
