/* Todo list:
 * ✅ Add diffuculty ✅
 * ✅ Add Farmer ✅
 * ✅ Add Chicken ✅  ❌(player) ❌ 
 * ✅ Make normal generation (Generation of house, field, bushes) ✅
 * Game full turns system
 * Final score 
 * Make Interface on opengl 
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define len(array) = sizeof(array)/sizeof(array[0]); 

int scanning (char *condition, int minimal_size);

void game(int size);

int *game_turn(int size); 

int main(void){
  int size; 
  size = scanning("Size of area: \n", 3);  
  game(size);
}

int scanning (char *condition, int minimal_size) {
    int size;
    /*Making loop that will check if index isn't lower that certain number */
    printf("%s \n", condition);
    scanf("%d", &size);
    /* Here is the check, i want to make sure that map isn't smaller that three */
    if (size <  minimal_size) {
          printf("Make size bigger \n");
          printf("Or exit by pressing: ctrl + c \n");
          scanning(condition, minimal_size);
        }
    else {
      printf("ok \n");
      return size;
    }
    
    return 0; 
}
    


/*Chicken and Farmer logic  */
int *game_turn(int size) {
  /* List of turns  */
  int *turns = malloc(size);
  for (int i; i <= size ;i++) {
    turns[i] = rand() % size;
  }
  return turns;
}

void game(int size) {
  int game_rounds, *farmer, *chicken, farmer_score=0, chicken_score=0; 
  
  game_rounds = scanning("Amount of rounds: \n", 0);
    
  int i = 0; 
  
  while (i < game_rounds) {     
    /*Comparing 2 arrays to get equal results, if not found chicken get score */
    /*Else farmer */
    chicken = game_turn(size);
    farmer = game_turn(size); 
    for(int x; x < size; x++) {
      if (chicken[x] != farmer[x]) {
        farmer_score++;
      } else {
        chicken_score++; } 
    }
    i++;
  }
  if (chicken_score > farmer_score) { 
    printf("Chicken won! \n");
  }
  else {
    printf("Farmer won! \n");
  }
}
