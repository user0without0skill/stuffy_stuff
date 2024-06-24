#include "stdio.h"
#include "stdlib.h"

float *generation (int size);

int scanning ();

int main(void){
    int size;
    printf("size of array:  \n");
    while (1)
    {
        size = scanning();
        if (size != 0) {
            break;
        }
    }
    float *map = generation(size);
    free(map);

    return 0;
}

float *generation (int size) {
  int i=0;
  float *array = malloc(size);
  printf("generating nothing \n");
  printf("array size: %d \n", size);
  while(i !=size) {
      array[(int)i] = ((float)rand()/(float)(RAND_MAX)) * 1;
      i++;
  }
  return array;
}


int scanning () {
    int size;
    scanf("%d", &size);
    if (size <   3) {
        printf("Make size bigger \n");
        printf("Or exit by pressing: ctrl + c \n");
    }
    else {
        printf("ok \n");
        return size;
    }
    return 0;
}
