#include<iostream.h>
#include<conio.h>
#include<string.h>
main()
{
  char str[50];
  int b, i;
  clrscr();
  cout<<"Enter the string:";
  gets(str);
  b=strlen(str);
  if(b%2!=0)
  {
    for(i=b;i>=b-2;i--)
    {
      str[i]='O';
    }
  }
  for(i=0;i<b;i++)
  {
    if(str[i]=='i')
      str[i]='e';
    if(str[i]=='a')
      str[i]='u';
  }
  cout<<"After manipulation \t string ="<<str;
  getch();
}
