#include <stdio.h>

int main()
{

  int radius; /**The distance from outside to centre of the circle*/

  printf("Please enter a radius: ");
  scanf("%i", &radius); /** The & is called the address-of operator*/

  double area = 3.14159 * (radius * radius);

  printf("The area of a circle with %i is %f\n", radius, area);

  return (0);

}
