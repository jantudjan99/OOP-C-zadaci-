#include <iostream>
using namespace std;

template <class T1, class T2, class T3>
void predlozak(T1 polje[], T2 duljina_polja, T3 uvecaj){
		for(int i=0;i<duljina_polja;i++){
			cout<<polje[i] + uvecaj<<" ";
		}
};
int main(){
	cout<<"Uvecani cijeli brojevi: ";
	int brojevi[] = {2,4,6,8,10};
	int duljina = 5;
	int uvecani_br=3;
	predlozak(brojevi,duljina,uvecani_br);
	cout<<endl;
	cout<<"Uvecani decimalni brojevi: ";
	float decimalni[] = {1.1,2.2,3.3,4.4,5.5};
	predlozak(decimalni,duljina,uvecani_br);
}
