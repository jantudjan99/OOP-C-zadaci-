#include<iostream>
#include<iomanip>
using namespace std;

class Vrijeme {
 private:
 
    int sati;
    int minute;
    int sekunde;

 public:
    Vrijeme(int h=0, int m=0, int s=0);
    void setVrijeme(int h, int m, int s);
    void print();
    bool usporedi(Vrijeme);
};

Vrijeme :: Vrijeme(int h, int m, int s) {

    sati = h;
    minute = m;
    sekunde = s;

}

void Vrijeme :: setVrijeme(int h, int m, int s) {

    sati = h;
    minute = m;
    sekunde = s;

}

bool Vrijeme :: usporedi(Vrijeme ostaloVrijeme){ 
    if(sati == ostaloVrijeme.sati && minute == ostaloVrijeme.minute && sekunde == ostaloVrijeme.sekunde)
    return true;
    else
    return false;
}

void Vrijeme :: print(){
	cout<<sati<<":"<<minute<<":"<<sekunde<<endl;;
}

int main(){

    Vrijeme t1(9, 50, 59);
    t1.print();
    Vrijeme t2;
    t2.setVrijeme(10, 50, 59);
	t2.print();
    if(t1.usporedi(t2))
        cout<<"Vremena su jednaka";
    else
        cout<<"Vremena nisu jednaka";

    return 0;
};
