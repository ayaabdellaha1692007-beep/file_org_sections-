#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fullName;
    int id;
    float grade;

    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Grade: ";
    cin >> grade;

    ofstream file("Student.txt");

    file << "Full Name: " << fullName << endl;
    file << "ID: " << id << endl;
    file << "Grade: " << grade << endl;

    file.close();

    cout << "Data saved successfully in Student.txt" << endl;

    return 0;
}
