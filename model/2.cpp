#include<stdio.h>
int main()
{
	int vow=0,con=0;
	char s[1000]="vowel",*p;
	p=s;
	while (*p)
	{
		if((*p>=65 && *p<=90) || (*p>=97 && *p<=122) )
		{
			if (*p=='a' || *p=='e'|| *p=='i' || *p=='0'||*p=='u' || *p=='A' || *p=='E'|| *p=='I' || *p=='O'||*p=='U')
			vow++;
			else
			con++;
		}
		p++;
	}
	printf("the word is %s",s);
	printf("\nvowels %d",vow);
	printf("\nconsonants %d",con);
	
}

