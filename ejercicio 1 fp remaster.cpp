#include<iostream>
using namespace std;
void depositar(float );
void retirar(float);
void mostrarSaldo();
float saldo=0;//variable global
int main(){
    int op;
    float monto;
    do{
    cout<<"cajero automatico"<<endl;
    cout<<"1 . depositar"<<endl;
    cout<<"2. Retirar"<<endl;
    cout<<"3. Mostrar saldo"<<endl;
    cout<<"elija una pcion";cin>>op;
    switch(op){
        case 0:
        cout<<"saliendio......"<<endl;
        system("pause");
        break;
        case 1:
        cout<<"ingresa el monto";cin>>monto;
        depositar(monto);
        cout<<"."<<endl;
        break;
        case 2:
        cout<<"ingresa el monto";cin>>monto;
        cout<<"."<<endl;
        retirar(monto);
        break;
        case 3:
        cout<<"."<<endl;
        mostrarSaldo();
        break;
    }
    }while(op!=0);
    return 0;
}

void depositar(float monto ){
    saldo= saldo+monto;
    cout<<saldo<<endl;
}
void retirar(float monto){
    saldo =saldo-monto;
    cout<<saldo<<endl;
}
void mostrarSaldo(){
    cout<<"El saldo actual es: "<<saldo<<endl;
}