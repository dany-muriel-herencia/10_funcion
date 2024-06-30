#include<iostream>
#include<cmath>
using namespace std;
void hipotenusa(float,float);
int main(){
    float a,b,c;
    cout<<"ingrese el valor del cateto menor: ";cin>>a;
    cout<<"ingrese el valor del segundo cateto: ";cin>>b;
    hipotenusa(a,b);
    return 0;
}
void hipotenusa(float a,float b){
    float c;
    c=sqrt(pow(a,2)+pow(b,2));
    cout<<"la hipotenusa es "<<c;
}
