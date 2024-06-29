#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void aleatorio(int a);
int main(){
    int b,a;
    cout<<"introdusca el valor  maximo: ";cin>>a;
    cout<<"ingrese el numero de numeros aleatorios que quiere usted: ";cin>>b;
    aleatorio(a);
    return 0;

}
void aleatorio(int a,int b){
    int c=0,i=0;
    do{
    i++;
    srand(time(NULL));
    c=0+rand()%(a);
    cout<<c;
    }while(i<=b);
}

