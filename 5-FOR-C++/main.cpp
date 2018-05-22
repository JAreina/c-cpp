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

 for(i=1; i++<10; i++,(i++)){
     (i == 5) ?  cout<< "cinco" <<endl : cout<< i<<endl;
    vector[i] = i;
    //cout<< i<<endl;
   // i--;
 }  
cout<< "*********** 2 ************" <<endl;

for(i=0; i++<10; (i++)){
     (i == 5) ?  cout<< "cinco" <<endl : cout<< i<<endl;
    vector[i] = i;
    //cout<< i<<endl;
    i--;
 }  
cout<< "************ 3 ************" <<endl;

for(i=0; i++<10; (i++)){
     (i == 5) ?  cout<< "cinco" <<endl : cout<< i<<endl;
    vector[i] = i;
    //cout<< i<<endl;
    i++;
 }  
cout<< "************ 4 ************" <<endl;

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

