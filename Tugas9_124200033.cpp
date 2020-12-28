#include <iostream>
using namespace std;
main(){

	int a=0,no,i,max=0,min=0,max2=0,selisih[999]={0},nilai[a],i_minus;
	float ave,total=0;
	
	cout <<"Masukkan banyak angka : "; cin >> a;
	
	for(int i=0; i < a; i++){
		no = i+1;
		cout << "Angka ke- "<< no << " : ";
		cin >> nilai[i];
	}
	cout<<endl;
	
	cout << "\n_____Hasil_____\n";
	cout << "Deret		: ";
	for(i=0; i < a; i++)
	{
		cout << nilai[i] << " ";
	}
	
	max = nilai[0];
		for (i=0; i < a; i++)
		{
			if (nilai[i] > max ){
				max = nilai[i];
			}else min = nilai[0];
				if(nilai[i] < min ){
					min = nilai[i];
				}
		}
	for (i=0; i < a; i++){
		total += nilai[i];
	}ave=total/a;

	a = a-1;
	for(i=0; i < a; i++){
		i_minus= i+1;
		
		if (i < a) selisih[i] = nilai[i] - nilai[i_minus];
		else
			 selisih[i] = 0;
		if  (selisih[i] < 0)  selisih[i] =  selisih[i] * (-1);
		if  (selisih[i] > max2){
			max2 = selisih[i];
		}
	}
	
	cout <<"\nMaksimum	: "<<max<<endl;
	cout <<"Minimum		: "<<min<<endl;
	cout <<"Rata-rata	: "<<ave<<endl;
	cout<<"Selisih Max	: " << max2;
	return 0;

}
