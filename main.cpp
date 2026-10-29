#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
using namespace std;

//Basics of Functions
int list_checker(const int input_list[], int size, int index) {
    if (index < 1 || index > size) {
        throw std::out_of_range("Numero fuera del rango de la lista");
    }

    return input_list[index - 1];
} 

int main() {
     //Basics of Lists
    int age = 19;
    int user_input = 0;
    const string name = "Erick";
    int list_ages[] = { 10, 20, 30};
    list_ages[2] = age;
    cout << "Ages list size: " << sizeof(list_ages)/sizeof(list_ages[0]) << endl;
    cout << name + ". " + "Age: " + to_string(age)<< endl;

    //Basics of IO Stream
    cout << "Change age? ";
    while (!(cin >> age)) {
        if (cin.eof()) {
            return 1;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ingresa un numero: ";
    }
    cout << name + ". " + "Age: " << age << endl;
    cout << "Ages list: ";
    for (size_t i = 0; i < sizeof(list_ages)/sizeof(list_ages[0]); i++)
    {
        cout << list_ages[i] << " ";
    }
    const int size = sizeof(list_ages)/sizeof(list_ages[0]);
    cout << endl << "what index do you want to check? ";
    while (!(cin >> user_input) || user_input < 1 || user_input > size) {
        if (cin.eof()) {
            return 1;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ingresa un numero entre 1 y " << size << ": ";
    }

    int value = list_checker(list_ages, size, user_input);
    cout << "The value at index " << user_input << " is: " << value << endl;

    //Basics of standard libraries
    //Strings
    string any_text = "Erick Alcantar";
    cout << "The string '" + any_text + "' has a size of " << any_text.size() << endl;
    

    /* //Multidimensional arrays
     int ids [5][3] = 
        {
            {1,2,3},
            {4,5,6},
            {7,8,9},
            {10,11,12},
            {13,14,15}
        };

    for (size_t i = 0; i < sizeof(ids)/sizeof(ids[0]); i++){
        for (size_t j = 0; j < sizeof(ids[0])/sizeof(ids[0][0]); j++){
            cout << ids[i][j] << " ";
        }
        cout << endl;
    }
    
     return 0;
     */

     
}