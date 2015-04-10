/* Tp101 SSL UTN
 * Fernando De Caro
 * 10/4/15
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
  	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step  = 20;
	
	fahr = lower;
	
	printf ("Celsius   ###  Fahrenheit \n ");	
	while (fahr <= upper){
		fahr = (9.0/5.0) * celsius -32.0;
		printf ("%6.0f   ###  %5.0f \n ",celsius,fahr);
		celsius= celsius + step;
	}
return 0;  	
}
