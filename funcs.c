#include <string.h>
#include "headers.h"

struct person randH(){
  struct person h;
  int n = rand() % 10;
  printf("%d", n);
  int x = 0;
  char s[10] = "";
  for (; x < n; x++){
    char *c = (char*)(rand() % 26 + 97);
    strcat(s, c);
  }
  printf("%s", s);
  h.name = s;
  h.age = rand() % 100;
  return h;
}
void printInfo(struct person h){
  printf("Name: %s\nAge: %d\n\n", h.name, h.age);
}
void change(struct person *h, char *n, int a){
  h -> name = n;
  h -> age = a;
}
