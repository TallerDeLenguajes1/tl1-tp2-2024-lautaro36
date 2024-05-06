#include <stdio.h>
#include <stdlib.h>

struct {
    int ghz, anio, nucleos;
    char *tipo_cpu;
} typedef compu;



int main () {
    char tipos[6][10] = {
                            "Intel", 
                            "AMD", 
                            "Celeron", 
                            "Athlon", 
                            "Core", 
                            "Pentium"        
                        };
    compu pc[5];
}