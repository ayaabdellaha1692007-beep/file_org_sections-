#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;


    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

 

    outFile << "Fresh Fruits" << endl;

    outFile.close();

    cout << "Fresh Fruits added successfully" << endl;

    return 0;
}
