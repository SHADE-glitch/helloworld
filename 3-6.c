//#include<stdio.h>
//#include<string.h>
//
//void reverse(char *s)
//{
//	int temp;
//	for(int i=0,j=strlen(s)-1;i<j;j--,i++)
//	{
//	temp=s[i];
//	s[i]=s[j];
//	s[j]=temp;
//	}
//}
//void itoa(int n,char a[],int min)
//{
//	int sign=n;
//	int i;
//	i=0;
//	do
//	{
//			if (sign < 0)
//			a[i++] = -(n % 10) + '0';
//		else 
//			a[i++] = n % 10 + '0';
//			for(int j=0;j<min;j++)
//		a[i++]=' ';
//			
//	}
//	while((n/=10)!=0);
//	
//	if(sign<0)
//	a[i++]='-';
//	a[i]='\0';
//	reverse(a);
//}
//
//int main()
//{
//	int n=-123456;
//	printf("%d\n",n);
//	char s[100];
//	itoa(n, s,6);
//	printf("s:%s\n", s);
//
//	return 0;
//}
//
//











#include <stdio.h>
#include <string.h>
 
#define MAXLEN 32
 
void itoa(int n, char s[], int l);
void reverse(char s[]);
 
int main()
{
	int n, l;
	char s[MAXLEN];
	
	printf("Please input digit n, length l:\n");
	scanf("%d,%d", &n, &l);
	itoa(n, s, l);
	printf("string:%s\n", s);
	
	return 0;
}
 
void itoa(int n, char s[], int l)
{
	int i, sign, len;
 
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
	while (strlen(s) < l)    //增加的地方
		s[i++] = ' ';
	s[i] = '\0';
	reverse(s);
	
	return;
}
 
void reverse(char s[])
{
	int c, i, j;
	
	for(i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	
	return;
}







