#include <stdio.h>
int foo(int *a, int b){
    /*foo's first argument is a pointer. This means the value in the first param has to be
    a reference, not a value. This is essentially doing the same thing as #1, but with
    a pointer in the parameters to force the reference to be passed in the function usage.
    
    PERSONAL NOTE: Something like this is more useful in big programs because it doesn't cause
    as much confusion as #1 could, but in a small program, #1 is the easier to understand way
    for most programmers. */
    
    b++; // b is passed by value, so y still equals 2
    *a = 10; //*a is basically saying the same thing as &x. So, x is now 10.
    return 2 * b + *a; // returns 2*3 + 10 = 16, so foo(&x, y) = 16
}

int main(){
    int x = 1; // x is initialized as 1
    int y = 2; // y is initialized as 2
    int z = foo(&x, y); // z is foo with foo taking a refernce of x and value of y
    printf ("%d, %d, %d\n", x, y, z);
    //Prints 10, 2, 16
    return 0;
}
