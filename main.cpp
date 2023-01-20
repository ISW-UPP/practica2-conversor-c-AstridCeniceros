#include <iostream>

using namespace std;

int main()
{
    float pesos;
    cout<<"ingrese la cantidad en pesos: ";
    cin>>pesos;
    cout<<"dolares: "<<pesos*0.053<<endl;
    cout<<"euros: "<<pesos*0.049<<endl;
    cout<<"wones: "<<pesos*65.09<<endl;
    cout<<"peso argentino: "<<pesos*9.65<<endl;
    cout<<"peso colombiano: "<<pesos*247.50<<endl;



    float kilometros, pulgadas, pies, centimetros, aluz, nanometro;
    cout<<"ingrese la cantidad de kilometros: ";
    cin>>kilometros;
    pulgadas=kilometros/0.00002540000;
    cout<<"la respuesta es:"<<pulgadas<< "in";
    
    pies=kilometros*3280.84;
    cout<<"la respuesta es:"<<pies<< "ft";
    
    centimetros=kilometros*100;
    cout<<"la respuesta es:"<<centimetros<< "cm";
    
    aluz=kilometros*0.00000000000010570;
    cout<<"la respuesta es:"<<aluz<< "ly";
    
    nanometro=kilometros*1000000000000;
    cout<<"la respuesta es:"<<nanometro<< "nm";
    
   
    
    float kilogramos, toneladas, onzas, libras, microgramo, teragramo;
    cout <<"ingresa la cantidad en kilogramos: ";
    cin>>kilogramos;
    toneladas=kilogramos*0.001;
    cout<<"la respuesta es:"<<toneladas<< "ton";
    
    onzas=kilogramos/0.45359*16;
    cout<<"la respuesta es:"<<onzas<< "oz";
    
    libras=kilogramos*2.2046;
    cout<<"la respuesta es:"<<libras<< "lb";
    
    microgramo=kilogramos*1000000;
    cout<<"la respuesta es:" <<microgramo<< "µg";
    
    teragramo=kilogramos*1e-9;
    cout<<"la respuesta es:"<<teragramo<< "tg";
   
   
   
  
    return 0;
}
