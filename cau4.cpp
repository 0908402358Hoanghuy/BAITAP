#include <iostream>
using namespace std;

// Hay tim so dao nguoc cua so nguyen duong n
int Tim_SoDaoNguoc(int N)
{
    int sodaoNguoc = 0;
    while (N > 0)
    {
        int t = N % 10;

        sodaoNguoc = sodaoNguoc * 10 + t;

        N = N / 10;
    }
    return sodaoNguoc;
}

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    int sodaonguoc = Tim_SoDaoNguoc(N);
    cout << "So dao nguoc " << sodaonguoc << endl;
        system("pause");
}
