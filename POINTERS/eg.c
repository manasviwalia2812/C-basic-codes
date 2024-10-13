#include <stdio.h>

int main()
{
  int a = 76;
  int *ptra = &a;
  printf("%p\n", ptra);
  printf("%p\n", &a);
  printf("%p\n", &ptra);
  printf("%d\n", *ptra);

  int *ptr = NULL;
  printf("%p", ptr);
  return 0;
}
