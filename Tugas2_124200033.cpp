//Tugas2_Annisa'ul maesaroh
#include <iostream>
using namespace std;
main()
{
	int a,b,c,d,Dewasa,anak,remaja,Total;
	float biayaperbln1,biayaperbln2,biayaperbln3,biayaperbln4;
	
	Dewasa = 30000;
	anak = 15000;
	remaja = 20000;
	
	cout<< " Umur Ayah	: "; cin>>a;
	if(a>20){
		 biayaperbln1 = Dewasa*30 ;
	}
	else if (a >0 && a <= 12){
		 biayaperbln1 = anak*30;
	}
	else if (a >12 && a<20){
		 biayaperbln1 = remaja*30 ;
	}
		 
	cout<< " Umur Ibu 	: "; cin>>b;
	if(b>20){
		 biayaperbln2 = Dewasa*30;
		 
	}
	else if (b >0 && b <= 12){
		 biayaperbln2 = anak*30;
	}
	else if (b >12 && b<20){
		 biayaperbln2 =remaja*30;
	}
	
	cout<< " Umur Anak 1 	: "; cin>>c;
	if(c>20){
		 biayaperbln3 = Dewasa*30;
	}
	else if (c >0 && c <= 12){
		 biayaperbln3 = anak*30;
	}
	else if (c >12 && c<20){
		 biayaperbln3 = remaja*30;
	}
	cout<< " Umur Anak 2 	: "; cin>>d;
	if(d>20){
		 biayaperbln4 = Dewasa*30;
	}
	else if (d >0 && d <= 12){
		 biayaperbln4 = anak*30;
	}
	else if (d >12 && d<20){
		 biayaperbln4 = remaja*30;
	}
	
	Total = (biayaperbln1 + biayaperbln2 + biayaperbln3 + biayaperbln4);
	cout<< " Tagihan satu bulan adalah Rp. " << Total <<endl;
}
