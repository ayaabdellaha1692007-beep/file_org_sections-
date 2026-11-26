#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;

    ifstream inFile("fruit.txt");

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    ofstream outFile("fruit.txt", ios::app);

    outFile << "Fresh Fruits" << endl;

    outFile.close();

    cout << "Fresh Fruits added successfully" << endl;

    return 0;
}
