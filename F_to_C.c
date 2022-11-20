#include <stdio.h>

/*Program to convert given degree Fahrenheit to degree Centigrade*/

main()
	{
		float fahr, cels;

		#define LOWER  0
		#define UPPER  300
		#define STEP  20
		
		printf("Fahrenheit\tCentigrade \n");
		for (fahr=LOWER; fahr<=UPPER; fahr = fahr + STEP)
		{
			printf("%3.1f\t %6.2f \n",fahr,(5.0/9.0 * (fahr -32)));
		}
	}
