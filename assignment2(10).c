#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;  
    ptr = &num;      
printf("Original value of num: %d\n", num);
*ptr = 25;

    
printf("Modified value of num using pointer: %d\n", num);
 printf("Address of num: %p\n", &num);
printf("Value stored in pointer ptr: %p\n", ptr);
 printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}
