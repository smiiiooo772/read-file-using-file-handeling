//read from file...
#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	fp=fopen("bsc.txt","r");
	if(fp == NULL)
	{
		printf("file cannot be open");
	}
	while(1)
	{
		ch = fgetc(fp);
		if(ch == EOF)
		break;
		printf("%c",ch);
	}
	fclose(fp);
}
