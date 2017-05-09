#include <stdio.h>
#include "include/header.h"

int add(int x, int y)    /* Function definition */
{
  return x + y;
}

void savePerson(Person p)
{
  printf("Last name: %s\n", p.lastName);
  printf("Person record saved!\n");
}

void savePersonByReference(Person *p)
{
  printf("Last name: %s\n", p->lastName);
  printf("Person reference saved!\n");
}
