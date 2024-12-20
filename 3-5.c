/*
  
 3.5 ��д����itob(n,s.b)��������nת��Ϊ��bΪ�׵������������ַ���ʽ�������ַ���S�С�
  ��itob(n,s,16)������nת��Ϊʮ�����������������ַ���S�С�
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
 
void reverse(char s[])
{
	int c,i,j;
	for (i=0,j=strlen(s)-1;i<j;i++,j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
 
void itob(int n ,char s[] ,int b)
{
	int i,j,sigh;
	sigh = n;
	i = 0;
	do 
	{
		j = abs(n%b);
		s[i++] = (j<=9)?j+'0':'A'+j-10;
 
	} while ((n/=b)!=0);
	if (sigh<0)
	{
		s[i++] = '-';
	}
	s[i] = '\0';
 
	reverse(s);
}
 
void main()
{
	int i = -188;
	char str1[100];
	itob(i,str1,16);
	printf("%s\n",str1);
}
