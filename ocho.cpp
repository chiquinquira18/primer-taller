using namespace std;

int main()
{
    cout<<"en que escala vas a ingresar la temperatura \n 1) celsius \n 2) Fahrenheit \n 3) kelvin\n";
    int opc=0;
    float tem  = 0.0 ,F,C,K ;
    cin>>opc ;
    cin>> tem;
    
    switch(opc){
        case 1 : 
            C = tem ;
            F = tem * 1.8 + 32;
            K = tem + 273.15;
        case 2 :
            F = tem ;
            C =(F - 32) * 5 / 9;
            K = (F + 459.67) * 5 / 9;
        case 3 :
            K = tem ;
            C = K - 273.15;
            F = (K * 9 / 5) - 459.67;
    }
    
    cout<<" celsius = "<<C<<"\n Fahrenheit = "<<F<<"\n kelvin = "<<K ;
    
}