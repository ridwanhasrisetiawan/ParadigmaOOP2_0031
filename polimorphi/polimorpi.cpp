#include <iostream>
using namespace std;

class seseorang {
    virtual void pesan() = 0;




};

class joko :public seseorang {
    public:
    void pesan() {
        cout << "pesan dari joko" << endl;
    }
};

class lia :public seseorang {
    public:
    void pesan() {
        cout << "pesan dari lia" << endl;
    }

};

int main() {
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();



    return 0;
}