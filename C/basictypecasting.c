#include <stdio.h>

int main()
{

  int eggs;
  scanf("%i", &eggs);

  double dozen = (double) eggs / 12;

  /**We are casting a double on the eggs variable so that it can 
  prints out eggs in decimals/fractions (2.5) rather as an interger (1)*/

  printf("You have %f dozen eggs \n", dozen);

    return (0);

}
