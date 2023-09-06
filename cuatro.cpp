#include <iostream>

using namespace std;

int main()
{
    
    cout<<" ingresa tu edad \n";
    int edad = 0 ;
    cin>>edad;
    if (edad >= 18 ){
        cout<<"eres mayor de edad";
    }else{
        cout<<"eres menor de edad";
    }
    
    return 0;
}