/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: juan
 *
 * Created on 16 de mayo de 2018, 19:43
 */

#include <cstdlib>
#include <iostream>


#define UNACONSTANTE  4000
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    char caracter ='a';
    bool vacio = false;
    bool falso = true;
    int y = 0;
    
    const float PI = 3.1416;
   
    cout<<"esto es pi "<< PI<<endl;
    
    cout<< "UNA CONSTANTE "<< UNACONSTANTE << ". True vale: "<< falso <<endl;
    cout<< "un caracter "<< caracter<<endl;
    cout<< "falso:  "<< vacio<<endl;
    return 0;
}

