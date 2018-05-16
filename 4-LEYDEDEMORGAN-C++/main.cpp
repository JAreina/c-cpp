/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: juan
 *
 * Created on 16 de mayo de 2018, 20:12
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

// Nota. Ley de De Morgan
// !(A && B) == !A || !B
// !(A || B) == !A && !B
int main(int argc, char** argv) {

    
     bool A= false;
     bool B=true;
     
     bool sol = !(A && B) ;
     bool sol2 = !(A || B) ;
     
     bool sol3 = !A || !B;
     bool sol4 = !A && !B;
     
    cout<< sol <<" ... "<<sol2 <<endl;
    
    cout<< sol3<<" ... "<<sol4 <<endl;
    
    
    
    return 0;
}

