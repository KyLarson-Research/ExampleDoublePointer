#include<stdio.h>

void dynamicSwap(char **a, char **b){
   char *temp;
   //printf("%s", *a);
   temp = *a;
   *a = *b;
   *b = temp;
   return;
}


