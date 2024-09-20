#include <iostream>
#include "popov_class.h"

using namespace std;
using namespace popov;

class MyClass1 my1, my2;
class MyClass1 *pm1, *pm2;
class MyClass2 mx1, mx2;

void TestFunc(class MyClass1 m1) {
    class MyClass1 my1, my2;
}

class MyClass1 TestFunc2(class MyClass1 m1) {
    class MyClass1 my1, my2;
    return my1;
}

int main() {
    my1.set_a(35);
    my2 = my1;
    cout <<my1.get_a() << endl;
    cout << "Hello, World!" << endl;
    TestFunc(my2);
    my1 = TestFunc2(my2);
    cout << "Hello, World!" << endl;
    return 0;
}
