#include <stdio.h>
#include "include/header.h"

int add(int x, int y)    /* Function definition */
{
  return x + y;
}

void addPerson(Person p)
{
  printf("Last name: %s\n", p.lastName);
  printf("Person record saved!\n");
}
