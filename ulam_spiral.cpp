#include<iostream>
#include<conio.h>
using namespace std;
bool prime(int n)
{
    for(int i=n-1;i>1;i--)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int a[199][199];
    int num=1,w=1,q=2;
    a[99][99]=1;
    int i=99,j=99;
while(w<199)
    {
         
             if(q%2==0)
             {
                  for(int k=1;k<=w;k++)
                  {
                   j++;
                   num++;
                   a[i][j]=num;
                  }
                  for(int k=1;k<=w;k++)
                  {
                   i--;
                   num++;
                   a[i][j]=num;
                  }
                  w++;
             }
             else
             {
                 for(int k=1;k<=w;k++)
                  {
                   j--;
                   num++;
                   a[i][j]=num;
                  }
                  for(int k=1;k<=w;k++)
                  {
                   i++;
                   num++;
                   a[i][j]=num;
                  }
                  w++;
             }
             q++;
    
    }
    for(int t=0;t<198;t++)
    {
        for(int r=0;r<198;r++)
        {
        if(prime(a[t][r]))
        cout<<"###";
        else
        cout<<"***";
        }
        cout<<endl;
    }
    return 0;
}