#include <iostream>
using namespace std;

int main() {
    int age = 10;
    const string name = "Erick";
    int list_ages[] = { 10, 20, 30};
    list_ages[2] = age;
    cout << list_ages[1] << endl;
    cout << name << endl;
    return 0;
}