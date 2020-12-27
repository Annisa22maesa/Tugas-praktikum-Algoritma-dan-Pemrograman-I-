#include <iostream>
using namespace std;
main(){

	int a,no,i,j,i_minus;
	float ave,total,max2;
	
	cout <<"Masukkan banyak angka : "; cin >> a;
	
	int nilai[a];
	for(i=0; i < a; i++)
	{
		no = i+1;
		cout << "Angka ke- "<< no << " : ";
		cin >> nilai[i];
		total += nilai[i];
	}
	cout<<endl;
	
	cout << "\n_____Hasil_____\n";
	cout << "Deret		: ";
	for(i=0; i < a; i++)
	{
		cout << nilai[i] << " ";
	}
	
	int max = nilai[0];
		for (i=0; i < a; i++)
		{
			if (nilai[i] > max )
			max = nilai[i];
		}
	cout <<"\nMaksimum	: "<<max<<endl;
	
	int min = nilai[0];
		for (j=0; j < a; j++)
		{
			if (nilai[j] < min )
			min = nilai[j];
		}
		cout <<"Minimum		: "<<min<<endl;
	
	ave=total/a;
	cout <<"Rata-rata	: "<<ave<<endl;
	
	int selisih[i];
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
	cout<<"Selisih Max	: " << max2;
	return 0;

}
	
