#include <stdio.h>

int main()
{
  
  char myName[7]; 
  /**my name consists of 6 although strings require an extra char to indicate the the string is over*/

  printf("Enter your name: ");

  scanf("%s", myName);
  /**Strings dont require the address of operator &(vairable name) with arrays you dont do that*/

  printf("Hello %s!\nYou are the best keep on studying smart\n", myName);
  return (0);

}
