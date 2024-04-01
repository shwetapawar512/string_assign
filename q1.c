#include<stdio.h>
void main()
{
	char s[50];
	int i,c;
	
	printf("Enter a string:\n");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
		{
			c++;
		}
	}
	c++;
	printf("Count of words: %d\n",c);
}
