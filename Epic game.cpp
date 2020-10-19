#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b)
{
   int c;
   if(a>b)
        swap(a,b);
    if(a==0)
        return b;
    else{
        while(1){
            c=a;
            a=b%a;
            b=c;
            if(a==0){
                return b;
                break;
            }
        }
    }
}

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    while(1){
        c-=gcd(a,c);
        if(c==0&&gcd(a,c)==a){
            printf("0\n");
            break;
        }
        c-=gcd(b,c);
        if(c==0&&gcd(b,c)==b){
            printf("1\n");
            break;
        }

    }

}
