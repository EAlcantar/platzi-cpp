#include <iostream>
#include <string>
using namespace std;

int main() {
    //Basics of Lists
    int age = 19;
    const string name = "Erick";
    int list_ages[] = { 10, 20, 30};
    list_ages[2] = age;
    cout << "Ages list size: " << sizeof(list_ages)/sizeof(list_ages[0]) << endl;
    cout << name + ". " + "Age: " + to_string(age)<< endl;

    //Basics of IO Stream
    cout << "Change age? ";
    cin >> age;
    cout << name + ". " + "Age: " << age << endl;
    cout << "Ages list: ";
    for (size_t i = 0; i < sizeof(list_ages)/sizeof(list_ages[0]); i++)
    {
        cout << list_ages[i] << " ";
    }
    
    return 0;
}