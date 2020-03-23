#include<iostream.h>
#include<string.h>
#include<conio.h>
class toy
{
 public:
 char colour1[4], colour2[10];
 char texture[15];
 double size1, size2;
 void gd();
 void operator !();
 void operator +();
};

void toy::gd()
 {
  int n;
  toy t1;
  clrscr();
  cout<<"Combination Of Colours.";
  cout<<"How many toys?";
  cin>>n;
  if(n==1)
  {
   cout<<"Enter Colour Of TOY:";
   cin>>colour1;
   operator !();
   }
  else
  {
    cout<<"Enter Colour Of TOY1:";
    cin>>colour1;
    cout<<"Enter Colour Of TOY2:";
    cin>>colour2;
    cout<<"\n\nEnter Size Of TOY1:";
    cin>>size1;
    cout<<"\n\nEnter Size Of TOY2:";
    cin>>size2;
   }
}
void toy::operator !()
{
 if(strcmpi(coloru1,"blue")==0)
 {
  cout<<"Colour:Purple";
 }
 else if(strcmpi(colour1,"red")==0)
 {
  cout<<"Colour:Blue";
 }
 else
 {
  cout<<"Colour:Black";
 }
getch();
}
void toy:: operator +()
{
 cout<<"\n New Toy Is of \nColour:Red \nTexture:Silky \nSize:"<<s1*s2;
 getch();
}
void main()
{
  toy t1;
  clrscr();
  cout<<"Combination Of Colours.";
  t1.gd();
  t1.gd();
  getch();
}
