#include <iostream>
using namespace std;

template <class T1, class T2>
void predlozak(T1 polje[], T2 duljina_polja){
		for(int i=0;i<=duljina_polja;i++){
			
			if(i==duljina_polja){
				cout<<"Suma prvog i zadnjeg polja: "<<polje[0] + polje[i-1]<<endl;
			}
		}
};

int main(){
	int broj_clanova=7;
	int brojevi[]={1,3,5,7,9,11,13};
	predlozak(brojevi,broj_clanova);
	
	float decimalni[]={8.54,3.7,2.1,99.43,8.95,6.53,22.5};
	predlozak(decimalni,broj_clanova);
}
