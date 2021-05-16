#include<iostream>
using namespace std;
class Kutija{
	private:
	int sirina;
	int visina;
	int dubina;
	public:
	
	Kutija():sirina(0),visina(0),dubina(0){};
	
	Kutija(int s,int v, int d):sirina(s),visina(v),dubina(d){};
	void volumenkutije();
	void SetKutija(int s1,int v1,int d1);
	int GetKutija();
	friend ostream& operator<<(ostream &izlaz,const Kutija &A);
	friend bool operator<(Kutija&M,Kutija&K);
	
};
void Kutija::SetKutija(int s1,int v1,int d1){
	sirina=s1;
	visina=v1;
	dubina=d1;
}
int Kutija::GetKutija(){
	return sirina,visina,dubina;
}
void Kutija::volumenkutije(){
	int volumen;
	volumen=sirina*visina*dubina;
	cout<<"Volumen: "<<volumen<<endl;
}
ostream& operator<<(ostream &izlaz, const Kutija &K){
	Kutija temp2;
	izlaz<<K.sirina<<" "<<K.visina<<" "<<K.dubina<<" "<<endl;
	return izlaz; 
}

bool operator<(Kutija &M, Kutija &K){
	int k1= M.sirina*M.visina*M.dubina;
	int k2 = K.sirina*K.visina*K.dubina;
	if(k1<k2){
		cout<< "Volumen druge kutije je veci.";
	}
	else if(k1>k2){
		cout<< "Volumen prve kutije je veci.";
	}
	else{
		cout<<"Volumeni su jednaki.";
	}
}
int main(){
	Kutija kutija1;
	cout<<"Podaci o prvoj kutiji:"<<endl;
	kutija1.SetKutija(5,7,8);
	kutija1.GetKutija();
	cout<<kutija1;
	kutija1.volumenkutije();
	cout<<endl;
	
	Kutija kutija2;
	cout<<"Podaci o drugoj kutiji:"<<endl;
	kutija2.SetKutija(21,52,4);
	kutija2.GetKutija();
	cout<<kutija2;
	kutija2.volumenkutije();
	cout<<endl;
	kutija1<kutija2;
}
