#include <iostream>
#include <conio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int tl[5] = {2000,2005,2006,2012,2015};
	int lt[5];
	char i;
	cout<<"1. langsung\n";
	cout<<"2. input Data\n";
	cout<<"pilih: ";
	cin>>i;
	if (i=='1'){
	 	cout<<"\nData Diri Masduki SIdiq SJ\n";
		cout<<"\n Tahun Lahir     : ";
		cout<<tl[0];
		cout<<"\n Tahun Masuk TK  : ";
		cout<<tl[1];
		cout<<"\n Tahun Masuk SD  : ";
		cout<<tl[2];
		cout<<"\n Tahun Masuk SMP : ";
		cout<<tl[3];
		cout<<"\n Tahun Masuk SMK : ";
		cout<<tl[4];
		goto akhir;
	}
	else{
	cout<<"\n Tahun Lahir     : ";
	cin>>lt[0];
	cout<<"\n Tahun Masuk TK  : ";
	cin>>lt[1];
	cout<<"\n Tahun Masuk SD  : ";
	cin>>lt[2];
	cout<<"\n Tahun Masuk SMP : ";
	cin>>lt[3];
	cout<<"\n Tahun Masuk SMK : ";
	cin>>lt[4];
	
		cout<<"\n Tahun Lahir     : ";
		cout<<lt[0];
		cout<<"\n Tahun Masuk TK  : ";
		cout<<lt[1];
		cout<<"\n Tahun Masuk SD  : ";
		cout<<lt[2];
		cout<<"\n Tahun Masuk SMP : ";
		cout<<lt[3];
		cout<<"\n Tahun Masuk SMK : ";
		cout<<lt[4];
	goto akhir;
	}
	
	akhir:
	getch();
}
