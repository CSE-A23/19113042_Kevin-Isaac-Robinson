#include <iostream> 
#include<stdio.h>
using namespace std; 
class student
{
   public:
   char name[100];
   int reg_no;
   float chem, phy, math;
   int sum;
   void get()
   {
     cout<<"Enter name:\t";
     cin>>name;
     cout<<"Enter registration number:\t";
     cin>>reg_no;
     cout<<"Enter marks in chemistry:\t";
     cin>>chem;
     cout<<"Enter marks in math:\t";
     cin>>math;
     cout<<"Enter marks in physics:\t";
     cin>>phy;
   }
   void check()
   {
      if((chem>0 && phy>0 && math>0)&&(chem<=100 && phy<=100 && math<=100))
      {
           sum=chem+math+phy;
      }
    }
 };
 
int main()
{
    int n, i, a, total=0;
    student obj[100];
    cout<<"Enter number of Students\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        obj[a].get();
        obj[a].check();
    }
    for(i=0;i<n;i++)
    {
      if(obj[a].chem<0||obj[a].chem>100||obj[a].phy<0||obj[a].phy>100||obj[a].math<0||obj[a].math>100)
      {
         cout<<"Marks of "<<obj[a].name<<" is not in range\n";
      }
      total=obj[0].sum;
      if(total<obj[a].sum)
      {
         total=obj[a].sum;
         cout<<obj[a].name<<" has scored more marks "<<total;
      }
    }
}
