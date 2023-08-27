#include <stdio.h>
#include <stdbool.h>

#define len(list) (sizeof(list) / sizeof(*list))

struct Animal{
  char name[4];
  bool IsAnimal;
  bool IsPet;
  int amount; }; 
typedef struct Animal animal;

void pick_ideal_pet(animal * candidate) ;

int main()
{
  auto int i = 0;
  struct Animal rock = {"Tree", false, false, 0};
  struct Animal wolf = {"Pig", true, true, 0};
  struct Animal dog = {"Dog ", true, true , 1};
  animal candidates [3] = {rock, wolf, dog}; 
  while (i < len(candidates)){  
    pick_ideal_pet(&candidates[i]);
    i++;
  }
  return 0;
}

void pick_ideal_pet(animal * candidate){   
  printf("%s \n", candidate->name);
  int b = 0;
  b = candidate->amount + candidate->IsPet + candidate->IsAnimal;
  
  switch (b) {
    case (0):
     printf("That not a even a pet\n"); break;
    case(1):
      printf("That a wild animal\n"); break; 
    case(2):
      printf("I don't have one\n"); break; 
    case(3):
      printf("That a nice pet, that i have!\n"); break;
  } 
  
    
}
  

