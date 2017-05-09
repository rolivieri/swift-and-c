#ifndef FOO_H_   /* Include guard */
#define FOO_H_

//http://stackoverflow.com/questions/6316987/should-struct-definitions-go-in-h-or-c-file
//https://www.tutorialspoint.com/cprogramming/c_strings.htm
//http://www.cs.usfca.edu/~wolber/SoftwareDev/C/CStructs.htm
//header files: https://gcc.gnu.org/onlinedocs/gcc-3.0.2/cpp_2.html

typedef struct
{
  int age;
  char firstName[10];
  char* lastName;
} Person;

int add(int x, int y);  /* An example function declaration */
void addPerson(Person p);

#endif // FOO_H_
