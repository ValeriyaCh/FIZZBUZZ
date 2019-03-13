#include "code.h"
#include <fstream>
#include <cassert>
#include <iostream>

using namespace std;

int main() {
    ifstream test("input1.txt");
    fizzbuzz(test);
    test.close();
    ifstream answer("output1.txt");
    ifstream key ("keys.txt");
    string a,b;
    while (!answer.eof() && ! key.eof()){
        answer >> a;
        key >> b;
        assert ( a == b);
    }
    cout << "Well done" << endl;
    return 0;
}
