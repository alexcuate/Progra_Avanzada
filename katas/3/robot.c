#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int robot(char* s) { 
    int x = 0; 
    int y = 0;
    int longitud = strlen(s);
    for(int i=0;i<longitud;i++){
        if(s[i]=='U'){
            y=y+1;
        } else if(s[i]=='D'){
            y=y-1;
        }
        if(s[i]=='R'){
            x=x+1;
        } else if(s[i]=='L'){
            x=x-1;
        }
    }
    if(y == 0 && x == 0){
        printf("\nTrue\n");
        return 1;
    } else{
        printf("\nFalse\n");
        return 0; 
    } 
}

int main(){
char *route = "UDUDD";
robot(route);
char *route2 = "UD";
robot(route2);
return 0;
}

