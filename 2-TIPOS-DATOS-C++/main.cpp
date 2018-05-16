/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: juan
 *
 * Created on 16 de mayo de 2018, 18:58
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
cout << "El tamaño del int es:\t\t" << sizeof(int) << " bytes.\n";
cout << "El tamaño del short es:\t" << sizeof(short) << " bytes.\n";
cout << "El tamaño del long es:\t" << sizeof(long) << " bytes.\n";
cout << "El tamaño del char es:\t\t" << sizeof(char) << " bytes.\n";
cout << "El tamaño del float es:\t\t" << sizeof(float) << " bytes.\n";
cout << "El tamaño del double es:\t" << sizeof(double) << " bytes.\n";
// Sacamos por salida standar un mensaje
cout << "Terminó el pograma \n";
    return 0;
}

