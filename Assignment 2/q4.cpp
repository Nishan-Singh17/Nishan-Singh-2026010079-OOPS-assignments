#include <iostream>
using namespace std;

class Box {
    int length, width, height;

public:
    Box() {
        length = 1;
        width = 1;
        height = 1;
    }

    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    void volume() {
        cout << "Volume = " << length * width * height << endl;
    }
};

int main() {
    Box b1;

    cout << "Default Constructor:" << endl;
    b1.volume();

    Box b2(10, 5, 2);

    cout << "Parameterized Constructor:" << endl;
    b2.volume();

    return 0;
}