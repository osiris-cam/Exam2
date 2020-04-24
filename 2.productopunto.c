#include <stdio.h>
#include <stdlib.h>
#include <string.h>
		
 // i = //  1   2   3 //

// v1 = 1 , 2 , 5
// v2 = 5, 6 , 10
// v1.v2 =67


float suma_ = 0;

int main(int argc, char** argv) 
{ 

	printf("Producto punto:\n");
	int n_elements=(argc-1)/2;

	for(int i=1; i<=n_elements; i++){
		suma_ += atof(argv[i]) * atof(argv[n_elements+i]); 
	}

	printf("Suma = %f\n",suma_);
	return 0;
}
