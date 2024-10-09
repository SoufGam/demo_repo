#include <stdio.h>

#define LEN 20

char name[LEN];

void fun(void);

int count = LEN;

int main(void)
{
  fun(LEN);
  for (size_t i = 0; i < count; i++)
  {
    printf("%c\n", name[i]);
  }

  return 0;
}

void fun(int value)
{
  printf("Hello World!\n");
  printf("from function fun!\n");
}
