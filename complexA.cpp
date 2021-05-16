#include <iostream>
#include <fstream>
using namespace std;








class  Complex { 

public:   

  double real; 

  double imag; 

  Complex(): real(0), imag(0) {}; 

  Complex(Complex&); 

  double Mag(); 

  double Phase();   

};
main(){

Complex A[1000]; 
fstream out_file("kbrojevi.bin"); 
for( int i = 0 ; i < 1000 ; i++ ) { 
out_file << A[i].real << " " << A[i].imag << endl;
}
out_file.close(); 

return 0;
}
