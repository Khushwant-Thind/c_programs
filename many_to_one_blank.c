#include <stdio.h>

/*Program to replace each string of one or more blanks by a single blank*/

int main(){

	int a,b,x,y;
	a=b=x=y=0;
	a = getchar();
	// get character and check if it is EOF
	while(a!=EOF)
	{
		b = getchar();
		if (a == ' ' && b == ' ') 
		{
		// Do nothing
			continue;
		}
		
		else
		{
			putchar(a);
		}
		a = b;
	}
}
