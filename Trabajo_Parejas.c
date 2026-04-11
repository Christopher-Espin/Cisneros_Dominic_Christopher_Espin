#include <stdio.h>

int main(){
    
     int notas[5][3];
        for (int i = 0; i < 5 ; i++) {
            for (int j = 0; j < 3 ; j++) {
              printf("Escribe la nota: ");
              scanf("%d", &notas[i][j]);  
            }
        }


return 0;

}
    
