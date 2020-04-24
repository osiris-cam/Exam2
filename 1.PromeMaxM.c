#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  
int main(int argc, char** argv) 
{ 


	printf("Se ha ejecutado el archivo %s", argv[0]);

	printf("\nNumero de variables ingresadas al array son: %d \n", argc -1);


	float n_elemtos= argc-1; //Numero de los elementos ingresados para el arrray, se le resta (1) para que no tome el nombre del script
	float suma_n_elemto=0;
	float promedio;


	///////////////////////////////////////////////////// Guarda los datos capturados por argv en el vector ////////////////////////////////////////////////////////    
	float vector[argc];
	int temp, n = n_elemtos, a, b;
	for(int i = 1; i<argc; i++){
		vector[i-1] = atof(argv[i]); // vector[i-1] es porque un vector o array inicia en 0, en este caso i=1 por eso se le resta 1 para volverlo 0;

	}

	/// Algoritmo bubble sorth de ordenamiento. 
	for (a = 0 ; a < n - 1; a++){
	    for (b = 0 ; b < n - a - 1; b++){
	    	if (vector[b] > vector[b+1]){
	        	temp       = vector[b];
	        	vector[b]   = vector[b+1];
	        	vector[b+1] = temp;
	    	}
	    }
	}

	printf("El min value is %f, El max value is %f\n",vector[0], vector[argc-2]);

	
	///////////////////////////////////////////////////// Promedio ////////////////////////////////////////////////////////    
	for(int i = 1; i<argc; i++){
		//El promedio es la sumatoria de todos los elemtos divido por el numero total de datos
		suma_n_elemto += atof(argv[i]); //Suma todos los elementos del array
	}
	promedio= suma_n_elemto/n_elemtos; //Divide la suma de todos los elemtos por el numero total de elemtos 

	printf("El promedio  del array es  %f\n",promedio);
  
    return 0; 
}
