#include <string.h>
#include "headers.h"

struct person randH(){
  struct person h;
  int n = rand() % 10;
  int x = 0;
  char s[11] = "";
  char f[2] = {(char)(rand() % 26 + 65)};
  strcpy(s, f);
  for (; x < n; x++){
    char c[2] = {(char)(rand() % 26 + 97)};
    strcat(s, c);
  }
  strcpy(h.name, s);
  h.age = rand() % 100;
  return h;
}
void printInfo(struct person h){
  printf("Name: %s\nAge: %d\n", h.name, h.age);
}
void change(struct person *h, char *n, int a){
  strcpy(h -> name, n);
  h -> age = a;
}
