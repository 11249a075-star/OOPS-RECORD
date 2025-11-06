#include<iostream>
#include<string>
using namespace std;
class eb {
    private:
    int units,customerid;
    float amount;
    char name[50];
    public:
    void getdetails();
    void computebill();
    void printbill();
};
void eb::getdetails()
{
    cout<<"enter customer id:";
    cin>>customerid;
    cout<<"enter amount of units consumed:";
    cin>>units;
    cout<<"enter customer name:";
    cin>>name;
}
void eb::computebill()
{
    if(units<=100)
    amount=0;
else if(units<=200)
amount=(units-100)*2.25;
else if(units<=400)
amount=(100*2.25)+(units-200)*4.25;
else if(units<=600)
amount=(100*2.25)+(200*4.25)+(units-400)*6.00;
else if (units>600)
amount=(100*2.25)+(200*4.25)+(200*6)+(units-600)*9.00;
}
void eb::printbill()
{
    cout<<"---ELECTRICITY BILL---"<<endl;
    cout<<"customerid"<<customerid<<endl;
    cout<<"name"<<name<<endl;
    cout<<"units"<<units<<endl;
    cout<<"amount"<<amount<<endl;
}
int main()
{
   eb e1;
    e1.getdetails();
    e1.computebill();
    e1.printbill();
    return 0;
}