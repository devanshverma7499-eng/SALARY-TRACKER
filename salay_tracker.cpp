#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    float basicSalary;

    void input() {
        cout << "Enter employee name: ";
        cin >> name;

        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }
};

class Salary : public Employee {
public:
    float bonus = 5000;

    void display() {
        cout << "\nEmployee Name: " << name;
        cout << "\nBasic Salary: Rs. " << basicSalary;
        cout << "\nBonus: Rs. " << bonus;
        cout << "\nTotal Salary: Rs. "
             << basicSalary + bonus << endl;
    }
};

int main() {
    Salary s;

    s.input();
    s.display();

    return 0;
}