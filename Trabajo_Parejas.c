#include <stdio.h>

int main(){
    
     int notas[5][3];
        for (int i = 0; i < 5 ; i++) {
            for (int j = 0; j < 3 ; j++) {
              printf("Escribe la nota: ");
                scanf("%d", &notas[i][j]);  
                 if (notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("Nota invalida\n");
                    }            
            }
        }
        for (int i = 0; i < 5; i++){
            int suma = 0;
            
            for (int j = 0; i < 3 ; i++){
                suma = suma + notas[i][j];
            }
            int promedio = suma /3;
            printf("Estudiante %d: %d\n", i+1, promedio);           
        }
    printf("promedio por asignatura");

        for (int j = 0; j < 3; j++){
            int suma = 0;
            
            for (int  i = 0; i < 5; i++){
                suma = suma + notas[i][j];
            }
            int promedio = suma / 5;
            printf("Materia %d: %d\n", j+1, promedio);

        }
        
        
return 0;

}
    
