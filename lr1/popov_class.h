#ifndef POLITECH_POPOV_CLASS_H
#define POLITECH_POPOV_CLASS_H
#include <iostream>
using namespace std;
namespace popov
{
    class MyClass2
    {
    public:
       int i,k,l;
       double x,y,z;
       // constructor ta destructor
       MyClass2() // constructor
       {
           i = 1;
           k = 2;
           l = 33;
           cout << "constructor MyClass" << endl;
       }
       ~MyClass2() // destructor
       {
        cout << "destructor MyClass" << endl;
       }
    };

    class MyClass1
    {
        int a,b,c;
        double x,y,z;
        class MyClass2 mm1;
    public:
        // constructor ta destructor
        MyClass1() // constructor
        {
            a = 1;
            b = 2;
            c = 33;
            cout << "constructor MyClass" << endl;
        }
        ~MyClass1() // destructor
        {
            cout << "destructor MyClass" << endl;
        }

        //method class
        int get_a()
        {
            return this->a;
        }
        void set_a(int a)
        {
            this->a = a;
        }

        // constructor copy
        MyClass1 (const MyClass1 &tt) {
            this->a = tt.a;
            this->b = tt.b;
            this->c = tt.c;

            this->x = tt.x;
            this->y = tt.y;
            this->z = tt.z;

            this->mm1 = tt.mm1;

            cout << "Consrtuctor copy MyClass1" << endl;
        }

        MyClass1& operator=(const MyClass1 &tt)
        {
            if (this == &tt) {
                return *this;
            }

            this->a = tt.a;
            this->b = tt.b;
            this->c = tt.c;

            this->x = tt.x;
            this->y = tt.y;
            this->z = tt.z;

            this->mm1 = tt.mm1;

            cout << "method ravno MyClass1" << endl;
            return *this;
        }
    };

}

#endif //POLITECH_POPOV_CLASS_H
