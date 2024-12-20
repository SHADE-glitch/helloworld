    //2-4
//#include <stdio.h>
//#include <string.h>
//       
//void squeeze(char *s1, const char *s2) {
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    int index = 0;
//
//    for (int i = 0; i < len1; i++) {
//        int found = 0;
//        for (int j = 0; j < len2; j++) {
//            if (s1[i] == s2[j]) {
//                found = 1;
//                break;
//            }
//        }
//        if (!found) {
//            s1[index++] = s1[i];
//        }
//    }
//    s1[index] = '\0'; // 确保字符串以空字符结尾
//}
//
//int main() {
//    char s1[100] = "hello world";
//    char s2[] = "ol";
//    squeeze(s1, s2);
//    printf("Result: %s\n", s1); // 应该输出 "he wrd"
//    return 0;
//}








//实验 
//#include<stdio.h>
//int main()
//{
//	char s1[100] ;
//    char s2[100] ;
//    scanf("%s %c",s1,s2);
//    printf("%s \n%c",s1,s2[0]);
//    printf("66");
//    
//    
//	return 0;
////}
//#include <stdio.h>
//
//int main() {
//    char *s1[] = {
//        "First string",
//        "Second string",
//        "Third string"
//    };
//    int i;
//
//    for (i = 0; i < 3; i++) {
//        printf("%s\n", *s1[i]);
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    char *str = "Hello";
//    printf("%c\n", str[1]); // 正确：打印 "Hello"
//    // str[0] = 'h'; // 错误：尝试修改字符串常量
//char n='a';
//	char *p=&n;
//	
//	printf("%c \n%s6",n,p);
//	
//    return 0;
//}


//2-5 

#include <stdio.h>
#include <string.h>

int any(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int result = -1;

    for (int i = 0; i < len2; i++) {
        char ch = s2[i];
        int pos = strchr(s1, ch) - s1; // strchr 返回的是指针，减去 s1 得到位置索引
        if (pos != -1 && (result == -1 || pos < result)) {
            result = pos;
        }
    }

    return result;
}

int main() {
    char s1[] = "hello world";
    char s2[] = "w";
    int position = any(s1, s2);
    if (position != -1) {
        printf("Position: %d\n", position); // 应该输出 6
    } else {
        printf("Character not found\n");
    }
    return 0;
}

































