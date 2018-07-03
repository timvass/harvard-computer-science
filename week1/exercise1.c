// You need to design a half-pyramide from "a" letters, height of the pyramide is 3
//
//a   -> 1x"a" on row no.0 -> pattern: number of "a"-s = row no.+1
//aa  -> 2x"a" on row no.1 -> pattern: number of "a"-s = row no.+1
//aaa -> 3x"a" on row no.2 -> pattern: number of "a"-s = row no.+1

#include <stdio.h>

int main(void)
{
  //Here you can write the first loop which prompts user for a number. I write here just the result
  int height = 3;
  
  //Print rows with a loop
  for (int row = 0; row < height; row++)
  {
    //Print the "a"-s
    for (int a = 0; a < ( row + 1); a++)
    {
      printf("a");
    }
    
    //Print new line
    printf("\n");
  }
}
