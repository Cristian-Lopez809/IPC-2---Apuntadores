#include <stdio.h>
    

int main() {
    
    int x = 10, y = 15;
    
    int *const ptr = &x;
    *ptr = 3;
    
    ptr = &y;
    
    return 0;
}