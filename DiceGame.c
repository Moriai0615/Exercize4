#include<stdio.h>
#include<stdlib.h>

int main(void){
  int a = 0;
  int b = 0;
  char name[8];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s\n",name);
  printf("Rolling the dice...\n");

  a = rand() % 6 + 1;
  b = rand() % 6 + 1;

  printf("Die 1: %d \nDie 2: %d \nTotal value: %d\n", a, b, a+b);

  if(a+b>7){
    printf ("%s won!\n",name);
  } else{
    printf ("%s lose!\n",name);
  }
}
