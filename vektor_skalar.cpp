#include <iostream>
using namespace std;

class vektor{

      int skalar, kut;

  public:

       vektor(int skal, int k=0) : skalar(skal), kut(k) {}

       friend ostream& operator<<(ostream &exit, const vektor &vektor);

    vektor operator+(const vektor& drugi){
        vektor Treci (0, 0);
        Treci.skalar = this->skalar + drugi.skalar;
        Treci.kut = this->kut + drugi.kut;
        return Treci;
}



};



ostream& operator<<(ostream &exit, const vektor &vektor){
    exit<<vektor.skalar<<" "<<vektor.kut<<endl;
    return exit;
};




int main(){
	
    vektor Prvi(10, 69);
    vektor Drugi(13, 34);
    vektor Treci (0, 0);

    cout<<Drugi;

    Treci = Prvi + Drugi;

    cout << Treci;

	return 0;
}
