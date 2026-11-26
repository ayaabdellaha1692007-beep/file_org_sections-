#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("grades.txt");
    outFile << 90 << endl;
    outFile << 85 << endl;
    outFile << 78 << endl;
    outFile << 92 << endl;
    outFile << 88 << endl;
    outFile.close();

    ifstream inFile("grades.txt");
    int grade;

    cout << "Grades: " << endl;
    while (inFile >> grade) {
        cout << grade << endl;
    }
    inFile.close();

    int toDelete;
    cout << "Enter grade to delete: ";
    cin >> toDelete;

    ifstream oldFile("grades.txt");
    ofstream tempFile("temp.txt");
    bool found = false;

    while (oldFile >> grade) {
        if (grade == toDelete) {
            found = true;
        } else {
            tempFile << grade << endl;
        }
    }

    oldFile.close();
    tempFile.close();

    remove("grades.txt");
    rename("temp.txt", "grades.txt");

    if (found) {
        cout << "Grade deleted successfully" << endl;
    } else {
        cout << "Grade not found" << endl;
    }

    return 0;
}
