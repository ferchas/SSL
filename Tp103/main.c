/* Tp101 SSL UTN
 * Fernando De Caro
 * 10/4/15
 */

#include <stdio.h>

int  main(int argc, const char * argv[]) {
    
  	float fahr, celsius;
	int i;

	int const lower = 0;
	int const upper = 300;
	int const step  = 20;
	
	fahr = lower;
	celsius = lower;
	
	printf ("Celsius   ###  Fahrenheit \n ");	
	for (i = lower; fahr <= upper ; i = i + step){
		fahr = (9.0/5.0) * i -32.0;
		printf ("%6d   ###  %5.0f \n ",i,fahr);
		
	}
return 0;  	
}
