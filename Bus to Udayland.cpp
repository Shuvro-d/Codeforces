#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0;
    cin>>n;
    char ara[n][5];
    for(i=0; i<n; i++){
        for(j=0; j<5; j++){
            cin>>ara[i][j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<4; j++){
            if(ara[i][j]=='O'&&ara[i][j+1]=='O'){
                count++;
                ara[i][j]='+';
                ara[i][j+1]='+';
                break;
            }
        }
        if(count==1){
             break;
        }
    }
    if(count==1){
        printf("YES\n");
        for(i=0; i<n; i++){
            for(j=0; j<5; j++){
                printf("%c",ara[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("NO\n");
    }
    return 0;
}
