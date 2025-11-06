#include<iostream>
using namespace std;
class Student2;
class Student1 {
    private:
    int marks;
    public:
    Student1(int m) {
        marks=m;
    }
    friend void compareMarks(Student1, Student2);
};
class Student2 {
    private: 
    int marks;
    public:
    Student2(int m) {
        marks=m;
    }
    friend void compareMarks(Student1, Student2);
};
void compareMarks(Student1 s1,Student2 s2) {
    if(s1.marks>s2.marks)
    cout<<"Student 1 scored higher("<<s1.marks<<">"<<s2.marks<<")\n";
    else if(s2.marks>s1.marks)
    cout<<"Student 2 scored higher("<<s2.marks<<">"<<s1.marks<<")\n";
    else
    cout<<"both students scored the same("<<s1.marks<<"marks)\n";
}
int main() {
    Student1 a(85);
    Student2 b(90);
    compareMarks(a,b);
    return 0;
}