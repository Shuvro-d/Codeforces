#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n,i,miska=0,cris=0;
    cin >> n;
    int m[n],c[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&m[i],&c[i]);
    }
    for(i=0;i<n;i++){
        if(m[i]<c[i]){
                cris++;
    }
    else if(m[i]>c[i]){
        miska++;
    }
    else{
        miska++;
        cris++;
    }
}
    if(miska>cris){
        printf("Mishka\n");
    }
    else if(miska<cris){
        printf("Chris\n");
    }
    else{
        printf("Friendship is magic!^^\n");
    }
    return 0;
}


