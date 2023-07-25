#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Nhap mot so nguyen tu 10 den 99: ";
    cin >> num;
    if (num >= 10 && num < 100) {
        int hangchuc = num / 10;
        int hangdonvi = num % 10;
        int tich = hangchuc*hangdonvi;
        int tong = hangchuc+hangdonvi;
        if (tich == (tong * 2)) {
            cout << "So " << num << " thoa man dieu kien." << endl;
        } else {
            cout << "So " << num << " khong thoa man dieu kien." << endl;
        }
    } else {
        cout << "So nhap vao khong hop le. Vui long nhap lai mot so tu 10 den 99." << endl;
    }

    return 0;
}

