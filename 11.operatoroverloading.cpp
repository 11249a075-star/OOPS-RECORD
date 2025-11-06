#include<iostream>
using namespace std;
class unaryop {
    int x,y,z;
    public:
    unaryop() {
        x=0;
        y=0;
        z=0;
    }
    unaryop(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }   
    unaryop operator-() {
   return unaryop(-x,-y,-z); 
    }
void display() {
    cout<<"\n\n\t"<<x<<" "<<y<<" "<<z;
}
};
int main() {
    unaryop un(10,-40,70);
    cout<<"\n\n numbers are:::\n";
    un.display();
    un = -un;
    cout<<"\n\n numbers are after overloading minus(-) operator:::\n";
    un.display();
    return 0;
}