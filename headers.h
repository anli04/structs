#include <stdio.h>
#include <stdlib.h>

struct person{
  char *name;
  int age;
};

struct person randH();
void printInfo(struct person h);
struct person change(struct person h, char *n, int a);
