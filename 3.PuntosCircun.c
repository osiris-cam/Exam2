#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float pitagoras (float catetoa, float catetob ){
	
    return sqrt(catetoa*catetoa + catetob*catetob);
       
    }

int main(int argc, char ** argv) {
    float radio = atof(argv[1]); //recorrido de mis indices al ingresar
	float = hipotenusa;
    int i,indice = 2, indice2 = 3, puntosrec= argc--/2;
    
    for ( i = 1; i < puntosrec; i++){
        float catetoa = atof(argv[indice]);
        float catetob = atof(argv[indice2]);
        hipotenusa = pitagoras (catetoa,catetob);
        
        if (hipotenusa>radio) {
            printf("%.2f Puntos fuera\n", hipotenusa);
        }
	else if (hipotenusa<radio) {
            printf("%.2f Puntos dentro\n", hipotenusa);
        }
	else {
            printf("%.2f Puntos en el borde\n", hipotenusa);
        }
        indice+=2;
        indice+=2;
   }
    return 0;
}
