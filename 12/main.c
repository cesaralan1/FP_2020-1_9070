#include<stdio.h>
 #include<stdlib.h>
 int saludos(int personas){/*Aqui se hace la declaracion de la funcion saludo interpersonal*/
     int total,saludo;
     saludo=personas-1;/*Aqui se hace la funcion de las personas MENOS el que esta dando el saludo*/
     if (saludo==0){/*Este seria nuestro caso base de que si solo hay una persona, esta no dara ningun saludo porque no hay a quien saludar*/
     return saludo; /*y ya en este lado regresa en valor*/
         
     }
     total=saludo+saludos(personas-1);/*Aqui se hacela funcion de la suma total de todos los saludos*/
     return total;/*Aqui ya se usa el regresar del valor total de saludos*/
 }
 int main(int argc, char *argu[]){
     int resultado,personas;
     personas=atoi(argu[1]);/*Aqui se utiliza el primer argumento*/
     resultado=saludos(personas);/*Aqui ya llamamos a la funcion*/
     printf("%i\n",resultado);
     return 0;
 }
