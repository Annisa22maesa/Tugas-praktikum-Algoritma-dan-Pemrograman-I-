#include <iostream>
using namespace std;
main(){
	
	int pilih,N,M;
	int hasill =0;
	int hasil = 1;
	
	cout<<"=========Perkalian & Perpangkatan =========\n";
	cout<<"1.Perkalian \n";
	cout<<"2.Perpangkatan \n";
	cout<<"Pilih : " ; cin>>pilih;
	
	switch (pilih) {
	case 1:
			cout<<"Input angka N: ";cin>>N;
			cout<<"Input angka M: ";cin>>M;
			cout<<"Hasil "<<N<< " x "<<M<<endl;	
			
			for(int i=1; i<=N ; i++ ){
				hasill+=M;
  				if(i ==N){
					cout<<M<< " = "<< hasill;
				}else cout<<M<< " + ";}
				cout<<endl;
				cout<<"\nTerimakasih :) \n";
			 break;
		
	case 2: 
			cout<<"Input angka N: ";cin>>N;
			cout<<"Input angka M: ";cin>>M;
			cout<<"Hasil "<<N<< " ^ "<<M<<endl;
			
			for(int i=1; i<=M ; i++ ){
				hasil *=N;
  				if(i ==M){
					cout<<N<< " = "<< hasil;
				}else cout<<N<< " x ";}
				cout<<endl;
				cout<<"\nTerimakasih :) \n";
			 break;
			 default :
				pilih =0;
				cout << "Salah Input!" << endl;
				cout<<endl;
				cout<<"Terimakasih :) \n";	
	}
}


	
	

