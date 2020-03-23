#include<iostream.h>
#include<conio.h>
int i;
class details
{ 
  public:
  char name[50];
  long int salary;
  int age, daughters, sum, total;
  void input();
  void set();
  void display();
};
void details::input()
{
  cout<<"enter name\t";
  cin>>name;
  cout<<"enter salary\t";
  cin>>salary;
  cout<<"enter the number of daughters\t";
  cin>>daughters;
  cout<<"enter the age\t";
  cin>>age;
}
    void details::set()
{
    sum=0;
  if(dgt>1)
{
  sum=sum+10;
}
  if(salary>30000)
{
  sum=sum+15;
}
  if(age>=40)
{
  sum=sum+30;
}
  total=(salary*sum)/100;
 cout<<"salary increasing="<<total;
}
void details::display()
{
  cout<<"\t \n name="<<name;
  cout<<"\t \n salary="<<salary;
  cout<<"\t \n number of daughters"<<daughters;
  cout<<"\t \n age="<<age;
  cout<<"\t \n increment="<<total;
}
void main()
{
  clrscr();
  details mem[20];
  int n;
  cout<<"how many member details want";
  cin>>n;
  for(i=0;i<n;i++)
{
   mem[i].input();
}
  for(i=0;i<n;i++)
{
   mem[i].set();
}
  cout<<"do you want display";
  for(i=0;i<n;i++)
{
    mem[i].display();
}
  getch();
}
