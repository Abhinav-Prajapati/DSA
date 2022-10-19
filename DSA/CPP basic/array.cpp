#include <stdio.h>

int main()
{
	int z=0, o=0;
	char str[1000]=" ";
	scanf("%c", &str);
	char *ptr = str;
	while (*ptr != '\0')
	{	
		if ( ptr == "z") z++;
		else o++;
		
		ptr++;
	}
	if(o/z==1/2) printf("Yes");
	else printf("No");
}
