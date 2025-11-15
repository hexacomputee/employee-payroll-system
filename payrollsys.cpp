#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

struct Employee {
    int id;
    string name;
    double hourlyRate;
    double hoursWorked;
};

vector<Employee> employees;

// Add new employee
void addEmployee() {
    Employee e;
    cout << "Enter ID: "; cin >> e.id;
    cin.ignore();
    cout << "Enter Name: "; getline(cin, e.name);
    cout << "Enter Hourly Rate: "; cin >> e.hourlyRate;
    e.hoursWorked = 0;
    employees.push_back(e);
    cout << "Employee added successfully!\n";
}

// Record attendance
void recordAttendance() {
    int id;
    double hours;
    cout << "Enter Employee ID: "; cin >> id;
    for (auto &e : employees) {
        if (e.id == id) {
            cout << "Hours worked today: "; cin >> hours;
            e.hoursWorked += hours;
            cout << "Attendance recorded!\n";
            return;
        }
    }
    cout << "Employee not found!\n";
}

// Generate payroll report
void payrollReport() {
    cout << "\nPayroll Report:\n";
    cout << left << setw(10) << "ID" << setw(20) << "Name"
         << setw(15) << "Hours" << setw(10) << "Salary\n";
    cout << "---------------------------------------------\n";
    for (auto &e : employees) {
        cout << left << setw(10) << e.id
             << setw(20) << e.name
             << setw(15) << e.hoursWorked
             << setw(10) << (e.hoursWorked * e.hourlyRate) << "\n";
    }
}

// Save data to file
void saveData() {
    ofstream file("employees.txt");
    for (auto &e : employees) {
        file << e.id << "," << e.name << "," << e.hourlyRate << "," << e.hoursWorked << "\n";
    }
    file.close();
    cout << "Data saved to employees.txt\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Employee\n2. Record Attendance\n3. Payroll Report\n4. Save & Exit\nChoose: ";
        cin >> choice;
        switch(choice) {
            case 1: addEmployee(); break;
            case 2: recordAttendance(); break;
            case 3: payrollReport(); break;
            case 4: saveData(); break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 4);
    return 0;
}
