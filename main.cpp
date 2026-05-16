#include <iostream>
#include <string>
using namespace std;

int main() {
    //Basics of Lists
    int age = 19;
    const string name = "Erick";
    int list_ages[] = { 10, 20, 30};
    list_ages[2] = age;
    cout << list_ages[1] << endl;
    cout << name + ". " + "Age: " + to_string(age)<< endl;
    cout << sizeof(list_ages)/sizeof(list_ages[0]) << endl;

    //Basics of IO Stream
    cout << "Change age? ";
    cin >> age;
    cout << name + ". " + "Age: " << age << endl;
    return 0;
}