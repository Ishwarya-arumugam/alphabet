#include<stdio.h>
#include<conio.h>
void main()
{
char ab;
clrscr();
printf("Enter the character ");
scanf("%c",&ab);
printf("%c",ab);
if(((ab>='a')&&(ab<='z'))||((ab>='A')&&(ab<='Z')))
{
printf("Alphabet");
}
else
{
printf("Not an alphabet");
}
getch();
}
