/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: juan
 *
 * Created on 8 de mayo de 2018, 16:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int *punt;
    int num= 33;
    *punt = &num;
    printf("%d",*punt);
    return (EXIT_SUCCESS);
}

