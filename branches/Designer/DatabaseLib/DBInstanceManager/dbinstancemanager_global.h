#ifndef DBINSTANCEMANAGER_GLOBAL_H
#define DBINSTANCEMANAGER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DBINSTANCEMANAGER_LIBRARY)
#  define DBINSTANCEMANAGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DBINSTANCEMANAGERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DBINSTANCEMANAGER_GLOBAL_H