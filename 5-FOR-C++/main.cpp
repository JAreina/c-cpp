/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: juan
 *
 * Created on 22 de mayo de 2018, 18:17
 */

#include <cstdlib>

    #include <iostream>
  
    

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
int vector[10], i;
 for(i=0; i++<10; (i++)){
    vector[i] = i;
    cout<< i<<endl;
    i--;
 }  
cout<< "************************" <<endl;

for(i=0; i<=10; (i--)){
    vector[i] = i;
    cout<< i<<endl;
    i+=1;
    if(i == 1) return 0; // SI NO BUCLE INFINITO
    // se ejecuta una vez RESULTADO : 0;
 }  
 system ("PAUSE");                                                                                                                                    
 return 0; 
}

