//#include<stdio.h>
//#include<string.h>
//
//void escape(char *s,char *t)
//{
//	int len1=strlen(s);
//	int len2=strlen(t);
//	int i;
//	for(i=0;i<len2;i++)
//	{
//		if(t[i]=='\t'||'\n'||' ')
//		{
//			switch(t[i])
//			{
//				case '\t':s[i]="\\t";break;
//			case '\n':s[i]="\\n";break;
//			case ' ':s[i]=" ";break;
//			}
//		}
//		else
//		s[i]=t[i];
//		
//	}
//	
//	s[i]='\0';
//}
//int main()
//{
//	char s[1000]="absdf";
//	char t[]="abc\tdef\ng h";
//	escape(s,t);
//	printf("%s",s);
//	return 0;
//}

#include<stdio.h>
#include<string.h>

void escape(char *s, const char *t) {
    int len2 = strlen(t);
    int i;
    for (i = 0; i < len2; i++) {
        switch (t[i]) {
            case '\t':                        //   \也是一个字符 ，\t也是一个字符，so这样子 
                s[i] = '\\';
                s[i + 1] = 't';
                i++; // 跳过下一个字符位置
                break;
            case '\n':
                s[i] = '\\';
                s[i + 1] = 'n';
                i++; // 跳过下一个字符位置
                break;
            default:
                s[i] = t[i];
        }
    }
    s[i] = '\0'; // 确保字符串以空字符结尾
}

int main() {
    char s[1000] = {0}; // 初始化为0，确保没有垃圾值
    char t[] = "abc\tdef\ng h";
    
    
    printf("%s\n",t);
    
    
    escape(s, t);
    printf("%s", s);
    return 0;
}














