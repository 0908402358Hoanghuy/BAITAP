#include <iostream>
using namespace std;
bool songuyento(int number) {
    if (number < 2)
        return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;

    cout << "Cac so nguyen to nho hon " << n << " la: ";
    for (int i = 2; i < n; ++i) {
        if (songuyento(i))
            cout << i << " ";
    }
    return 0;
}
