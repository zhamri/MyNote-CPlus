#include <iostream>

using namespace std;

void contoh1() {
    cout << "======================================" << endl;
    cout << "Contoh-1" << endl;
    cout << "======================================" << endl;
    //    Relationship between p and v (where p = &v and v = *p)
    //    Relationship between p and x (where p = &x and x = *p)
    int x = 25;
    int *p = &x;

    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl;
}

void contoh2() {
    cout << "======================================" << endl;
    cout << "Contoh-2" << endl;
    cout << "======================================" << endl;
    int a = 1, b = 2;
    int *ip;

    ip = &a;
    b = *ip;
    *ip = 3;

    cout << "ip = " << ip << endl;
    cout << "&a = " << &a << endl;
    cout << "b = " << b << endl;
    cout << "*ip = " << *ip << endl;
    cout << "a = " << a << endl;
}

void contoh3() {
    cout << "======================================" << endl;
    cout << "Contoh-3" << endl;
    cout << "======================================" << endl;
    int m, *p, *q, *r;
    p = &m;
    q = &m;
    r = q;

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "r = " << r << endl;
}

void contoh4() {
    cout << "======================================" << endl;
    cout << "Contoh-4" << endl;
    cout << "======================================" << endl;
    int d;
    int *e, *f;
    e = &d;
    f = &d;
    d = *e * *f;

    cout << "e = " << e << endl;
    cout << "f = " << f << endl;
    cout << "d = " << d << endl;
}

void contoh5() {
    cout << "======================================" << endl;
    cout << "Contoh-5" << endl;
    cout << "======================================" << endl;
    // In C++ , array name always points to the first element of the array

    int vals[] = {40, 70, 110};
    cout << vals; // displays 0x4a00
    cout << vals[0]; // displays 4
    cout << *vals; // displays 4
    cout << vals; // displays 0x4a00

    int *valptr = vals;
    cout << valptr[1] << endl; // displays 7
    cout << *(valptr + 1) << endl; // point to vals[1], displays 7
    cout << *(valptr + 2) << endl; // point to vals[2], displays 11
    cout << *valptr + 2 << endl; // point to vals[0], then + 2, display 6
}

void contoh6() {
    cout << "======================================" << endl;
    cout << "Contoh-6" << endl;
    cout << "======================================" << endl;
    int number[5] = {22, 55, 44, 88, 99};
    cout << number << endl;
    cout << number[0] << endl;
    cout << *number << endl;

    int *ptr = number;
    cout << ptr[0] << endl;
    cout << *(number + 1) << endl;
    cout << *(number + 2) << endl;
}


int main() {
//    contoh1();
//    contoh2();
//    contoh3();
//    contoh4();
//    contoh5();
    contoh6();
}
