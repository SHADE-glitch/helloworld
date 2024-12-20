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
//   /* 练习4-1 编写一个函数strindex(s,t)，用于返回字符串t在s
//  4    中最右出现的位置，如果s中不包含t，那么返回-1。    */
//   
//   int strindex(char source[], char searchfor[]);
//   
//   main()
//   {
//          char line[MAX], pattern[MAX];
//          int ret_val;
//          printf("请输入原始字符串：");
//          scanf("%s", line);
//          printf("请输入要查找的字符串：");
//          scanf("%s", pattern);
//  
//          ret_val = strindex(line, pattern);
//          if (ret_val >= 0)
//                  printf("出现的位置为: %d\n", ret_val);
//          else if (ret_val == -1)
//                  printf("没有找到!\n");
//  }
// 
//  /* 返回t在s中最右出现的位置，若未找到则返回-1 */
//  int strindex(char s[], char t[])
//  {
//          int i, j, k, ret_val;
//          for (i=0; s[i] != '\0'; i++) {
//                  for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
//                          ;
//                  if (k > 0 && t[k] == '\0')
//                          ret_val = i; /* 每次记录找到的位置 */
//          }
//          if (ret_val >= 0)
//                  return ret_val;
//          else
//                  return -1;
//  }           









