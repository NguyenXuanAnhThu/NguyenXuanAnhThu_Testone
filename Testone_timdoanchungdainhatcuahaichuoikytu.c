#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_LENGTH1 100
#define MAX_LENGTH  100
#define MAX_LENGTH2 100
void main()
{
    char s1[MAX_LENGTH1];
    char s2[MAX_LENGTH];
    gets(s1);
    gets(s2);
    int s1len= strlen(s1);
    int sublen = s1len;//sublen là số ký tự trong dãy phụ
    char s[MAX_LENGTH2]; //đoạn chung dài nhất của hai chuỗi s1,s2
    while(sublen>=0)
    {
        int i=0,j; //i là vị trí dãy s trên giống dãy 1  trên dãy 2
        for(j=0;j<(s1len-sublen);j++)
        {
            strncpy(s,s2+j,sublen+1);
            char *t;
            t=strstr(s1,s);
            i=t-s1;
            if (i>=0) break;

        }
        if (i>0) break;
        sublen--;

    }
    printf("\n %s \n",s);
}
//em mặc định chuỗi 1 lớn hơn chuỗi hai nha Boss :|
