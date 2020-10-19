#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0,move=0;
    string ara_1, ara_2;
    cin >> n >> ara_1 >> ara_2;
    for(i=0; i<n; i++)
    {
        if(ara_1[i]<=5)
        {
            if(ara_1[i]<ara_2[i])
            {
                if(ara_2[i]<=(ara_1[i]+5))
                {
                    count=ara_2[i]-ara_1[i];
                    move=move+count;
                }
                else
                {
                    count=10-(ara_2[i]-ara_1[i]);
                    move=move+count;
                }
            }
            else
            {
                if(ara_2[i]<=(ara_1[i]-5))
                {
                    count=10-(ara_1[i]-ara_2[i]);
                    move=move+count;
                }
                else
                {
                    count=ara_1[i]-ara_2[i];
                    move=move+count;
                }
            }
        }
        else
        {
            if(ara_1[i]<ara_2[i])
            {
                if(ara_2[i]<=(ara_1[i]+5))
                {
                    count=ara_2[i]-ara_1[i];
                    move=move+count;
                }
                else
                {
                    count=10-(ara_2[i]-ara_1[i]);
                    move=move+count;
                }
            }
            else
            {
                if(ara_2[i]<=(ara_1[i]-5))
                {
                   count=10-(ara_1[i]-ara_2[i]);
                    move=move+count;
                }
                else
                {

                     count=ara_1[i]-ara_2[i];
                    move=move+count;
                }
            }
        }
       count=0;
    }
    printf("%d",move);
    return 0;
}

