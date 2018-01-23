#include <stdio.h>

void qs(int lista[],int limite_izq,int limite_der){

    int izq,der,temporal,pivote;
    izq=limite_izq;
    der = limite_der;
    pivote = lista[(izq+der)/2];
    do{
        while(lista[izq]<pivote && izq<limite_der)izq++;
        while(pivote<lista[der] && der > limite_izq)der--;
        if(izq <=der)
        {
            temporal=lista[izq];
            lista[izq]=lista[der];
            lista[der]=temporal;
            izq++;
            der--;
        }
    }while(izq<=der);
    if(limite_izq<der){qs(lista,limite_izq,der);}
    if(limite_der>izq){qs(lista,izq,limite_der);}
}
void quicksort(int lista[],int n){
    qs(lista,0,n-1);
}

int getSumaElementos(int target, int lista[],int size){
    quicksort(lista,size);
    if(lista[0]>=target || (lista[size-1]+lista[size-1])<target){
        printf("Error no existe un par de números en el arreglo que sumen %d.\n",target);
    }else{
        int i = 0;
        int producto = -1;
        while(target!=producto){
            for(int j=0;j<size;j++){
                producto = lista[i]+lista[j];
                if(producto == target){
                    printf("Se encontraron dos números que suman le cantidad deseada. \n");
                    printf("%d + %d = %d \n",lista[i],lista[j],target);
                    break;
                }
            }
            if(i<size){
                i++;
                }else{
                    printf("No se encontró ninguna pareja de números que sumen %d \n",target);
                    break;}
        }
    }
    return 0;
}
 
int main(){
    int variable;
    printf("Introduce un valor entero para el target (x + y = target): ");
    scanf("%i", &variable);
    int lista[] ={100,56,30,1,45,2,46,5,9,6,67,23,5};
    int size = sizeof(lista)/sizeof(lista[0]);
    getSumaElementos(variable,lista,size);
    return 0;
}
