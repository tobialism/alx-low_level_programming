#include "main.h" 

#include <stdlib.h>

int func1(const char *a, size_t b)
{
  char *c;
  int d;
  int e; 
  int f;
  
  d = open(a, 0);
  if (d == -1)
    return (0);
  
  c = malloc(sizeof(char) * b);
  f = read(d, c, b); 
  e = write(1, c, f);
  
  free(c);
  close(d);

  return (e); 
}
