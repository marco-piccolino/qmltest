#include "myclass.h"

MyClass::MyClass()
      {
      connect(this, &MyClass::fired, this, &MyClass::onFired);
      }
