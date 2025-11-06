#include<iostream>
using namespace std;
class student {
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public:
    void getdata() {
        cout<<"\n enter rollno:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter 3 marks:";
        cin>>m1>>m2>>m3;
    }
    void calculator() {
        total=m1+m2+m3;
        avg=total/3.0;
    }
    void print() {
        cout<<"\n name:"<<name;
        cout<<"\n rollno:"<<rollno;
        cout<<"\n mark1:"<<m1;
        cout<<"\n mark2:"<<m2;
        cout<<"\n mark3:"<<m3;
        cout<<"\n total:"<<total;
        cout<<"\n average:"<<avg<<"\n";
        cout<<"-----------------\n";   
    }
};
int main() {
    int n;
    cout<<"enter number of students:";
    cin>>n;
    student s[100];
    for(int i=0;i<n;i++) {
        cout<<"\n enter details for student"<<i+1<<"\n";
        s[i].getdata();
        s[i].calculator();
    }
    cout<<"\n----student dats----\n";
    for(int i=0;i<n;i++) {
        cout<<"\n studnt"<<i+1<<"details:\n";
        s[i].print();    
    }
    return 0;
}