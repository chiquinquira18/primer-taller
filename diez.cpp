#include <iostream>
using namespace std;
int main()
{
    float nota,suma;
    int n ;
    
    cout<<"cuantas notas vas a ingresar";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        cin>> nota;
        suma = suma+ nota;
    }
    float r = suma/n ; 
    float n3 = suma *0.2 ; 
    
    cout<<"el promedio es de "<<r;
    cout<<"\nel porcentaje de la 3 nota es "<< n3;
}