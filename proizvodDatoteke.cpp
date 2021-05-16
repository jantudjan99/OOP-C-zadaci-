#include<iostream>
#include<fstream>
using namespace std;



class Proizvod{
	private:
		char ime_proizvoda[20];
		int kolicina_proizvoda;
		double cijena_proizvoda;
	public:
		void unos();
};

void Proizvod::unos(){
	cout<<"Upisite ime proizvoda"<<endl;
	cin>>ime_proizvoda;
	cout<<"Upisite kolicinu proizvoda"<<endl;
	cin>>kolicina_proizvoda;
	cout<<"Upisite cijenu proizvoda"<<endl;
	cin>>cijena_proizvoda;
	
}

int main(){

	const int velicina=10;
	
	ofstream proizvodi("proizvodi.dat", ios::out | ios::binary);
	
	Proizvod p1[velicina];
	
	for(int i=0;i<velicina;++i){
		p1[i].unos();
	}
	
	proizvodi.write((char *)&p1,sizeof(p1));
	
	
	ifstream proizvodi;
        proizvodi.open;
        if(!proizvodi) {
            cout << "Nepostoji datoteka" << endl;
            break;
        }
        Proizvod pomocni={}; 
        int i=0;
        while(1){
            proizvodi.read((char )&pomocni, sizeof(pomocni));
            if(proizvodi.eof()) break;
                pomocni.ispis();
                proizvodi.seekg(++isizeof(pomocni));
            }
            cout << endl;
            proizvodi.close();
}
