//#include<stdio.h>
//#include<string.h>
//void allprint(char a,char b,)
//{
//	int i='b'-'a';
//	for()
//}
//void expand(char *s1,char *s2)
//{
//	int len1=strlen(s1);
//	int alphabet=0;
//	for(int i=0;i<len1;i++)
//	{
//		
//		if(s1[i]<'z'&&s1[i]>'a')
//		{
//			if(alphabet==0)
//			{
//				alphabet++;
//			s2[i]=s[i];
//			}
//			else if(alphabet==2)
//			{
//				
//			}
//		}
//		if(s1[i]=='-')
//		{
//			if(alphabet!=0)
//			alphabet++;
//			else
//			{
//				printf("-");
//				alphabet=0;
//			}
//		}
//		
//		
//			
//		
//		
//	}
//	
//	
//}

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int judge(char a, char b)   //判断'-'两端的字符是否符合速记符号扩展的要求
{
	if(isdigit(a) && isdigit(b))
	{
		if(a < b)  return 1;
	}
	if(isalpha(a) && isalpha(b))
	{
		if(isupper(a) && isupper(b))  return 1;
		if(islower(a) && islower(b))  return 1;
	}
	return 0;
}

void expand(char *s, char *t)
{
	int i, j;
	char c;
	i = j = 0;
	while((c = s[i++]) != '\0') {
		if((s[i] == '-') && judge(c,s[i + 1])) {
			i++;
			while(c < s[i])
				t[j++] = c++;
		} else {
			t[j++] = c;
		}
	}
	s[j] = '\0';
}

int main()
{
	char a[1000],b[1000];
	gets(a);
	expand(a,b);
	printf("%s\n",b);
	return 0;
}















