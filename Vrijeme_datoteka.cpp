#include <iostream>
#include <fstream>
#include <list>

using namespace std;

class Vrijeme{
	private:
		int sat;
		int minute;
    	int sekunde;
	
  	public:
		void ispis();
		void dodaj();
};

void Vrijeme::ispis(){
	cout << sat << ":" << minute << ":" << sekunde << endl;
}

void Vrijeme::dodaj(){
	cout << "Upisite vrijeme: "<<endl;
	cout << "Sati: ";
	cin >> sat;
	cout << "Minute: ";
	cin >> minute;
	cout << "Sekunde: ";
	cin >> sekunde;
	cout << endl;
}

int main(){
   list<Vrijeme> lista;
   int a, b, m;
   for(m=1; m<=5; m++){
    	Vrijeme m;
			m.dodaj();
			lista.push_back(m);
			cout << endl;
   }
   ofstream dat;
				int j=0;
				Vrijeme pomocni;
				dat.open("proizvodi.dat", ios::binary | ios::trunc);
				for(list<Vrijeme>::iterator i=lista.begin(); i!=lista.end(); i++){
					pomocni=*i;
					dat.write((char *)&pomocni, sizeof(pomocni));
					dat.seekp(++j*sizeof(*i));
				}
				cout << "Upis u datoteku dovrsen..." << endl << endl;
				dat.close();
   
   cout<<endl;
   do{
   
   cout<<"Unesite odabir 1 ili 2: "<<endl;
   cin >> a;
   switch(a){
      case 1:{
         	ifstream dat;
        cout<<"Ispis svih podataka"<<endl;
				dat.open("proizvodi.dat", ios::binary);
				if(!dat) {
					cout << "Nepostoji datoteka" << endl;
					break;
				}
				Vrijeme pomocni; 
				int i=0;
				while(1){
					dat.read((char *)&pomocni, sizeof(pomocni));
					if(dat.eof()) break;
					pomocni.ispis();
					dat.seekg(++i*sizeof(pomocni));
				}
				cout << endl;
				dat.close();
				break;
      }
      
    	case 2:{
    		int i=0;
	        ifstream dat;
	        cout<<"Ispis podataka za trazenim satom"<<endl;
	        dat.open("proizvodi.dat", ios::binary);
	        if(!dat) {
	        	cout << "Nepostoji datoteka" << endl;
	            break;
	        }
	        Vrijeme pomocni;
	        cout << "Trazim sat koji pocinje sa : ";
	        cin >> b;
	        cout << endl;
			 
	        //dat.seekg((b-1)*sizeof(pomocni));
	        
			//if(dat.get(pomocni)==b){}
			
			if(dat.read((char *)&pomocni, sizeof(pomocni))==(&b)); 
			{
			//dat.get((char*) &pomocni,b);
	        //;
	        dat.read((char *)&pomocni, sizeof(pomocni));
			if(dat.eof()) break;
			pomocni.ispis();
				dat.seekg(++i*sizeof(pomocni));
	        }
	    	break;
		}
		}
    }while(a!=0);
   
return 0;
}
