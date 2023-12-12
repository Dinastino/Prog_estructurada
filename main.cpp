#include <iostream>
#include <cstring>
using namespace std;

struct Alumno {
    char nombre[50];
    int edad;
    float promedio;
};

int main(){
    int e;
    float p;
    cout << "Cual es la edad de Juan:\n";cin >> e;
    cout << "Y cual es su promedio:\n";cin >> p;
    struct Alumno alumno1;
    strcpy(alumno1.nombre, "Juan");
    alumno1.edad = e;
    alumno1.promedio = p;

    cout << "Cual es la edad de Ana:\n";cin >> e;
    cout << "Y cual es su promedio:\n";cin >> p;
    struct Alumno *alumno2 = (struct Alumno *) malloc(sizeof(struct Alumno));
    strcpy(alumno2->nombre, "Ana");
    alumno2->edad = 22;
    alumno2->promedio = 9.8;

    struct Alumno *punteroEst = &alumno1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);
};
