#include <iostream>
#include <cstdlib>

using namespace std;

class Racun{

private:
	int broj_racuna;
	float stanje;

public:
	Racun():broj_racuna(0),stanje(0){};
	Racun(int sa,float c):broj_racuna(sa),stanje(c){};
	void SetA(int a1,float a2);
	void GetA();
	Racun operator+(Racun&);
	friend ostream& operator<<(ostream &izlaz,const Racun &A);
};

void Racun::SetA(int a1,float a2){
	broj_racuna=a1;
	stanje=a2;
}

void Racun::GetA(){
	cout<<"Broj racuna: "<<broj_racuna<<'\n';
	cout<<"Stanje: "<<stanje<<"Kn"<<'\n';
}

Racun Racun::operator+(Racun &A1){
	Racun temp1;
	temp1.broj_racuna=A1.broj_racuna;
	temp1.stanje=A1.stanje+1000;
	return temp1;
}

ostream& operator<<(ostream &izlaz, const Racun &A){
	Racun temp2;
	izlaz<<A.broj_racuna<<" "<<A.stanje<<" ";
	return izlaz; 
	}

int main(){
	cout<<endl;
	cout<<"1.racun"<<endl;
	Racun a1(1,123);
	a1.SetA(201,1250.00);
	a1=a1.operator+(a1);
	a1.GetA();
	cout<<endl;
	cout<<"Ispis racuna: "<<a1<<endl;
	cout<<endl;
	
	cout<<"2.racun"<<endl;
	Racun a2(6,251);
	a2.SetA(553,2505.00);
	a2=a2.operator+(a2);
	a2.GetA();
	cout<<endl;
	cout<<"Ispis racuna: "<<a2; 
	
	cout<<endl;
	
	cout<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
