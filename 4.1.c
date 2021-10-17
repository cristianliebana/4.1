#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int PalabraPalindroma(char * cadena)
 {
 
    int longitud = strlen(cadena);
    if (longitud <= 1) return 1;
    int inicio = 0, fin = longitud - 1;
    while (cadena[inicio] == cadena[fin]){
        if (inicio >= fin) return 1;
        inicio++;
        fin--;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
	char cadena[] = "convertir a mayusculas";
	printf("Cadena original: %s\n", cadena);
	for (int indice = 0; cadena[indice] != '\0'; ++indice){
		cadena[indice] = toupper(cadena[indice]);
	}
	printf("Frase en mayúsculas: %s\n", cadena);
	return 0;
}