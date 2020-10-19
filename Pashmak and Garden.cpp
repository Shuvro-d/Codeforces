#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
ll i,j;
int main()
{
   int x1,y1,x2,y2;
   cin>>x1>>y1>>x2>>y2;
   if(y1==y2){
    int d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout<<x1<<" "<<y1+d<<" "<<x2<<" "<<y2+d<<endl;
   }
   else if (x1==x2){
    int d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    cout<<x1+d<<" "<<y1<<" "<<x2+d<<" "<<y2<<endl;
   }
   else{
        int x3=x1,y3=y2;
        int x4=x2,y4=y1;
        int d1=sqrt(pow((x1-x4),2)+pow((y1-y4),2));
        int d2=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
        if(d1==d2)cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4<<endl;
         else cout<<"-1"<<endl;
   }
    return 0;
}
