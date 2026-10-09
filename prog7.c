#include<stdio.h>
int main()
{
 char ch;
 scanf("%c",ch);
 printf("%c",ch);
 char str[30];
 scanf("%s",str);
 scanf("%[^\n]",str);
 return 0;
} 
