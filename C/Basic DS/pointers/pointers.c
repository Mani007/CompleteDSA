// This is pointer refresher for the C language
// make sure to use debugger to check the output

#include <stdio.h>

int main() {
    // Declare and initialize an integer variable
    int num = 10;
    
    // Declare a pointer to an integer variable
    int *ptr;
    
    // Assign the address of num to ptr
    ptr = &num;
    
    // Modify the value pointed by ptr
    *ptr = 20;
    
    // Print the value of num
    printf("Value of num: %d\n", num);
    
    return 0;
}