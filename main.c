#include "headers.h"
#include <time.h>

int main(){
  srand(time(NULL));
  printf("Begin\n");
  printInfo(randH());
  printf("Done\n");
  return 0;
}
