#include <stdio.h>
#include <stdlib.h>

int main () {
   int *a;

   /* Initial memory allocation with malloc */
   a = (int *) malloc(sizeof(int));

   *a = 42;

   printf("Number %d\n", *a);


   // remember to release resource
   free(a);
   
   return 0;
}