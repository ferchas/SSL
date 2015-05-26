ENTRADA Y SALIDA DE CARACTERES
==============================


### PREGUNTA 1
> Explique la primer expresión de la sentencia for de esta funcion main. ¿Que significa la coma? ¿Es un operador? ¿Que otra expresion equivalente existe?
### REPUESTA 1
> La primera sentencia del for es inicializar las variable. En principio el for ejecuta la primera sentencia que tiene antes de comezar con el ciclo y en este caso son dos variable que se inicializa. Las variables estan separada por el operador "coma" que separa una sentencia de otra 

### PREGUNTA 2
>¿Por que son necesarios los parentesis para el expresion c=getchar()? ¿Qué ocurriría si no los usamos?
### REPUESTA 2
> En este caso estamos indicando con los parentecis que se evaule la sentencia que contiene. Si no lo tuviera se enterpresta de otra forma por un tema de precedencia (Derecha a izquierda). Evaluaria primero la desigualda y el valor aobtenido lo coloaria ne la variable c.    

### PREGUNTA 3
>Describa la semantica y la pragmatica de la sentencia if que esta a continuacion de la sentencia for.
### REPUESTA 3
>la semantica es if (<expresión>) <sentencia>. Donce la expresión esta compuesta por operadores, operandos, paréntesis y llamadas a funciones que devuelve un booleano, si dicho resultado es verdadero ejecuta la sentencia. 

### PREGUNTA 4
>Describa la función perror.
### REPUESTA 4
>La función perror transforma el número de error en un mensaje de error.

### PREGUNTA 5
>Reemplace la expresión !feof(stdin)por una equivalente. Ayuda: ferror. Explique la semántica de feof y de ferror. ¿Las expresiones !feof(stdin)y ferror(stdin)son mutuamente excluyentes? ¿Que pragmatica tiene en este programa?
### REPUESTA 5
>se reamplazaria por ferror(stdin). La función feof comprueba el indicador de final de fichero para el stream apuntado. La función ferror comprueba el indicador de errores.Dischas funciones son mutiuamente excluyente.La pragmatic de este programa es mostar en pantalla el promedio de caracteres leido.   

### PREGUNTA 6
>Explique el formato %.1f
### REPUESTA 6
>El formato indica que recibe un numero flotante y  se imprime en pantalla parte entera con un digito de decimal. 

### PREGUNTA 7
>¿Por qué se aplica un casteo a la expresión nl?
### REPUESTA 7
>Las variables nc y nl estan definida como int y la divicion entre ellas da como resultado un int. Como se definio dentro del printf que espera un float es necesario catear a una de las variable que transforme el resultado en flotante.   

### PREGUNTA 8
>Ejecute el programa con el teclado como entrada y la pantalla como salida.
### REPUESTA 8
>Longitud promedio: 5.7

### PREGUNTA 9
>Ejecute el programa utilizando como entrada al archivo con el programa fuente, Promediar.c, y como salida a estadisticas.txt.
### REPUESTA 9
>   fuente < promediar.out > estadistica.txt 

### PREGUNTA 10
>¿Este programa funciona correctamente para cualquier entrada?
### REPUESTA 10
>


