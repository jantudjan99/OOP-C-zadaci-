#include<iostream>
#include<cmath>
using namespace std;

class Krug { 
  protected: 
    float r; 
  public: 
    Krug(float a=0); 
    float povrsina(){ 
      return pow(r,2)*M_PI;
    }  
}; 

Krug::Krug(float a): r{a} {}

 
class Stozac: public Krug { 
  protected: 
    float h; 
  public: 
    Stozac(); 
    Stozac(Krug &K, float h); 
    Stozac(float r, float h); 
    float volumen(){
      return (1.0/3)*h*povrsina();
    }
};

Stozac::Stozac(): h{0}, Krug{0} {}
Stozac::Stozac(Krug &K, float h): Krug{K}, h{h} {}
Stozac::Stozac(float r, float h): Krug{r}, h{h} {}


class Kugla: public Krug { 
  public: 
    Kugla(); 
    Kugla(Krug& K); 
    Kugla(float r);   
    float volumen() {
      return (4.0/3)*r*povrsina();
    }
}; 

Kugla::Kugla(): Krug{0} {}
Kugla::Kugla(Krug& K): Krug{K} {}
Kugla::Kugla(float r): Krug{r} {}


int main()
{
  Krug a(3);
  Stozac b(3,6);
  Stozac c(a,9);
  Kugla d(13);
  Kugla e(a);
  
  cout<<"Povrsina kruga: "<<a.povrsina()<<endl;
  cout<<"Volumen stosca B: "<<b.volumen()<<endl;
  cout<<"Volumen stosca C: "<<c.volumen()<<endl;
  cout<<"Volumen kugle D: "<<d.volumen()<<endl;
  cout<<"Volumen kugle E: "<<e.volumen()<<endl;
}



