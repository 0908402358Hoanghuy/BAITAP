#include<iostream>
using namespace std;
int main()
{
	int mssv,lop,khoa,nam,mon1,mon2,mon3,mon4,mon5;
	float tb;
	char ten;
	cout<<"***BAI TAP THUC HANH LAP TRINH C***"<<endl;
	cout<<"**************TUAN 1*************"<<endl;
	cout<<"MSSV: ";
	cin>>mssv;
	cout<<"Ho va ten: ";
	cin>>ten;
	cout<<"Lop: ";
	cin>>lop;
	cout<<"Khoa: ";
	cin>>khoa;
	cout<<"Nam Hoc:";
	cin>>nam;
	cout<<"**BANG DIEM**"<<endl;
	cout<<"mon 1: ";
	cin>>mon1;
	cout<<"mon 2: ";
	cin>>mon2;
	cout<<"mon 3: ";
	cin>>mon3;
	cout<<"mon 4: ";
	cin>>mon4;
	cout<<"mon 5: ";
	cin>>mon5;
	tb=(mon1+mon2+mon3+mon4+mon5)/5;
	cout<<"diem trung binh la: "<<tb<<endl;
}
