#include "stdio.h"
#include "stdlib.h"

void generation (int size);

int scanning ();

void autogame(int size);

void game(int turn);

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
    generation(size);

    return 0;
}

void generation (int size) {
    int array[size], difficulty;
    array[size -1] = 1;

    printf("generating nothing \n");
    printf("array size: %d \n", size);
    printf("Choose game difficulty from 0 to 3: \n")

    scanf("%d", difficulty);
    switch (difficulty) {
      case 0:
        printf("Auto game enabled\n");
        autogame(size);
        break
      case 1:
        printf("Plains enabled\n"); 
        break;
      case 2:
        printf("Hills enabled\n");
        break;
      case 3:
        printf("Dessert enabled\n");
        break;
    } 
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

void autogame(int size) {
  printf("You win \n");
  printf("Score: %d\n");
}
