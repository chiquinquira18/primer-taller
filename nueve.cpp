#include <iostream>
using namespace std;
int main()
{
    float nt1,nt2,nt3, result,suma ;
    cout<<"ingresa tus notas para saber la definitiva de la materia\nNota 1:\n ";
    cin>>nt1;
    cout<<"Nota 2:\n";
    cin>>nt2;
    cout<<"nota 3:\n";
    cin>>nt3;
    
    suma= nt1+nt2+nt3;
    
    result = suma/4;
    
    cout<<"tu promedio fue de : "<<result;
    
}