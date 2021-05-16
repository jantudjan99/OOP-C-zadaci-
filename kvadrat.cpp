#include<iostream>
using namespace std;
class Kvadrat{
	
	public:
		static int stranica;
		
		Kvadrat(){};
		Kvadrat(int a){
			stranica=a;
		}
		void uvecaj_k(Kvadrat A){
			double k=2;
			stranica+k;
		}
		int opseg(Kvadrat A){
			return 4 * A.stranica;
		}
		int opseg_p(Kvadrat *A){
			return 4 * A->stranica;
		}
		
};

int Kvadrat::stranica;


	
int main(){
	
	Kvadrat kvadrat1(3);
	Kvadrat *pok;
	pok = &kvadrat1;
	kvadrat1.uvecaj_k(5);
	cout<<kvadrat1.opseg(kvadrat1.stranica)<<endl;
	
	Kvadrat kvadrat2(7);
	
	cout<<kvadrat2.opseg(kvadrat2.stranica)<<endl;
}
