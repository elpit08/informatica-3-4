#include <stdio.h>

int main(void)
{
  char user[20];
  printf("Hello:  ");
  scanf("%s", &user );
  printf("Hello, %s \n", user);
  char color[15];
  printf("What is your favorite color: \n");
  scanf("%s", &color);
  printf("Your favorite color is %s \n", color);
}
