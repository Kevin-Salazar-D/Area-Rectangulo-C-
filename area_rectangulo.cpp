#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int base, altura, area;

    cout<<"Digite la base del rectangulo ";
    cin>>base;

    cout<<"Digite la altura del rectangulo ";
    cin>>altura;

    area = base*altura;
    
    cout<< "La base es "<<base <<" La altura es "<<altura <<"\n";
    cout<<"EL  area es : "<<area <<"\n";

    system("pause");
    return 0;
}
