// You need to design a half-pyramide from "*" stars, height of the pyramide is 4
//
//***    -> 3x"*" on row no.0 -> pattern: number of "*"-s = row no.+3
//****   -> 4x"*" on row no.1 -> pattern: number of "*"-s = row no.+3
//*****  -> 5x"*" on row no.2 -> pattern: number of "*"-s = row no.+3
//****** -> 6x"*" on row no.3 -> pattern: number of "*"-s = row no.+3

#include <stdio.h>

int main(void)
{
  //Here you can write the first loop which prompts user for a number. I write here just the result
  int height = 4;
  
  //Print rows with a loop
  for (int row = 0; row < height; row++)
  {
    //Print the "*"-s with the pattern
    for (int star = 0; star < ( row + 3); star++)
    {
      printf("*");
    }
    
    //Print new line
    printf("\n");
  }
}
