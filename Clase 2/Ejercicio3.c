#include <stdio.h>

// Referenciacion: Obtencion de la direccion de la variable

int main() {
    int value = 18;
    int *ptr_1, *ptr_2;
    ptr_1 = &value;
    ptr_2 = ptr_1;
    
    printf("La direccion de memoria de ptr_2 %p", ptr_2);
    return 0;
}
  