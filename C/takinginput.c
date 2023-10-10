#include <stdio.h>

int main()
{

  int radius; /**The distance from outside to centre of the circle*/

  printf("Please enter a radius: ");
  scanf("%i", &radius); /** The & is called the address-of operator*/
  printf("The given radius is %i\n", radius);

  return (0);

}
