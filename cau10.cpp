#include <iostream>
using namespace std;
int main()

{
int toan,ly,hoa,tb;
char ten;
cout<<"nhap ten ";
cin>>ten;
cout<<"nhap diem toan ";
cin>>toan;
cout<<"nhap diem ly ";
cin>>ly;
cout<<"nhap diem hoa ";
cin>>hoa;
tb=(toan+ly+hoa)/3;
cout<<"diem trung binh la :"<<tb;
if (tb>=9) cout<<"Xuat sac";
else 
if ((8<=tb) and (tb<9)) cout<<"Gioi ";
else 
if ((6.5<=tb) and (tb<8)) cout<<"Kha ";
else 
if ((5<=tb) and (tb<6.5)) cout<<"Trung Binh ";
else 
if ((3<=tb) and (tb<5)) cout<<"Yeu ";
else cout<<"kem";

return 0;

}
