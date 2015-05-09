#include <stdio.h>
 
int bar(int &c, int d){
  //We pass in &c=a=x=0 and d=b=3
  c = d * 2 + c; //We pass c by reference so c = 3*2 + 0 (0 is the value of c) = 6
  d = 10; //d is passed by value so b and y stay the same
  return c * d; //This makes bar(a b) = 6*10 = 60
}
 
int foo(int &a, int &b){
  b++; //y = b, so b is incremented from 2 to 3
  a--; //x = a so x is decremented from 1 to 0. Since it is passed by reference x is 0
  return 2 * b + bar(a, b); //This makes z=2*3 + bar(a, b). bar takes it's first variable as reference, and it's second variable is passed by value.
  //b will stay the same, so y = 3
  //This gives us z = 2*3 + 60 = 66
}
 
int main(){
  int x = 1; //We initialize x as 1
  int y = 2; // We initialize y as 2
  int z = foo(x, y); // We make z the foo(x,y) foo passes x as reference and y as reference, so see how foo changes it's variables
  printf ("%d, %d, %d\n", x, y, z);
  return 0;
  //Prints 6, 3, 66
  //
}
