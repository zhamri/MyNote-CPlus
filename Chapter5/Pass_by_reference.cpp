#include <iostream>
using namespace std;

void exchange(int &, int &); //function prototype

int main()
{
    int a = 5, b = 7;
    exchange(a, b); //function call
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;
    return 0;
}
//function definition @ declaration
void exchange(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

