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

class liaa :public seseorang {
    public:
    void pesan() {
        cout << "pesan dari lia" << endl;
    }

};