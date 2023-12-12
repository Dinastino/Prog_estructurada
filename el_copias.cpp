#include <iostream>
#include <cstring>
using namespace std;
struct Alumno {
    char nombre[50];
    int edad;
    float promedio;
};

struct Alumno copiarAlumno(struct Alumno alum) {
    struct Alumno nuevoAlum;
    strcpy(nuevoAlum.nombre, alum.nombre);
    nuevoAlum.edad = alum.edad;
    nuevoAlum.promedio = alum.promedio;
    return nuevoAlum;
}

