#include <stdio.h>
#include <string.h>
#define TAMANO 100
 
void LeerLinea(char cadena[], int tamano)
{
    char c;
    fgets(cadena,tamano,stdin);
    if (cadena[strlen(cadena)-1] == '\n')
        cadena[strlen(cadena)-1] = '\0';
    else
    {
        cadena[tamano-1] = '\0';
        while((c = getchar()) != '\n'){};
    }
}

void invertir(char *frase){
     char c;
    if (frase[strlen(frase)-1] == '\n')
        frase[strlen(frase)-1] = '\0';
    else
    {
        frase[TAMANO-1] = '\0';
        while((c = getchar()) != '\n'){};
    }
    int i=strlen(frase);
    int aux;
    for(i; i>=0; i--)
    {
        if(frase[i]==' '){
            aux = i+1;
            while(frase[aux] !=' '){
                if(aux==strlen(frase))
                    break;
                printf("%c",frase[aux]);
                aux++;
            }
            printf(" ");
        }
        if(i==0){
            aux = i;
            while(frase[aux] !=' '){
                printf("%c",frase[aux]);
                aux++;
            }
        }
    }
    printf(" \n");
}
 
int main()
{
        int num;

    printf ("Inicio (hacer input del programa):\n");
    scanf("%d", &num);
    char frase[TAMANO];
    fgets (frase, 100, stdin);
    for(int i=0;i<num;i++){
        fgets (frase, 100, stdin);
        //printf(" Contenido de frase, %s",frase);
        invertir(frase);
    }
 
    return 0;
}