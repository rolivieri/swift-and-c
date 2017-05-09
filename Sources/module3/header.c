#include <stdio.h>
#include "include/header.h"

int add(int x, int y)    /* Function definition */
{
  return x + y;
}

/*
typedef struct
{
  int age;
  char firstName[10];
  char* lastName;
} Person;
*/

void addPerson(Person p)
{
  printf("Last name: %s\n", p.lastName);
  printf("Person record saved!\n");
}
