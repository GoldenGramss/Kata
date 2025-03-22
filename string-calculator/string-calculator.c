#include "string-calculator.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NEUTRAL_ELEMENT 0

char* my_strdup(const char* FROM);

int	string_calculator(char *input)
{
  int sum = NEUTRAL_ELEMENT;
  
  char* input_copy = my_strdup(input);

  char* token;
  token = strtok(input_copy, ",");
  while (token != NULL)
    {
      sum += atoi(token);
      token = strtok(NULL, ",");
    }
  free(input_copy);
  return sum;
}


char* my_strdup(const char* FROM)
{
  char * input_copy = (char*) malloc(sizeof(char) * strlen(FROM));
  if (input_copy == NULL) abort();
  strcpy(input_copy, FROM);
  return input_copy;
}
