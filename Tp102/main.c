/* Tp102 SSL UTN
 * Fernando De Caro
 * 18/4/15
 * Eje 1-10 Libro C PG:20
 */

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
	
	char  c ; 
        
        while ( (c = getchar()) != EOF){
      		
		if(c == ' ')
			c ='\\b';
		if(c == '	')
			c = '\\t';
		if(c == '\\')
			c = '\\\\';               
               //putchar(c);
		printf("%c",c);	
		
 	 }
return 0;

}

