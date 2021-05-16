#include <iostream>
using namespace std;

template <typename Type>
void funkcija(Type arr1[], int n) {
for (int i = 0; i < n; i++) {
arr1[i]=arr1[i]+1;
}
}

int main(){
int a[5]={1,2,3,4,5};
funkcija(a,5);
for (int i=0; i<5; i++){
  cout<<a[i]<<endl;
}
cout<<endl;

float b[5]={3.5, 2.5, 1.5, 4.5, 5.5};
funkcija(b,5);
for (int x=0; x<5; x++){
  cout<<b[x]<<endl;
}

return 0;
}
