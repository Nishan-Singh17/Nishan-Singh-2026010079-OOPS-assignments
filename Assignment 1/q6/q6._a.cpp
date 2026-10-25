#include <iostream>
using namespace std;

class Demo {
private:
    void privateFunction() {
        cout << "Private function called";
    }

public:
    void publicFunction() {
        privateFunction();
    }
};

int main() {
    Demo obj;

    obj.publicFunction();

    return 0;
}