#include<iostream>
#include<cmath>
#include <complex>

using namespace std;
void formula_general(int a,int b,int c);

int main(){
    int a,b,c;
    cout<<"dame el valor de la primera constante a : ";cin>>a;  
    cout<<"dame el valor de la primera constante b : ";cin>>b;
    cout<<"dame el valor de la primera constante c : ";cin>>c;
    formula_general(a,b,c);

    return 0;
}
void formula_general(int a,int b,int c){
    float d,g,discriminante;

    //la discriminante va a ser lo que vamos a sacar raiz

    discriminante=b*b-(4*a*c);
    //las raizes
    if(discriminante>0){

    double d = (-b + sqrt(discriminante)) / (2 * a);
    double g = (-b - sqrt(discriminante)) / (2 * a);
    cout<<"las raisez son :\n";
    cout<<"raiz 1 :"<<d<<endl;
    cout<<"raiz 2 :"<<g<<endl;
    }
    else if(discriminante==0){
        d=-b/(2*a);
        cout<<"la raiz es : "<<d;
    } 
    else if(discriminante<0){
        complex<double> d = complex<double>(-b / (2 * a), sqrt(-discriminante) / (2 * a));
        complex<double> g = complex<double>(-b / (2 * a), -sqrt(-discriminante) / (2 * a));
    
    cout<<"las raisez son :\n";
    cout<<"raiz 1 :"<<d<<endl;
    cout<<"raiz 2 :"<<g<<endl;
}
}



