#include<iostream>

using namespace std;
class complex {
   double real, img;
   public:
      complex() {
         
         real = 0; img = 0;
      }
      complex(double r, double i) {
         
         real = r; img = i;
      }
      void set();
      void get();
      void display();
      friend complex add(complex, complex);
      friend complex mult(complex, complex);
};
void complex::set() {
   cout << "Enter Real part: ";
   cin >> real;
   cout << "Enter Imaginary Part: ";
   cin >> img;
}
void complex::get() {
   cout << "Zbroj kompleksnih brojeva je: "<< real << "+" << img << "i" << endl;
}
void complex::display() {
   if(img < 0)
      if(img == -1)
         cout << "Umnozak kompleksnih brojeva je: "<< real << "-i" << endl;
      else
         cout << "Umnozak kompleksnih brojeva je: "<< real << img << "i" << endl;
      else
         if(img == 1)
            cout << "Zbroj kompleksnih brojeva je: "<< real << " + i"<< endl;
         else
            cout << "Zbroj kompleksnih brojeva je: " << real << " + " << img << "i" <<
   endl;
}
complex add(complex c1, complex c2) {
   complex res;
   res.real = c1.real + c2.real;
   res.img = c1.img + c2.img;
   return res;
}
complex mult(complex c1, complex c2) {
   complex res;
   res.real = c1.real*c2.real-c1.img*c2.img;
   res.img = c1.real*c2.img + c1.img*c2.real;
   return res;
}

int main(){

complex a(2, 1), b(-1.5, -1);
complex result;

result = add(a, b);
result.display();
result = mult(a, b);
result.display();

/* Zadatak je nanovo napravljen te je malo kompleksniji nego sto bi trebao biti
ali ispisuje trazeni rezultat */

}

