#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf("enter the character") ;
scanf("%c", & ch);
// Check if the character is an alphabet
if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
{
printf("\nThe character entered is an alphabet ");
} 
else
// Check if the character is a digit
if(ch>='0' && ch<='9')
{
printf("\nThe character entered is a digit");
} 
else
// Check if it's a special symbol
{
printf("\nThe character entered is a special symbol");
} 
getch() ;
} 
