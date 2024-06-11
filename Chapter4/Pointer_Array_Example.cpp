#include <iostream>

using namespace std;

void contoh1() {
    cout << "======================================" << endl;
    cout << "Contoh-1" << endl;
    cout << "======================================" << endl;
    int a[10], *p, x;
    a[0] = 100;

    p = &a[0];        // p gets the address of a[0]
    cout << p << endl;
    x = *p;        // x gets a[0]
    cout << x << endl;
    x = *(p + 1);    // x gets a[1]
    cout << x << endl;
    p++;            // p points to a[2]
    cout << p << endl;
}

void contoh2() {
    cout << "======================================" << endl;
    cout << "Contoh-2" << endl;
    cout << "======================================" << endl;
    int a[10] = {10, 20, 30, 40}, *p, x;
    p = &a[0];        // p gets the address of a[0]
    cout << "Address of first element : " << p << endl;
    x = *p;        // x gets a[0]
    cout << "value of first element: " << x << endl;
    x = *(p + 1);               // x gets a[1]
    cout << "value of second element: " << x << endl;
    x = *(p + 2);            // p points to a[2]
    cout << "value of third element: " << x << endl;
}

void contoh3() {
    cout << "======================================" << endl;
    cout << "Contoh-3" << endl;
    cout << "======================================" << endl;
    int array[3] = {100, 20, 70};
    int *pArray;
    pArray = array;
    pArray++;
    cout << *pArray << endl;;
    pArray = &array[1];
    pArray++;
    cout << *pArray << endl;;

    cout << "======================================" << endl;
    pArray = array;
    cout << *pArray << endl;
    cout << *(pArray + 1) << endl;
    cout << *(pArray + 2) << endl;

    cout << "======================================" << endl;
    pArray = array;
    cout << array[0] << endl;;
    cout << *pArray << endl;;
    cout << *pArray + 1 << endl;;
    cout << *(pArray + 2) << endl;;
}

void contoh4() {
    cout << "======================================" << endl;
    cout << "Contoh-4" << endl;
    cout << "======================================" << endl;
    int array[] = {30, 60, 90, 120};
    int *d = array;
    cout << d << endl;
    cout << *d << endl;
    d++;
    cout << *d << endl;
    cout << *(d + 1) << endl;
    cout << *(d + 2) << endl;
    cout << "======================================" << endl;
    d--;
    for (int i = 0; i < 4; i++)
        cout << *(d + i) << endl;
}

void contoh5() {
    cout << "======================================" << endl;
    cout << "Contoh-5" << endl;
    cout << "======================================" << endl;
    int *n = new int(17);
    cout << n << endl;
    cout << *n << endl;

    int *m;
    m = new int(170);
    cout << *m << endl;

    int *i = new int(5);
    cout << *i << endl;
    *i = 8;
    cout << *i << endl;
    delete i;
    cout << *i << endl;

    //    Write a declaration for a pointer variable  named my_new_ptr that points to dynamic
    //    variable of type double. Assign 11.1111 to the new variable.
    double *my_new_ptr;
    my_new_ptr = new double;
    *my_new_ptr = 11.1111;
}

int main() {
//    contoh1();
//    contoh2();
//    contoh3();
//    contoh4();
    contoh5();
}
