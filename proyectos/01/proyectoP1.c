#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void invertir(void)
{
    int longitud=0;
    int flag = 0;
    int startflag=0;
    int j = 0;
    char cadena[250];
    char resultado[250];
    system("clear");
    printf("*****Este Programa invierte el orden de cada palabra de una cadena de texto*****\n");
    printf("<<<Para un correcto funcionamiento favor de iniciar con un espacio y finalizar con un espacio.>>>\n");
    printf("Introduce un texto---<max 250 caracteres>---): ");
    gets(cadena);
    longitud = strlen(cadena);
    for (int i = 0; i < longitud; i++)
    {
      if(cadena[i]==' '){
          flag=i;
          for(int e=flag-1;e>=startflag;e--){
              resultado[j]=cadena[e];
              j++;
          }
          startflag=j;
      }
    }
    printf("Resultado: \n%s\n", resultado);
}

int main()
{
    invertir();
    return 0;
}

