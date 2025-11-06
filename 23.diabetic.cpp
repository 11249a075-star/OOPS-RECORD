#include<iostream>
using namespace std;
int main() {
    float fastingsugar,postmealsugar;
    cout<<"enter fasting blood sugar level:";
    cin>>fastingsugar;
    cout<<"enter post meal blood sugar level:";
    cin>>postmealsugar;
    if(fastingsugar>=126||postmealsugar>=200) {
        cout<<"the patient is diabetic"<<endl;
    }else{
        cout<<"the patient is not diabetic"<<endl;
    }
    return 0;
}