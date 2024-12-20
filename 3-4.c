#include <stdio.h>
#include <string.h>
 
void itoa_2(int n, char s[]);
void reverse(char s[]);
 
int main()
{
	//int n = (~0U >> 1) + 1;
	int n=-123456;
	printf("%d\n",n);
	char s[10];
	itoa_2(n, s);
	printf("s:%s\n", s);
	
	return 0;
}
 
void itoa_2(int n, char s[])
{
	int i, sign;
 
	sign = n;
	i = 0;
	do {
		if (sign < 0)
			s[i++] = -(n % 10) + '0';
		else 
			s[i++] = n % 10 + '0';
	} while ((n /= 10) != 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
	
	return;
}
 
void reverse(char s[])
{
	int c, i, j;
	
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	return;
}










