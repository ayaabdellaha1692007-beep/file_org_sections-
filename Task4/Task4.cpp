#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    int n;
    cout << "Enter number of persons: ";
    cin >> n;
    cin.ignore();

    ofstream outFile("persons.txt");

    for (int i = 0; i < n; i++) {
        Person p;
        cout << "Enter name: ";
        getline(cin, p.name);
        cout << "Enter age: ";
        cin >> p.age;
        cin.ignore();
        outFile << p.name << endl;
        outFile << p.age << endl;
    }
    outFile.close();

    vector<Person> persons;
    ifstream inFile("persons.txt");
    string name;
    string ageLine;

    while (getline(inFile, name)) {
        getline(inFile, ageLine);
        Person p;
        p.name = name;
        p.age = stoi(ageLine);
        persons.push_back(p);
    }
    inFile.close();

    Person younger = persons[0];
    Person older = persons[0];

    for (int i = 1; i < persons.size(); i++) {
        if (persons[i].age < younger.age) {
            younger = persons[i];
        }
        if (persons[i].age > older.age) {
            older = persons[i];
        }
    }

    ofstream resultFile("results.txt");
    resultFile << "Younger: " << younger.name << " " << younger.age << endl;
    resultFile << "Older: " << older.name << " " << older.age << endl;
    resultFile.close();

    cout << "Younger: " << younger.name << " " << younger.age << endl;
    cout << "Older: " << older.name << " " << older.age << endl;

    return 0;
}
