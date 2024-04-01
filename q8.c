#include<stdio.h>
void main()
{
	char s[20];
	int i,j,t;

	printf("Enter a string:\n");
	scanf("%s",s);

	printf("before: %s\n",s);

	for(i=0;s[i];i++)
	{
		for(j=0;s[j];j++)
		{
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}

	printf("after: %s\n",s);
}
