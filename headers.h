#include <stdio.h>
#include <stdlib.h>

struct person{
  char name[256];
  int age;
};

struct person randH();
void printInfo(struct person h);
void change(struct person *h, char *n, int a);
