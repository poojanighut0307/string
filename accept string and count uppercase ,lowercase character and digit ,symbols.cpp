#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s1[20];
	int i,c1=0,c2=0,c3=0,c4=0;
	printf("enter string = ");
	gets(s1);
	for(i=0; s1[i]!='\0'; i++)
	{
		if(isupper(s1[i]))
			c1++;
		else if(islower(s1[i]))
			c2++;
		else if(isdigit(s1[i]))
			c3++;
		else
			c4++;
	}
	printf("\n uppercase characters = %d",c1);
	printf("\n lowercase characters = %d",c2);
	printf("\n digit = %d",c3);
	printf("\n symbols = %d",c4);
}
