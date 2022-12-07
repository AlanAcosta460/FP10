#include <stdio.h>

struct datosAlumno
{
    char nombre[20];
    char apellido[20];
    char carrera[20];
    char noDeCuenta[20];
    int edad;
    float estatura;
    float peso;
};

struct datosAlumno estudiante;

int main()
{
    int n;
    FILE *apFile;
    apFile = fopen("datosAlumno.txt", "a");

    printf("Da nombre(s) del Alumno: ");
    gets(estudiante.nombre);
    printf("Da apellidos del Alumno: ");
    gets(estudiante.apellido);
    printf("Da carrera del Alumno: ");
    gets(estudiante.carrera);
    printf("Da no de cuenta del Alumno: ");
    scanf("%s", estudiante.noDeCuenta);
    printf("Da edad del Alumno: ");
    scanf("%d", &estudiante.edad);
    printf("Da estatura del Alumno: ");
    scanf("%f", &estudiante.estatura);
    printf("Da peso del Alumno: ");
    scanf("%f", &estudiante.peso);

    printf("\nDatos del alumno:");
    printf("\nNombre: %s \nAperllido: %s \nCarrera: %s \nNo de cuenta: %s \nEdad: %d \nEstatura: %.2f m \nPeso: %.2f kg\n", estudiante.nombre, estudiante.apellido, estudiante.carrera, estudiante.noDeCuenta, estudiante.edad, estudiante.estatura, estudiante.peso);

    fprintf(apFile, "Datos del alumno:");
    fprintf(apFile, "\nNombre: %s \nAperllido: %s \nCarrera: %s \nNo de cuenta: %s \nEdad: %d \nEstatura: %.2f m \nPeso: %.2f kg\n\n", estudiante.nombre, estudiante.apellido, estudiante.carrera, estudiante.noDeCuenta, estudiante.edad, estudiante.estatura, estudiante.peso);

    fclose(apFile);
    return 0;
}