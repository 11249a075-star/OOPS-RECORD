#include<iostream>
using namespace std;
class book{
    private:
    char title[50];
    char author[50];
    int pages;
    float price;
    public:
    void inputdetails() {
    cout<<"enter the titile of the bok:";
    cin>>title;
    cout<<"enter the author name:";
    cin>>author;
    cout<<"enter the number of pages:";
    cin>>pages;
    cout<<"enter the price of the book:";
    cin>>price; 
}
void displaydetails(int index)const {
    cout<<"book details";
    cout<<"title:"<<title<<"\n";
    cout<<"author:"<<author<<"\n";
    cout<<"pages:"<<pages<<"\n";
    cout<<"price:"<<price<<"\n";
}
};
int main() {
    int n;
    cout<<"enter number of books:";
    cin>>n;
    book library[100];
    for (int i=0;i<n;i++) {
        cout<<"\n enter details for book"<<i+1<<":\n";
        library[i].inputdetails();
    }
    cout<<"\n---library book details---\n";
    for (int i=0;i<n;i++) {
        library[i].displaydetails(i);
    }
    return 0;
}