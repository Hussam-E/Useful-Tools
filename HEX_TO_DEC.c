#include <stdio.h>
#include <math.h>
unsigned long htoi(const char s[]);

int main()
{
	char test[]="0xAA";

	printf("The dec value is %ld",htoi(test));
}

unsigned long htoi(const char s[])
{
	int i;
	unsigned long c=0	;
	for(i=0;s[i]!='\0';i++)
	{
	if(s[0]!=0 && s[1]!=x)
	{
	puts("INSERT PROPER HEX FORMAT");
	return 0;
	}
		if(i==0||i==1)
		{
		}
		else
		{
			c =c+(s[i]-55)*pow(16,i-2);
		}
		
	}
	
	
	return c;
}