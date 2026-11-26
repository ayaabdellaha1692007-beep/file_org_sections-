#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    char name[20];
    int id;
    float grade;
    char delim;
};

int main() {
    ofstream file("students.txt");
    char choice;

    do {
        Student s;
        s.delim = '$';

        cout << "Enter Name: ";
        cin.getline(s.name, 20);

        cout << "Enter ID: ";
        cin >> s.id;

        cout << "Enter Grade: ";
        cin >> s.grade;
        cin.ignore();

        file << s.name << ", " << s.id << ", " << s.grade << " " << s.delim << endl;

        cout << "Add more? (y/n): ";
        cin >> choice;
        cin.ignore();

    } while (choice == 'y' || choice == 'Y');

    file.close();

    cout << "Records saved successfully" << endl;

    return 0;
}
