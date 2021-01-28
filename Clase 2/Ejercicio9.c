#include <stdio.h>
    
}

int main() {
    
    char c = "Z";
    char *pc = &c;
    char **ppc = &pc;
    char ***pppc = &ppc;
    ***pppc = "m";
    
    printf("El valor del ultimo apuntador es: %c"), ***pppc;
    
    return 0;
}
  