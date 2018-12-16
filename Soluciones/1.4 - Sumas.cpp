#include <iostream>
using namespace std;

int sumaDeCuadrados(int n){
    return (n*(n+1)*(2*n+1))/6;
}


int main(){
    int x;
    cin>>x;
    int res = sumaDeCuadrados(x);
    cout<<res;
}