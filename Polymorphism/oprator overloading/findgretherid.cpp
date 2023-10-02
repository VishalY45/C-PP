/*#include<iostream>
#include<stdlib.h>
int size;
using namespace std;

class Employee {
    int id;
    char name[90];
    int sal;
    int id2;

public:
    void setData(int id, int salary, char name[]) {
        this->id = id;
        this->sal = salary;
        strcpy(this->name, name);
    }

    void setId(int id2) {
        this->id2 = id2;
    }

    void operator > (int id) {
        if (this->id > id) {
            cout << "\t" << this->id << "\t" << this->name << "\t" << this->sal << "\n";
        }
    }

    void show() {
        cout << "\t" << id << "\t" << name << "\t" << sal << "\n";
    }
};

int main() {
    int id, sal;
    char name[90];
    cout << "Enter the size: ";
    cin >> size;
    Employee* emp = new Employee[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter data for employee " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Salary: ";
        cin >> sal;
        emp[i].setData(id, sal, name);
    }

    for (int i = 0; i < size; i++) {
        emp[i].show();
    }

    int id2;
    cout << "Enter an ID for filtering: " << "\n";
    cin >> id2;

    for (int i = 0; i < size; i++) {
        emp[i] > id2;
    }

    delete[] emp; // Deallocate memory
    return 0;
}*/
