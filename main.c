#include <stdio.h>
char name[20];
void fun(void);
int count = 20;
int main(void)
{
  fun();
  for (size_t i = 0; i < count; i++)
  {
    printf("%c\n", name[i]);
  }

  return 0;
}

void fun(void)
{
  printf("Hello World!\n");
  printf("from function fun!\n");
}
