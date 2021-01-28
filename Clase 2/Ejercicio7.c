#include <stdio.h>

// Referenciacion: Obtencion de la direccion de la variable

int main() {
    
    float *ptr_float;
    printf("El valor apuntado por ptr_float es %f", *ptr_float);
    *ptr_float = 10.5;
    
    return 0;
}
  