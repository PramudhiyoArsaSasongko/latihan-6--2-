#include <iostream>
using namespace std;

int main(){
	/* Nama : Pramudhiyo Arsa Sasongko
	   Npm  : 2117051063
	   Kelas: B, ILKOM21*/
	   
	//float
	float bitcoin,hargabeli,hargajual,x,y;
	
	//input
	cout<<"APLIKASI PENGHITUNG KEUNTUNGAN ATAU KERUGIAN BITCOIN"<<endl;
	cout<<"                                    "<<endl;
	cout<<"Masukkan Jumlah Bitcoin Yang Anda Beli : " ;cin>>bitcoin;
	cout<<"Harga Per-1 Bitcoin Saat Dibeli        : Rp" ;
	cin>>hargabeli;
	cout<<"Harga Per-1 Bitcoin Saat Ini           : Rp" ;
	cin>>hargajual;
    
    x=hargajual-hargabeli;
    y=x/hargabeli;
    
	//output
	cout<<"                               "<<endl;
	cout<<"Kenaikan/Penurunan  : "<<bitcoin*y*100<< "%"<<endl;
	cout<<"Keuntungan/Kerugian : "<<bitcoin*x/1000000<<" juta"<<endl;
	
	return 0;
}

