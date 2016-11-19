#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_LENGTH 100
void chuanhoa(char []);
void main()
{
    char s[MAX_LENGTH];
    printf("nhap xau ky tu bat ky: ");
    gets(s);
    chuanhoa(s);
    printf("%s",s);
}
void chuanhoa(char s[])
{
    int i;
    i=0;
    while (s[i]!='\0')
    {
        if (s[i]==' ' && s[i+1]==' ')
          strcpy(&s[i],&s[i+1]);
        else i++;
    }
}
