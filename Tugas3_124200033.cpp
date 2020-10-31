#include <iostream>
#include <iomanip>
using namespace std;
main(){
	
	int pass,a;
	float b,c,H1,T1,S1,H2,T2,S2;
	char nama[50];
	string user="admin";
	
	cout<< "LOGIN AKUN ================\n";
	cout<< "Username : ";
	cin.getline(nama,sizeof(nama)); 
	cout<< "Password : ";cin>>pass; 
	cout<< "================\n";
	cout<< "               \n";
	
	if (nama == user && pass == 123)
		cout<< "Login Berhasil!\n";
		
	else if ( nama == user && pass != 123 ){
		cout<< "Password anda salah! ";
		exit(0);}
	else if ( nama != user && pass == 123 ){
		cout<< "Username anda salah! ";
		exit(0);
	}
	else {
		cout<< "Username dan Password  anda salah! ";
		exit(0);}
		
		cout << endl;
		
		cout<< "Input Nilai Mata kuliah\n";
		cout<< "1. Algoritma dan Pemrograman\n";
		cout<< "2. Kalkulus\n";
		cout<< "Pilih : "; cin>>a;
	
		switch (a) {
		case 1 :
			cout<< "Nilai Harian 	: "; cin>>H1;
			cout<< "Nilai UTS 	: " ;cin>>T1;
			cout<< "Nilai UAS 	: " ; cin>>S1;
			
			b = (H1+T1+S1)/3;
			
			if (b >= 80){
				cout<< setprecision(4)<<fixed<<"Anda lulus Algoritma dan Pemrograman dengan nilai "<<b<<endl;
			}else if (b<80){
				cout<< setprecision(4)<<fixed<<"Anda tidak lulus Algoritma dan Pemrograman dengan nilai "<<b<<endl;}
			break;
			
		case 2 :
			cout<< "Nilai Harian 	: "; cin>>H2;
			cout<< "Nilai UTS 	: " ;cin>>T2;
			cout<< "Nilai UAS 	: " ; cin>>S2;
			
			c = (H2+T2+S2)/3;
			
			if (c >= 80){
				cout<< setprecision(4)<<fixed<<"Anda lulus kalkulus dengan nilai "<<c<<endl;}
				else if (c<80){
				cout<< setprecision(4)<<fixed<<"Anda tidak lulus kalkulus dengan nilai "<<c<<endl;}
			break;
			default :
				a =0;
				cout << "Input Anda Salah!" << endl;
				
}
}
