#include <stdio.h>
/*count no of lines which are input*/

int main(){

	int line_count,tab_count,blank_count,c;
	line_count = tab_count = blank_count = c = 0;
	//printf("%d\n",line_count);
	
	while((c=getchar())!=EOF)
	{
		if (c == '\n')
			line_count++;
		if (c == '\t')
			tab_count++;
		if (c == ' ')
			blank_count++;
	}
	printf("Count of lines is : %d\nCount of tabs is : %d\nCount of blanks is : %d\n",line_count,tab_count,blank_count);
}
