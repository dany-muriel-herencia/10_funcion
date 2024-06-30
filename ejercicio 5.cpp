/*Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada calcularRaices 
que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde se almacenarán las 
raíces por referencia. Además, incluye una variable por referencia que indique si las raíces son reales o
 complejas. La función debe calcular las raíces utilizando la fórmula general y actualizar las variables correspondientes.*/
 #include<iostream>
#include<cmath>
#include <complex>
void raices(int a,int b,int c);
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
    float discriminante;

    //la discriminante va a ser lo que vamos a sacar raiz

    discriminante=b*b-(4*a*c);
    //las raizes
    if(discriminante>0){
    raices(a,b,c);
    cout<<"es real";
    }
    else if(discriminante==0){
        raices(a,b,c);
        cout<<"es real";
    } 
    else if(discriminante<0){
        raices(a,b,c);
    cout<<"es compleja";
}
}
void raices(int a,int  b,int c){
    float g,d,discriminante;
    discriminante=b*b-(4*a*c);
    if(discriminante>0){
    
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



