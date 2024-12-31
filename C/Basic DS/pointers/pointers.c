// This is pointer refresher for the C language
// make sure to use debugger to check the output

#include <stdio.h>

int main() {
    // Declare and initialize an integer array
    int num[5] ;
    
    // Declare a pointer to an integer variable
    int (*ptr)[5];
    
    // Assign the address of num index to ptr
    ptr = &num;
    
    // Modify the value pointed by ptr
    //*ptr = 20;
    
    // Print the value of num
    printf("Value of num: %d\n", num);
    // Print the value of *ptr
    printf("Value of num: %p\n", ptr);
    // Print the value of num using *ptr, make sure you use correct %d not %x also known as format specifiers
    printf("Value of num: %d\n", *ptr);
    
    return 0;
}