#include <iostream>
#include <string>
using namespace std;
class student {
private:
    string name;
    int rno;
public:
    void getstudent() {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displaystudent() {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};
class academic : public student {
protected:
    int marks1, marks2;
public:
    void getacademic() {
        getstudent();
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }
    void displayacademic() {
        displaystudent();
        cout << "\nMarks in subject 1: " << marks1;
        cout << "\nMarks in subject 2: " << marks2;
    }
};
class sports {
protected:
    int score;
public:
    void getsports() {
        cout << "Enter sports score: ";
        cin >> score;
    }

    void displaysports() {
        cout << "\nSports score: " << score;
    }
};
class result : public academic, public sports {
public:
    void getresult() {
        getacademic();
        getsports();
    }
    void displayresult() {
        displayacademic();
        displaysports();
        int total = marks1 + marks2 + score;
        cout << "\nTotal score: " << total;
    }
};
int main() {
    result r;
    r.getresult();
    cout << "\n--- Student Result ---\n";
    r.displayresult();
    return 0;
}
