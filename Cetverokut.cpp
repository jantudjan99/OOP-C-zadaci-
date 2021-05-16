#include <iostream>
#include <list>

using namespace std;

class Cetverokut{
public:
	virtual double povrsina()=0;
};

class Kvadrat:public Cetverokut{
public:
	double a;
	Kvadrat(double a):a(a){};
	double povrsina(){return a*a;}
};

class Pravokutnik:public Cetverokut{
public:
	double a,b;
	Pravokutnik(double a,double b):a(a),b(b){};
	double povrsina(){return a*b;}
};


typedef std::list<Cetverokut*> mojalista;

typedef mojalista::const_iterator iter;


int main(){

	mojalista li;
	
	li.push_back(new Kvadrat(2));
	
	li.push_back(new Pravokutnik(3,2));

	for(iter it = li.begin(); it != li.end(); ++it)
	
		cout<<(*it)->povrsina()<<endl;





system("pause");
return 0;
}
