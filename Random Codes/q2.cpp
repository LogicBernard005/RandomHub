#include <iostream>
using namespace std;

class Student {
protected:
    string name;

public:
    void inputName() {
        cout << "Enter student's name: ";
        cin >> name;
    }
};

class Marks : virtual public Student {
protected:
    int math, science;

public:
    void inputMarks() {
        cout << "Enter math marks: ";
        cin >> math;
        cout << "Enter science marks: ";
        cin >> science;
    }
};

class Sports : virtual public Student {
protected:
    int sportsScore;

public:
    void inputSports() {
        cout << "Enter sports score: ";
        cin >> sportsScore;
    }
};

class Result : public Marks, public Sports {
public:
    void displayResult() {
        cout << "Student Name: " << name << endl;
        cout << "Math Marks: " << math << endl;
        cout << "Science Marks: " << science << endl;
        cout << "Sports Score: " << sportsScore << endl;
    }
};

int main() {
    Result studentResult;

    studentResult.inputName();
    studentResult.inputMarks();
    studentResult.inputSports();

    cout << "\nStudent Result:\n";
    studentResult.displayResult();

    return 0;
}