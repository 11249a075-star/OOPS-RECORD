#include<iostream>
using namespace std;
class employee {
    private:
    char name[50];
    int age;
    float salary;
    char id[20];
    int accountnumber;
    public:
    void getdetails();
    void displaydetails();
};
void employee::getdetails() {
    cout<<"enter the employee name:"<<endl;
    cin>>name;
    cout<<"enter the age:"<<endl;
    cin>>age;
    cout<<"enter employee id:"<<endl;
    cin>>id;
    cout<<"enter salary:"<<endl;
    cin>>salary;
    cout<<"enter the accountnumber:"<<endl;
    cin>>accountnumber;    
}
void employee::displaydetails() {
    cout<<"\n-----EMPLOYEE DETAILS-----\n";
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"salary:"<<salary<<endl;
    cout<<"id:"<<id<<endl;
    cout<<"accountnumber:"<<accountnumber<<endl;
}
int main() {
    employee e1,e2;
    e1.getdetails();
    e1.displaydetails();
    e2.getdetails();
    e2.displaydetails();
    return 0;
}