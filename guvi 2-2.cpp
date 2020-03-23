#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
class MYTIME
{
    public:
      int hours;
      int mins;
      int secs;
      friend MYTIME operator +(MYTIME a,MYTIME b);
      void mtin()
       {
           cin>>hours>>mins>>secs;
       }
      void mtout()
       {
           cout<<"sum = "<<hours<<" "<<mins<<" "<<secs;
       }
      MYTIME()
      {
          hours=0;
          secs=0;
          mins=0;
      }
     void operator ++()
      {
          secs+=5;
          mins+=5;
          hours+=5;
      }
};
void tune(MYTIME &a)
{
    if(a.secs>=60)
    {
        a.mins+=(a.secs/60);
        a.secs=a.secs%60;
    }    
    if(a.mins>=60)
    {
        a.hours+=(a.mins/60);
        a.mins=a.mins%60;
    }
}
MYTIME operator +(MYTIME a,MYTIME b)
{
    MYTIME c;
    c.secs=a.secs + b.secs;
    tune(c);
    c.mins+=(a.mins + b.mins);
    tune(c);
    c.hours+=(a.hours + b.hours);
    return c;
}
main()
 {
    MYTIME a,b,c;
    a.mtin();
    b.mtin();
    c=a+b;
    c.mtout();
    ++b;
    tune(b);
    cout<<"\nIncrement of Time Object 2 = "<<b.hours<<" "<<b.mins<<" "<<b.secs;
    getch();
    return 0;
}
