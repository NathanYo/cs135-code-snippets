#include <stdio.h>

int foo(int a, int x){
      x++;
      a--;
      return 2 * x + a;
}

int main(){
      int x = 1;
      int y = 2;
      int z = foo(x, y);
      printf ("%d, %d, %d\n", x, y, z);
      return 0;
}
