#include <iostream>
#include <string>
using namespace std;

/* //Basics of Functions
int list_checker(int input_list[], int index){
    return input_list[index-1];
} */

int main() {
    /* //Basics of Lists
    int age = 19;
    int user_input = 0;
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
    cout << endl << "what index do you want to check? ";
    cin >> user_input;
    cout << list_checker(list_ages, user_input) << endl;

    //Basics of standard libraries
    //Strings
    string any_text = "Erick Alcantar";
    cout << "The string '" + any_text + "' has a size of " << any_text.size() << endl;
     */

     //Multidimensional arrays
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
}