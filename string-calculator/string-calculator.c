#include "string-calculator.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int	string_calculator(char *input)
{
	int	res;
	int	i;
	int	j;

	i = 0;
	res = 0;
	j = 0;
	
	while (input[i] != '\0')
	{
		if (j == 2)
                {
                        return (0);
                }
			
		else if (input[i] > '0' && input[i] <= '9')
		{
			res = res + (input[i] - '0');
			i++;
			j = 0;
		}
		else 
		{
			i++;
			j++;
		}
	}
	return (res);
}
