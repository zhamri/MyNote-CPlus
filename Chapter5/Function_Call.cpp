#include <iostream>

using namespace std;

void callbyValue(int a);

void callbyReference(int *a);

int main() {
    int b = 10;
    callbyValue(b); //calling function, send argument
    cout << b << endl;

    callbyReference(&b); //calling function , send argument
    cout << b << endl;
    return 0;
}

void callbyValue(int a) //called function, receive parameter
{
    a = a + 5;
}

void callbyReference(int *a) //called function, receive parameter
{
    *a = *a + 5;
}
