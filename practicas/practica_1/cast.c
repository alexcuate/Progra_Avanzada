#include <stdio.h>
int main(){
	int a = 4;
	int j;
	int *p;
	float f = 7.5;
	int max = 2147483647;
	long d;
	int b = a + (int)f;
	float c = a * f;
	int arreglo[5] = {0,2};
	
	d = (long)max * max;
	*(arreglo + 1) = 250;
	p = arreglo;
	for(int k = 0; k< sizeof(arreglo)/sizeof(arreglo[0]); k++){
		*p = 67;
		p++;
		//arreglo[k] = 67;
		//p[k]; // el compilador en realidad hace lo siguiente p+k
	}
	printf("p= %p,a = %d, j = %d, b= %d, d= %ld \n",p,a,j,b,d);
	printf(" f = %f, c = %f, arreglo[1] = %d \n",f,c, arreglo[1]);
	return 0;
}
