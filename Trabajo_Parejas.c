#include <stdio.h>

int main(){

    int notas[5][3];

    for (int i = 0; i < 5 ; i++) {
        printf ("\n--- ESTUDIANTE %d ---\n", i+1);
        for (int j = 0; j < 3 ; j++) {
            int valido = 0;
            while (!valido) {
                printf("Ingrese la nota del estudiante %d (0-10): ", j+1);
                scanf("%d", &notas[i][j]);

                if (notas[i][j] >= 0 && notas[i][j] <= 10) {
                    valido = 1;
                } else {
                    printf("Nota invalida. Ingrese nuevamente.\n");
                }
            }
        }
    }

    
    printf("\n--- PROMEDIO POR ESTUDIANTE ---\n");
    for (int i = 0; i < 5; i++){
        float suma = 0;

        for (int j = 0; j < 3 ; j++){
            suma = suma + notas[i][j];
        }

        float promedio = suma / 3.0;
        printf("Estudiante %d: %.2f\n", i+1, promedio);           
    }

    
    printf("\n--- PROMEDIO POR ASIGNATURA ---\n");
    for (int j = 0; j < 3; j++){
        float suma = 0;

        for (int i = 0; i < 5 ; i++){
            suma = suma + notas[i][j];
        }

        float promedio = suma / 5.0;
        printf("Materia %d: %.2f\n", j+1, promedio);           
    }

    
    printf("\n--- MAYOR Y MENOR POR ESTUDIANTE ---\n");
    for (int i = 0; i < 5; i++){
        int mayor = notas[i][0];
        int menor = notas[i][0];

        for (int j = 1; j < 3; j++){
            if (notas[i][j] > mayor){
                mayor = notas[i][j];
            }
            if (notas[i][j] < menor){
                menor = notas[i][j];
            }
            printf ("Estudiante %d -> Mayor: %d, Menor: %d\n", i+1, mayor, menor);                  
        }

    }

    
    printf("\n--- MAYOR Y MENOR POR ASIGNATURA ---\n");
    for (int j = 0; j < 3; j++){
        int mayor = notas[0][j];
        int menor = notas[0][j];

        for (int i = 1; i < 5; i++){
            if (notas[i][j] > mayor){
                mayor = notas[i][j];
            }

            if (notas[i][j] < menor){
                menor = notas[i][j];
            }
            printf("Materia %d -> Mayor: %d, Menor: %d\n", j+1, mayor, menor);                       
        }

    }

    printf("\n--- APROBADOS Y REPROBADOS POR ASIGNATURA ---\n");
    for (int j = 0; j < 3; j++){
        int aprobados = 0;
        int reprobados = 0;

        for (int i = 0; i < 5; i++){
            if (notas[i][j] >= 6){
                aprobados++;
            } else {
                reprobados++;
            }
        }

        printf("Materia %d -> Aprobados: %d, Reprobados: %d\n", j+1, aprobados, reprobados);
    }

    return 0;
}