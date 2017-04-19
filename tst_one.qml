import QtTest 1.0
import demo 1.0

TestCase {
    name: "one"

    MyClass {
        id: myClass
    }

    SignalSpy {
        id: myClassFired
        target: myClass
        signalName: "fired"
    }

    function test_one() {
        myClass.fired();
        myClassFired.wait();
        print(myClassFired.count);
    }
}
