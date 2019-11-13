 #include<stdio.h>
 #include<stdlib.h>
 double raiz(double num, double tolerancia, double resultado){/*Aqui se hace la declaracion funcion raiz*/
     double division,diferencia;
     division=num/resultado;/*Aqui el algoritmo para usar la raiz*/
     diferencia=resultado-division;
     diferencia=diferencia> 0? diferencia:-diferencia;/*Aqui se hace el paso de que si la diferencia es menor o igual que la tolerancia regresamos el resultado*/
     if(diferencia<=tolerancia){
         return resultado;
     }
     else{
         resultado=(resultado+division)/2; /*Aqui hacemos la busqueda del nuevo candidato*/
         return raiz(num,tolerancia,resultado);/*Aqui regresamos nuestro valor con el candidato*/
     }

     }
    int main (int argc, char*argu[]){
    	
    double num,tolerancia,resultado;
    
    num=atof(argu[1]);/*Aqui se guarda en otras variablees asi como el del tipo float*/
    
    tolerancia=atof(argu[2]);
    
    resultado=atof(argu[3]);
    
    resultado=raiz(num,tolerancia,resultado);
    
    printf("%lf\n",resultado);
    
}
