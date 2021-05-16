#include<iostream>
#include<string>
using namespace std;

class Plovilo{

 protected:

   string registracija; 

   int snaga;

 public:

   Plovilo():Plovilo("", 0) {}
   
   Plovilo(string r, int snaga){
   	r=registracija;
   	snaga=snaga;
   };
	
	void set_registracija(string postavi){
		registracija=postavi;
	}
	
   string get_registracija(){
   	return registracija;
   }
	void set_snaga(double stavi){
		snaga=stavi;
	}
   double get_snaga(){
   	return snaga;
   }

   virtual void ispis()=0;

};

class Gliser : public Plovilo{
	private:
		int brzina;
	public:
		void set_brzina(int b){
			brzina=b;
		}
		int get_brzina(){
			return brzina;
		}
		void ispis(){
			cout<<"Ime registracije: "<<get_registracija()<<" Snaga: "<<get_snaga()<<" Brzina: "<<get_brzina()<<endl;
		}
};
class Trajekt : public Plovilo{
	private:
		int kapacitet;
	public:
		void set_kapacitet(int k){
			kapacitet=k;
		}
		int get_kapacitet(){
			return kapacitet;
		}
		void ispis(){
			cout<<"Ime registracije: "<<get_registracija()<<" Snaga: "<<get_snaga()<<" Kapacitet: "<<get_kapacitet()<<endl;
		}
};

int main(){
	Gliser obj1;
	cout<<"Podaci o gliseru: "<<endl;
	obj1.set_snaga(5);
	obj1.set_registracija("ZG5212");
	obj1.set_brzina(64);
	obj1.ispis();
	cout<<endl;
	
	Trajekt obj2;
	cout<<"Podaci o trajektu: "<<endl;
	obj2.set_snaga(9);
	obj2.set_registracija("PU986");
	obj2.set_kapacitet(78);
	obj2.ispis();
}
