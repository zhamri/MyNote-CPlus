#include <iostream>

using namespace std;

int zhamri;

int add(int, int);

int main() {
    int array[2][3] = {{1, 2, 3},
                       {4, 5, 6}};
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) cout << array[row][col] << " ";
        cout << endl;
    }

    return 0;
}


