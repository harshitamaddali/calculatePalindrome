/*6)b)Write programme to determine if the given string is a palindrome or not*/

  // Palindrome                             //Date:31-12-2015
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,j,p,flag=1;
	clrscr();
	printf("Enter a word:\n");
	gets(str);
	p=strlen(str);
	for(i=0,j=(p-1);i<(p/2);i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=0;
			break;
		}

	}
	if(flag==1)
	{
		printf("\n%s is a palindrome.",str);
	}
	else
	{
		printf("\n%s is not a palindrome.",str);
	}
	getch();
}
/*
Output:
Enter a word:
madam

madam is a palindrome.

Enter a word:
computer

computer is not a palindrome.

*/

