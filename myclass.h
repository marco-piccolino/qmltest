#ifndef MYCLASS_H
#define MYCLASS_H
#include <QtCore/QObject>
#include <QtCore/QDebug>

class MyClass: public QObject
      {
      Q_OBJECT
signals:
      void fired();
public slots:
      void onFired() {
            qDebug() << "happy";
            }
public:
      MyClass();
      };

#endif // MYCLASS_H
