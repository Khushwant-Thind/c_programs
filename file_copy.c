#include <stdio.h>
/*copy input to output: ver1.0 */

int main()
{
	int c;
	
	while((c=getchar())!=EOF){
		putchar(c);
	}

	printf("EOF character is : %d", EOF);
}
