/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 26 de agosto de 2018, 06:29 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    printf("Buen día usuario, proponga 3 numeros");
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    
    if ((num1>num2)&&(num1>num3)){
        printf("\nEl dato mayor es %d",num1);
    }
     
    if ((num2>num1)&&(num2>num3)){
        printf("\nEl dato mayor es %d",num2);
    }
    if ((num3>num1)&&(num3>num2)){
        printf("\nEl dato mayor es %d",num3);
    }
    if ((num1<num2)&&(num1<num3)){
        printf("\nEl valor más pequeño es %d",num1);
    }
    if ((num2<num1)&&(num2<num3)){
        printf("\nEl valor más pequeño es %d",num2);
    }
    if ((num3<num2)&&(num3<num1)){
        printf("\nEl valor más pequeño es %d",num3);
    }
   if ((num1>num2)&&(num1<num3)){
        printf("\nValor de en medio es %d",num1);
    }
    if ((num1<num2)&&(num1>num3)){
        printf("\nValor de en medio es %d",num1);
    }
     if ((num2<num1)&&(num2>num3)){
        printf("\nValor de en medio es %d",num2);
    }
    if ((num2>num1)&&(num2<num3)){
        printf("\nValor de en medio es %d",num2);
    }
     if ((num3<num2)&&(num3>num1)){
        printf("\nValor de en medio es %d",num3);
    }
    if ((num3>num2)&&(num3<num1)){
        printf("\nValor de en medio es %d",num3);
    }
    return 0;
}

