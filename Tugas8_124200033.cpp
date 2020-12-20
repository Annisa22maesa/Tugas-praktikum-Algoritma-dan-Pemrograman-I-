#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>

using namespace std;
	
	float luasLingkaran();
	float kelLingkaran();
	float volTabung();
	float jari;
	float tinggi;
	const float phi = 3.14;
	
int main()
{
	int pil;
	char yn;
	
	do{
	cout<<"Hitung Lingkaran =======\n";
	cout<<"1. Luas Lingkaran\n";
	cout<<"2. Keliling Lingkaran\n";
	cout<<"3. Volume Tabung\n";
	cout<<"Pilih : "; cin>>pil;
	
	switch(pil) {
		case 1:
			cout<<"Jari-jari : "; cin>>jari;
			cout<<setprecision(2)<<fixed<<"Luas lingkaran adalah "<<luasLingkaran()<<endl;
		break;
		case 2:
			cout<<"Jari-jari : "; cin>>jari;
			cout<<setprecision(2)<<fixed<<"Keliling lingkaran adalah "<<kelLingkaran()<<endl;
		break;
		case 3:
			cout<<"Jari-jari  : "; cin>>jari;
			cout<<"Tinggi	   : "; cin>>tinggi;
			cout<<setprecision(2)<<fixed<<"Volume Tabung adalah "<<volTabung()<<endl;
			break;
		default:
		cout<<"Input Salah :) "<<endl;
	}
		cout<<"Ulangi Program? (y/n) ";cin>>yn;
		cout<<endl;
	}while(yn=='Y'||yn=='y');
		cout<<"Program selesai, Terima kasih :)"<<endl;
}

	float luasLingkaran(){
		float hasil;
			hasil = (phi*jari*jari);
		return hasil;
	}

	float kelLingkaran(){
		float hasil;
			hasil = (phi*2*jari);
		return hasil;
	}
	
	float volTabung(){
			float hasil;
				hasil = (phi*jari*jari*tinggi);
			return hasil;
	}
	

