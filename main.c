#include "headers.h"
#include <time.h>

int main(){
  srand(time(NULL));
  printf("Random struct of a person - name and age:\n");
  struct person *h = randH();
  printInfo(h);
  printf("\n");
  printf("Change name -> \"Person A\"; age -> 17:\n");
  change(h, "PersonA", 17);
  printInfo(h);
  return 0;
}
