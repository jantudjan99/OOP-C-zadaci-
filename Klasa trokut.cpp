#include <iostream>

#include <list>

using namespace std;

class Trokut {
    public:
      virtual int opseg() = 0;   
};

class Jednakostranicni : public Trokut {
	public:
		int a;
		Jednakostranicni(int a):a(a){};
		int opseg(){return a*3;}
		
		
};

class Pravokutni: public Trokut {
	public:
			int a,b,c;
			Pravokutni(int a,int b,int c):a(a),b(b),c(c){};
			int opseg(){return (a + b + c);}
		
};


typedef std::list<Trokut*> podaci;
typedef podaci::const_iterator iter;

int main(){

	podaci trokuti;
	
	trokuti.push_front(new Jednakostranicni(2));

	trokuti.push_back(new Pravokutni(5,4,3));
	
	for(iter it = trokuti.begin(); it != trokuti.end();	++it){
	
	   cout<<(*it)->opseg()<<endl;
	   
	   }
		
	   

}
