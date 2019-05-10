#include<iostream>
using namespace std;
char rukunislam [5] [10] =
{"sahadat","sholat","zakat","puasa","naik haji"};
int n;
int main()
{
	cout<<"masukan urutan rukun islam dari nol sampe empat: ";
	cin>>n;
	cout<<"Nama rukun islam tersebut adalah :";
	cout<< " " <<rukunislam[n];
	return 0;
}
