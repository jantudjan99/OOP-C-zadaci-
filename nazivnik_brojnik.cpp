#include<iostream>
using namespace std;
class razlomak {

      int brojnik, nazivnik;

  public:

       razlomak(int brojnik, int nazivnik=1) :brojnik(brojnik), nazivnik(nazivnik) {}
       
       friend ostream& operator<<(ostream &exit, const razlomak &razlomak);
	   friend bool operator<(razlomak&R1,razlomak&R2);
	   
	   razlomak operator<(const razlomak& drugi){
	   razlomak R3 (0, 0);
	   
	   R3.brojnik = this->brojnik < drugi.brojnik;
	   R3.nazivnik = this->nazivnik < drugi.nazivnik;
	   
	   return R3;
}

};

ostream& operator<<(ostream &exit, const razlomak &razlomak){
    exit<<razlomak.brojnik<<" / "<<razlomak.nazivnik<<endl;
    return exit;
};

bool operator<(razlomak&R1,razlomak&R2){
	float br1 = R1.brojnik;
	float br2 = R2.brojnik;
	float naz1 = R1.nazivnik;
	float naz2 = R2.nazivnik;
	float r1= br1/naz1;
	float r2 = br2/naz2;
	
	if(r1<r2){
		cout<< "Drugi razlomak je veci."<<endl;
	}
	else if(r1>r2){
		cout<< "Prvi razlomak je veci."<<endl;
	}
	else{
		cout<<"Razlomci su jednaki.";
	}
}

int main(){

	razlomak R1(19,20);
	razlomak R2(7,10);
	cout<<R1;
	cout<<R2;
	R1<R2;
}
