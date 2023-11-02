#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"dynamicSwap.h"
#include"dynamicSwap.c"
int main(void){
   char *bufa = (char *)malloc(sizeof(char)*50);
   char *bufb = (char *)malloc(sizeof(char)*50);
   //char bufa[50]; wont work!
   //char bufb[50];
   
   char **a = &bufa;
   char **b = &bufb;
   char *temp;
   
   //char *A, *B;
   //char **a = &bufa;
   //char **b = &bufb;
   //int a = 0, b =0;
   printf("enter a:\n");
   scanf("%s", *a);
   printf("enter b:\n");
   scanf("%s", *b);
   printf("a: %s b: %s ", *a, *b);
   printf("call robot..\n");
   //temp = bufa;
   //bufa = bufb;
   //bufb = temp;
   dynamicSwap(a, b);
   printf("a: %s b: %s ", *a, *b);
   free(bufa);
   free(bufb);
   return 0;
}
