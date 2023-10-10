#include <stdio.h>

int main()
{
  int x;

  printf("Enter the value of x: " );
  scanf("%i", &x); //**The address of operator for x*/
  
  int y;

  y = x + 2;
  printf("The value of this expression is %i\n", y);
  return (0);

}
