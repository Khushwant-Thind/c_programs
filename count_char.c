#include <stdio.h>

/*To count the number of characters*/

main()
{
	int count;
	count = 0;
	while(getchar()!=EOF)
		count++;
	printf("No of Characters is : %d\n", count);
}
