 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 int main (int argc, char *argu[]){ /*En primer lugar se debe de numerar los digitos*/
 int numero;
 
	
	
	numero=strlen(argu[1]); /*En este apartado "Sterlen es usado pa contar nuetros/los caracteres*/

     char arguc[numero]; /*En este son argumentos en una nueva lista para guardar ese numero*/
     int resultado=0;
	 int digitos[numero];/*Aqui una lista para guardar la cantidad de digitos*/
     for(int i=0;i<numero;i++){ /*En este apartado de este se hace la suma de los caracteres de a cuerdo con el numero de digitos*/
	 arguc[i]=argu[1][i];/*Aqui se guarda el num en lista de caracteres*/
	 digitos[i]=atoi(&arguc[i]);/*Aqui se guarda en lista de enteros*/
	 resultado=resultado=resultado+digitos[i];/*Aqui ya se suma cada uno de los digitos*/
     }
     
 
 
 printf("%i\n",resultado);
 return 0;
 }
