#include <stdio.h>
#include<string.h>
int strrindex(char *s,char *t)
{
	char *p;
	p=strstr(s,t);
	if(p==NULL)
	return -1;
	else
	return (p-s+1);
}

int main()
{
	char a[]="abcdefgh";
	char b[]="fg";
	printf("%d",strrindex(a,b));
	
	
	
	
	
	return 0;
}


//
//#include <stdio.h>
//   #define MAX 100
//   /* ��ϰ4-1 ��дһ������strindex(s,t)�����ڷ����ַ���t��s
//  4    �����ҳ��ֵ�λ�ã����s�в�����t����ô����-1��    */
//   
//   int strindex(char source[], char searchfor[]);
//   
//   main()
//   {
//          char line[MAX], pattern[MAX];
//          int ret_val;
//          printf("������ԭʼ�ַ�����");
//          scanf("%s", line);
//          printf("������Ҫ���ҵ��ַ�����");
//          scanf("%s", pattern);
//  
//          ret_val = strindex(line, pattern);
//          if (ret_val >= 0)
//                  printf("���ֵ�λ��Ϊ: %d\n", ret_val);
//          else if (ret_val == -1)
//                  printf("û���ҵ�!\n");
//  }
// 
//  /* ����t��s�����ҳ��ֵ�λ�ã���δ�ҵ��򷵻�-1 */
//  int strindex(char s[], char t[])
//  {
//          int i, j, k, ret_val;
//          for (i=0; s[i] != '\0'; i++) {
//                  for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
//                          ;
//                  if (k > 0 && t[k] == '\0')
//                          ret_val = i; /* ÿ�μ�¼�ҵ���λ�� */
//          }
//          if (ret_val >= 0)
//                  return ret_val;
//          else
//                  return -1;
//  }           









