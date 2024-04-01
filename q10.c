#include<stdio.h>
void main()
{
	char s1[20],s2[20],s3[20];
	int i,j,l,k,ls1,ls2;
	

	printf("Enter string1 and string2:\n");
	scanf("%s %s",s1,s2);
	
	for(ls1=0;s1[ls1];ls1++);
	for(ls2=0;s2[ls2];ls2++);

	for(i=0,j=0,k=0;s1[i] && s2[k];)
	{
		s3[j++]=s1[i++];
		s3[j++]=s2[k++];
		
	}
	if(ls1==ls2)
	{
		s3[j]='\0';
	}
	else if(ls1>ls2)
	{	
		for(l=0;s1[l];l++)
		s3[j++]=s1[i++];
		s3[j]=s1[i];
	}
	else if(ls2>ls1)
	{
		for(l=0;s2[l];l++)
		s3[j++]=s2[k++];
		s3[j]=s2[k];
	}
	printf("s3=%s\n",s3);
}
