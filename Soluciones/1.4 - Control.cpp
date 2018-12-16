#include <iostream>
using namespace std; 

int main() {
  double angle; 
  cin>>angle;
  int llantaIzquierda, llantaDerecha;
  if(angle<90){
    llantaIzquierda = 100;
    llantaDerecha = 100*angle/90;
  }else{
    llantaDerecha = 100;
    llantaIzquierda = 100*(180-angle)/90;
  }

  cout<<llantaIzquierda<<" "<<llantaDerecha;

}