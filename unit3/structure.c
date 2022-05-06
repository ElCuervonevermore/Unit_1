#include <stdio.h>

struct student
{
    int alg;
    int fis;
    float prom;
    char* name;
    char* group;
};

struct transport 
{
    int tires;
    char* color;
    char* name;
};


int main (){
    struct student Gabriel = {10, 9, 10, "Gabriel", "A"};
    struct transport bus = {8, "Blue", "Ruta 17"};

    printf("%s:  %f\n", Gabriel.name, Gabriel.prom);
    return 0;
}