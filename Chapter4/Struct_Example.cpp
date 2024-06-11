#include <iostream>

using namespace std;

struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book;

struct Fruit {
    int weight;
    double price;
} apple, banana, melon;

struct Product {
    int weight;
    double price;
};
Product macbook;
Product iphone, ipad;

struct Employee {
    int id_number;
    int age;
    float salary;
};

// INITIALIZE STRUCTURE  WHEN DECLARING STRUCT
struct CDCollection {
    char title[15], artist[30];
    int NumSongs;
    float price;
    char dateBought[10];
} CD = {"Butterfly", "Maraiah Carey", 10, 29.50, "20/8/2004"};

//ARRAY OF STRUCTURE
struct	MusicCollection
{
    char title[15], artist[30];  int NumSongs;
    float price;
    char dateBought[10];
} Music[3];

int main()
{
    struct Employee employee;

    employee.id_number = 1;
    employee.age = 22;
    employee.salary = 12000.21;

    apple.weight = 20;
    apple.price = 5;

    cout << "Apple price: " << apple.price << endl;

    //DISPLAY MEMBER OF STRUCTURE ARRAY
    cout<<Music[0].title<<endl;
    cout<<Music[0].artist<<endl;
    cout<<Music[0].NumSongs<<endl;
    cout<<Music[0].price<<endl;
    cout<<Music[0].dateBought<<endl;
}

