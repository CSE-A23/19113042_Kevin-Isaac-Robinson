#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
  int len, i;
  char str[50];
  clrscr();
  cout<<"\nEnter the string to check whether the word is ReeWord or not";
  scanf("%s",str);
  len=strlen(str);
  for(i=0;i<len;i++)
  {
    if((len>=6) && (len<=20))
    {
      if(str[i]=='r')
      {
	     if((str[i]=='#')||(str[i]=='$')||(str[i]=='!')||(str[i]=='@'))
	      {
	         if(str[i]!=' ')
	          {
	            cout<<"\n it is a REEWORD";
	          }
      	}
      }
    }
  }
  
  if(len<6||len>20)
	cout<<"NAY!;
 getch();
