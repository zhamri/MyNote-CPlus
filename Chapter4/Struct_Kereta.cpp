#include <iostream>

using namespace std;

struct Kereta {
    char jenama[20];
    int tahun;
    float harga;
    char warna[20];
} KeretaSahira, KeretaMuqri = {{"Honda"},
                               {2009},
                               {100000},
                               {"Hitam"}};

int main() {
    Kereta KeretaZhamri = {{"Honda"},
                           {2009},
                           {100000},
                           {"Hitam"}};
    Kereta KeretaIbu = {{"myvi"},
                        {2010},
                        {500000},
                        {"Putih"}};
    KeretaSahira = {{"myvi"},
                    {2010},
                    {500000},
                    {"Putih"}};
    KeretaZhamri.tahun = 2004;
    KeretaZhamri.harga = 50000;
    strcpy(KeretaZhamri.jenama, "Proton");


    cout << "tahun kereta :  " << KeretaZhamri.tahun << endl;
    cout << "harga kereta :  " << KeretaZhamri.harga << endl;
    cout << "jenama kereta :  " << KeretaZhamri.jenama << endl;
    cout << "Harga kereta ibu :  " << KeretaIbu.harga;
}