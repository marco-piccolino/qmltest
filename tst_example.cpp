#include <QtQml>
#include <QtQuickTest/quicktest.h>
#include <QtCore/QCoreApplication>
#include "myclass.h"

void startup() {
      qmlRegisterType<MyClass>("demo",1,0,"MyClass");
      }

Q_COREAPP_STARTUP_FUNCTION(startup)

QUICK_TEST_MAIN(example)
