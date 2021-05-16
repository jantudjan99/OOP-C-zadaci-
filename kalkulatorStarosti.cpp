#include <iostream>
using namespace std;
class Datum{
	private:
		int dan;
		int mjesec;
		int godina;
		void ispis(){
			cout<<dan<<"."<<mjesec<<"."<<godina<<endl;
		}
	public:
		
		
		void postavi(int a, int b, int c){
			if((a>=0)&&(a<=30)&&(b>=0)&&(b<=12)&&(c>=0)&&(c<=2020)){
				dan=a;
				mjesec=b;
				godina=c;
				ispis();
			}
			else{
				dan=01;
				mjesec=01;
				godina=2020;
				ispis();
			}
		}
		void danasnji(int a, int b, int c){
			dan=a;
			mjesec=b;
			godina=c;
			ispis();
		}
		void razlika(Datum a, Datum b){
			int izracunA=a.dan+(a.mjesec*30)+(a.godina*365);
			int izracunB=b.dan+(b.mjesec*30)+(b.godina*365);
			cout<<"Stari ste "<<izracunB-izracunA<<" dana";
		}
		
};
	
int main(){
	int dani;
	int mjeseci;
	int godine;
	cout<<"Unesite dan svojeg rodenja "<<endl;
	cin>>dani;
	cout<<"Unesite mjesec svojeg rodenja "<<endl;
	cin>>mjeseci;
	cout<<"Unesite godinu svojeg rodenja "<<endl;
	cin>>godine;
	
	int dan2;
	int mjesec2;
	int godina2;
	cout<<"Unesite dan danasnjeg datuma "<<endl;
	cin>>dan2;
	cout<<"Unesite mjesec danasnjeg datuma "<<endl;
	cin>>mjesec2;
	cout<<"Unesite godinu danasnjeg datuma "<<endl;
	cin>>godina2;
	
	Datum A;
	Datum B;
	Datum C;
	A.postavi(dani,mjeseci,godine);
	B.danasnji(dan2,mjesec2,godina2);
	C.razlika(A,B);
	
	
}
