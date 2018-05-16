/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main2.cpp
 * Author: juan
 *
 * Created on 16 de mayo de 2018, 18:44
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */


int sumar(int x,int y) {
    cout<< "hola capullo"<<endl;
    return (x+y);
}



int pedirNumero(){
    int z = 0, x = 0, y = 0;
    
    cout<< "dame un numero:";
    cin>>x;
    cout<<"\n dame OTRO NÚMERO:";
    cin>>y;
    cout<< "\n CALCULANDO..."<<endl;
     z= sumar(x,y);
    cout<< "RESULTADO:"<< z <<endl;
    
}



int main(int argc, char** argv) {

int x = 5;
int y = 7;
cout << "\n";
cout << x + y << " " << x * y;
cout << "\n";
int resultado = sumar(1000,2000);
cout<<resultado;
pedirNumero();
    return 0;
}

