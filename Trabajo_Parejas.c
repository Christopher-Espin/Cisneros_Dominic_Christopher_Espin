#include <stdio.h>

int main(){

    int notas[5][3];

    // INGRESO DE DATOS
    for (int i = 0; i < 5 ; i++) {
        for (int j = 0; j < 3 ; j++) {
            printf("Ingrese la nota del estudiante %d en la materia %d: ", i+1, j+1);
            scanf("%d", &notas[i][j]);  

            if (notas[i][j] < 0 || notas[i][j] > 10) {
                printf("Nota invalida\n");
            }
        }
    }

    // PROMEDIO POR ESTUDIANTE
    printf("\n--- PROMEDIO POR ESTUDIANTE ---\n");
    for (int i = 0; i < 5; i++){
        int suma = 0;

        for (int j = 0; j < 3 ; j++){
            suma = suma + notas[i][j];
        }

        int promedio = suma / 3;
        printf("Estudiante %d: %d\n", i+1, promedio);           
    }

    // PROMEDIO POR ASIGNATURA
    printf("\n--- PROMEDIO POR ASIGNATURA ---\n");
    for (int j = 0; j < 3; j++){
        int suma = 0;

        for (int i = 0; i < 5; i++){
            suma = suma + notas[i][j];
        }

        int promedio = suma / 5;
        printf("Materia %d: %d\n", j+1, promedio);
    }

    // MAYOR Y MENOR POR ESTUDIANTE
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
        }

        printf("Estudiante %d -> Mayor: %d, Menor: %d\n", i+1, mayor, menor);
    }

    // MAYOR Y MENOR POR ASIGNATURA
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
        }

        printf("Materia %d -> Mayor: %d, Menor: %d\n", j+1, mayor, menor);
    }

    // APROBADOS Y REPROBADOS
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