#include<iostream>
#include<conio.h>
using namespace std;

 void binsearch(int a[], int item, int n)
{
   int u=0,f=n-1;

  while(u<=f)
  {
      int m=(u+f)/2;

      if(a[m]==item)
      {
        cout<<" element found "<<a[m]<<endl;
        cout<<" position "<<m;
        break;
      }
      else {
            if(a[m]>item)
               f= m-1;
            else
            u= m+1;}


  }


}

int main()
{
    int a[]={10 ,20, 30, 40, 50, 60,75,78,89,90,99,100};
    int i,t;

    for(i=0;i<12;i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
    cout<<" which element to be search  ";
    cin>>t;
    binsearch(a,t,12);
    getch();
  return 0;
}
