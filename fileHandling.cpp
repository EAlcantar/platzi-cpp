#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream MyFile("GameData.txt");

    if (MyFile.is_open()){
        MyFile << "First line of the file" << endl;

        for (size_t i = 0; i < 10; i++){
            MyFile << i << endl;
        }
        MyFile.close();
    } else {
        cout << "Unable to open file";
    }

    return 0;
}