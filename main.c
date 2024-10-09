#include <stdio.h>

void fun(void);

int main(void)
{
  fun();
  return 0;
}

void fun(void)
{
  printf("Hello World!\n");
  printf("from function fun!\n");
}
