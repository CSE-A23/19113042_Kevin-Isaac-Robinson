#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
  int age, disp=0;
  char colour[20]="nill";
  clrscr();
  cout<<"Enter customer age\t";
  cin>>age;
  if(age<7)
  {
    cout<<"Have red car with AA baterries and remote";
    exit(0);
  }
  cout<<"Enter colour. if not required enter 'nill'";
  cin>>colour;
  cout<<"Enter display number. if not needed enter '0'";
  cin>>disp;
  if((colour!="nill")&&(disp==0))
    cout<<colour<<" coloured car with AA batteries and remote will be delivered";
  if((colour=="nill")&&(disp!=0))
    cout<<"Car model will be delivered";
  if((colour!="nill)&&(disp!=0))
    cout<<"CAR with all specifications will be delivered";
    getch();
  }
  
