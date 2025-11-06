#include <iostream>
using namespace std;
class Counter {
private:
    int value;
public:
    Counter(int v = 0) : value(v) {}
    void show() const {
        cout << "Value: " << value << endl;
    }
    Counter operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }
    Counter operator--() {
        --value;
        return *this;
    }
    Counter operator--(int) {
        Counter temp = *this;
        value--;
        return temp;
    }
};
int main() {
    Counter c1(5);
    cout << "Initial: ";
    c1.show();
    cout << "\nPrefix Increment (++c1): ";
    (++c1).show();
    cout << "Postfix Increment (c1++): ";
    (c1++).show();
    cout << "After Postfix Increment: ";
    c1.show();
    cout << "\nPrefix Decrement (--c1): ";
    (--c1).show();
    cout << "Postfix Decrement (c1--): ";
    (c1--).show();
    cout << "After Postfix Decrement: ";
    c1.show();
    return 0;
}
