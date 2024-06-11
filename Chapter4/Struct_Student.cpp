#include <iostream>

using namespace std;

struct Student {
    char id[13];        // user id number, max 12 characters
    char name[50];     // user name, max 49 characters
    char gender;       // student gender M or F
    int age;          // student age
};

int main() {
    struct Student user[2]; // user[2] is a structure variable

    cout << "Enter user data\n";
    for (int i = 0; i <= 1; i++) {
        cout << "UserID number(12 integer number)" << i << ": ";
        cin >> user[i].id;
        cout << "Student’s name # " << i << ": ";
        cin >> user[i].name;
        cout << "Gender (M or F)# " << i << ": ";
        cin >> user[i].gender;
        cout << "Age # " << i << ": ";
        cin >> user[i].age;
    }
    for (int i = 0; i <= 1; i++) {
        cout << "UserID: " << user[i].id << "\n";
        cout << "Student’s name: " << user[i].name << "\n";
        cout << "Gender (M or F): " << user[i].gender << "\n";
        cout << "Age: " << user[i].age << "\n";
    }
}
