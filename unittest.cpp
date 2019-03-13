#include "code.h"
#include <fstream>
#include <cassert>
#include <iostream>

using namespace std;

int main() {
    ifstream test("test.txt");
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
    answer.close();
    key.close();
    cout << "Well done" << endl;
    return 0;
}
