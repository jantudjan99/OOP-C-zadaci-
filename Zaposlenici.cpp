#include <iostream>
using namespace std;

class Zaposlenik {

 protected:

   int sifra; 

   double placa;

 public:

   Zaposlenik():sifra(0), placa(0){};

   Zaposlenik (int s, double p):sifra(s), placa(p){
       s=get_sifra();
       p=get_placa();
   };

   int get_sifra(){
       int S;
       cin >> S;
       sifra=S;
       return S;
   }

   double get_placa(){
       int P;
       cin >> P;
       placa=P;
       return P;
   }
   void ispis(int s, double p){
       cout << sifra << " " << placa << endl;
   };

   virtual double iznos_place()=0;

};

class Stalni_Zaposlenik : public Zaposlenik {
    public:
        int Sati;
        double iznos_place(){
            double Ukupni_Iznos_S;
            Ukupni_Iznos_S=placa*Sati;
            return Ukupni_Iznos_S;
        }
};

class Privremeni_Zaposlenik : public Zaposlenik {
    public:
        int Trajanje_Ugovora;
        double iznos_place(){
            double Ukupni_Iznos_P;
            Ukupni_Iznos_P=placa*Trajanje_Ugovora;
            return Ukupni_Iznos_P;
        }
};

int main(){
    Stalni_Zaposlenik Stalni;
    Privremeni_Zaposlenik Privremeni;
    int S1, S2;
    double P1, P2;

    S1 = Stalni.get_sifra();
    P1 = Stalni.get_placa();
    S2 = Privremeni.get_placa();
    P2 = Privremeni.get_sifra();
    cout<< endl << "Zaposlenik 1:";
    Stalni.ispis(S1, P1);

    cout << Stalni.iznos_place() << endl;

    cout << endl;
    cout << "Zaposlenik 2:";
    Privremeni.ispis(S2, P2);

    Stalni.Sati = 120;
    Privremeni.Trajanje_Ugovora = 350;

    
    cout << Privremeni.iznos_place() << endl;

    return 0;
}
