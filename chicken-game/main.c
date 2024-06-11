#include "stdio.h"

void generation (int array[]){
    printf("%d", sizeof(array));
}

int main(void){
    int field[27];
    generation(field);

}