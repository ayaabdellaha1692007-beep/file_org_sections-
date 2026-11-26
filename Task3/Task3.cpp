#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("welcome.txt");
    outFile << "Hello Everybody";
    outFile.close();

    ifstream inFile("welcome.txt");
    string content;
    getline(inFile, content);
    inFile.close();

    int pos = content.find("body");
    content.replace(pos, 4, "one");

    ofstream newFile("welcome.txt");
    newFile << content;
    newFile.close();

    cout << content << endl;

    return 0;
}
