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

struct datosAlumno estudiante[100];

int main()
{
    int n, i;
    FILE *apFile;
    apFile = fopen("datosAlumnos.txt", "a");

    printf("Da la cantidad de alumnos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Da nombre(s) del Alumno: ");
        gets(estudiante[i].nombre);
        printf("Da apellidos del Alumno: ");
        gets(estudiante[i].apellido);
        printf("Da carrera del Alumno: ");
        gets(estudiante[i].carrera);
        printf("Da no de cuenta del Alumno: ");
        scanf("%s", estudiante[i].noDeCuenta);
        printf("Da edad del Alumno: ");
        scanf("%d", &estudiante[i].edad);
        printf("Da estatura del Alumno: ");
        scanf("%f", &estudiante[i].estatura);
        printf("Da peso del Alumno: ");
        scanf("%f", &estudiante[i].peso);
    }

    for (i = 0; i < n; i++)
    {
        printf("\nDatos del alumno %i: ", i + 1);
        printf("\nNombre: %s \nAperllido: %s \nCarrera: %s \nNo de cuenta: %s \nEdad: %d \nEstatura: %.2f m \nPeso: %.2f kg\n", estudiante[i].nombre, estudiante[i].apellido, estudiante[i].carrera, estudiante[i].noDeCuenta, estudiante[i].edad, estudiante[i].estatura, estudiante[i].peso);

        //Imprime en el archivo solicitado :)
        fprintf(apFile, "Datos del alumno %i: ", i + 1);
        fprintf(apFile, "\nNombre: %s \nAperllido: %s \nCarrera: %s \nNo de cuenta: %s \nEdad: %d \nEstatura: %.2f m \nPeso: %.2f kg\n\n", estudiante[i].nombre, estudiante[i].apellido, estudiante[i].carrera, estudiante[i].noDeCuenta, estudiante[i].edad, estudiante[i].estatura, estudiante[i].peso);
    }

    fclose(apFile);
    return 0;
}