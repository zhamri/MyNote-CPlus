#include <iostream>
#include <string>

using namespace std;

struct KeputusanPelajar {
    string namaPelajar;
    int markahPelajar;
} zhamri;

int main() {
    zhamri.namaPelajar = "Ali";
    zhamri.markahPelajar = 85;

    cout << "Nama Pelajar: " << zhamri.namaPelajar << endl;
    cout << "Markah Pelajar: " << zhamri.markahPelajar << endl;

    return 0;
}
