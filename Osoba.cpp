#include <iostream>

using namespace std;

class Osoba {

public :

    Osoba(const char * ime , const char * prezime , int starost ){
    	cout<<ime<<" "<<prezime<<" "<<starost<<endl;
	}

	//Osoba() : ime(NULL), prezime(NULL), starost(0){}

    Osoba(const Osoba &a){
	   ime=new const char (*a.ime);
	   prezime=new const char (*a.prezime);
	}

	~Osoba () {
    	delete ime;
    	delete prezime;
	};

const Osoba& operator=(const Osoba &B){ 
	ime=B.ime;
	prezime=B.prezime;
	starost=B.starost;
	return B;
}

private :

    const char * ime ;

    const char * prezime ;

    int starost ;

};

int main(){
	Osoba A("Jan","Tudan",21);
	Osoba B("Marko","Pejic",35);
	B.operator=(A);
  return 0;
  
}
