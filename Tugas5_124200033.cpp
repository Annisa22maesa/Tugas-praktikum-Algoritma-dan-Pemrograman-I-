	#include <iostream>
	using namespace std;
	main(){
	
	int pil,p,lb,t,c;
	
	cout<<"Gambar Bangun Datar =======\n";
	cout<<"1. Kotak bolong\n";
	cout<<"2. Segitiga\n";
	cout<<"Pilih : "; cin>>pil;
	cout<<endl;
	
	switch(pil){
	case 1:
		cout<<"Panjang	: "; cin>>p;
		cout<<"Lebar 	: "; cin>>lb;
	
		for (int i=0; i<p; i++){
			for (int j=0; j<lb; j++) {
				if (i==0 || i==p-1 || j==0 || j==lb-1) {
					cout<<"* ";}
				else {
					cout<<"  ";}
				}
				cout<<endl;
			}
			break;
	case 2 :		
		cout<<"Tinggi	: "; cin>>t;
		
		for(int g= 1 ; g<=t ; g++){	
			c=g;
			for(int h=1; h<=g ; h++){
				cout<<c;
				cout<<" ";
				c= c+t-h;
			}
			cout<<endl ;
		}
			break;
			default:
				cout<<"Input salah!"<<endl;
		}
	}
	
