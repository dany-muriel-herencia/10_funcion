#include<iostream>
#include<cmath>
using namespace std;
void circulo(float a);
int main(){
    float a;
    cout<<"ingrese el radio del circulo: ";cin>>a;
    circulo(a);
    return 0;

}
void circulo(float a){
    int b,c;
    const double pi=3.141598;
    c=pi*pow(a,2);
    cout<<"el area de circulo es : "<<c;
}
