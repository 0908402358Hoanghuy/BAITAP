#include <iostream>
using namespace std;
int main() {
    const int START_ASCII = 32;
    const int END_ASCII = 127;
    const int CHARS_PER_LINE = 7;
    int count = 0;
    for (int ascii = START_ASCII; ascii <= END_ASCII; ++ascii) {
        cout << static_cast<char>(ascii) << " (ASCII " << ascii << ")  ";
        count++;
        if (count == CHARS_PER_LINE) {
        cout << endl;
        count = 0;
        }
    }
    return 0;
}
