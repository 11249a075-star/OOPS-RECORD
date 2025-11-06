#include<iostream>
using namespace std;
class student {
    private:
    char name[50];
    int age;
    char course[50];
    public:
    void inputdetails() {
        cout<<"enter student name:";
        cin>>name;
        cout<<"enter age:";
        cin>>age;
        cout<<"enter course:";
        cin>>course;
    }
    void displaydetails() {
        cout<<"\n---STUDENT INFORMATION---\n";
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"course:"<<course<<endl; 
    }
};
int main() {
    student s1;
    s1.inputdetails();
    s1.displaydetails();
    return 0;
}
