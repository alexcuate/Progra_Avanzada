#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strongPasswordChecker(char* s) { 
    int longitud = strlen(s);
    int contain_min =0;
    int contain_may =0;
    int contain_num =0;
    if(longitud<=20 && longitud>=6){
    for(int i=0;i<longitud;i++){
        if((int)(s[i])>=48 && (int)(s[i])<=57 ){
            contain_num = 1;
  
        }
        if((int)(s[i])>=65 && (int)(s[i])<=90){
            contain_may = 1;
        }
        if((int)(s[i])>=97 && (int)(s[i])<=122){
           contain_min = 1;
        }

    }
    if(contain_min && contain_may && contain_num){
        printf("\nLa contrasena es aceptada\n");
        return 0;
    }else{
        printf("\nLa contrasena es rechazada\n");
        if(contain_num==0){
            printf("\nLa Contraseña debe contener al menos un numero\n");
        } else if(contain_may==0){
            printf("\nLa Contraseña debe contener al menos una letra mayuscula\n");
        }else if(contain_min==0){
            printf("\nLa Contraseña debe contener al menos una letra minuscula\n");
        }
        return -1;    
    }
    }else{
        printf("\nLa contraseña debe tener una longitud entre 6 y 20 caracteres\n");
        return -1;
    }
}

int main(){
char *pass = "hoLaa1";
strongPasswordChecker(pass);
return 0;
}
