#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char *p = (char *)malloc(sizeof(char));
  printf("helloworld\r\n");
  printf("exit\r\n");
  free(p);
  return 0;
}
