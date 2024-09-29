#include <iostream>
#include <string>
using namespace std;

class College {
protected:
    string collegeName;

public:
    College(const string& name) : collegeName(name) {}

    void inputCollege() {
        cout << "Enter College Name: ";
        cin >> collegeName;
    }

    void displayCollege() {
        cout << "College: " << collegeName << endl;
    }
};

class Department : public College {
protected:
    string departmentName;

public:
    Department(const string& college, const string& dept) : College(college), departmentName(dept) {}

    void inputDepartment() {
        inputCollege();
        cout << "Enter Department Name: ";
        cin >> departmentName;
    }

    void displayDepartment() {
        displayCollege();
        cout << "Department: " << departmentName << endl;
    }
};

class Students : public Department {
protected:
    int studentCount;

public:
    Students(const string& college, const string& dept, int count) : Department(college, dept), studentCount(count) {}

    void inputStudents() {
        inputDepartment();
        cout << "Enter Total Students: ";
        cin >> studentCount;
    }

    void displayStudents() {
        displayDepartment();
        cout << "Total Students: " << studentCount << endl;
    }
};

class Staff : public Department {
protected:
    int staffCount;

public:
    Staff(const string& college, const string& dept, int count) : Department(college, dept), staffCount(count) {}

    void inputStaff() {
        inputDepartment();
        cout << "Enter Total Staff: ";
        cin >> staffCount;
    }

    void displayStaff() {
        displayDepartment();
        cout << "Total Staff: " << staffCount << endl;
    }
};

class Teaching : public Staff {
public:
    Teaching(const string& college, const string& dept, int staffCount) : Staff(college, dept, staffCount) {}

    void inputTeaching() {
        inputStaff();
    }

    void displayTeaching() {
        displayStaff();
        cout << "Teaching Staff" << endl;
    }
};

class NonTeaching : public Staff {
public:
    NonTeaching(const string& college, const string& dept, int staffCount) : Staff(college, dept, staffCount) {}

    void inputNonTeaching() {
        inputStaff();
    }

    void displayNonTeaching() {
        displayStaff();
        cout << "Non-Teaching Staff" << endl;
    }
};

int main() {
    Students students("", "", 0);
    Teaching teaching("", "", 0);
    NonTeaching nonTeaching("", "", 0);

    students.inputStudents();
    teaching.inputTeaching();
    nonTeaching.inputNonTeaching();

    students.displayStudents();
    teaching.displayTeaching();
    nonTeaching.displayNonTeaching();

    return 0;
}