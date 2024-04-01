#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,j,c;

	printf("enter a string:\n");
	scanf("%[^\n]",s);

	printf("Enter a character you want to dlt:\n");
	scanf(" %c",&ch);

	printf("Before: %s\n",s);

	for(i=0,c=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;	
			c++;
		}
		if(c==2)
			break;
	}
	printf("after: %s\n",s);
}


