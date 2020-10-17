#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int nilai_uts,nilai_uas, x;
	char a[50], b[20];
	
	cout<< "Nama 	: " ; 
	cin.getline(a,sizeof(a)); 
	cout<< "NIM  	: " ;
	cin.getline(b,sizeof(b));
	cout<< "UTS 	: " ; cin>>nilai_uts;
	cout<< "UAS	: " ; cin>>nilai_uas; 
	cout<< "  														\n";
	cout<< "Hai, nama saya "<<a;
	cout<< ", nim "<<b<<endl;
	
	x = (nilai_uts+nilai_uas)/2;
	
	cout<< "Nilai akhir saya " <<x;
	
	getche();
	
	return 0;
}
