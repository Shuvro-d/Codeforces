#include<bits/stdc++.h>
#define        ls    long long singed
#define        ll     long long int
#define        fr   for (int i=0; i<n; i++)
#define        pf    printf
#define        dl     double
using namespace std;
int main()
{
    int  t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int rock,paper,scissor;
       cin>>rock>>paper>>scissor;
       char ara[n];
       int i,j=0;
       for(i=0;i<n;i++){
        cin>>ara[i];
       }
       char rar[n];
       for(i=0;i<n;i++){
        if(ara[i]=='R'){
            if(paper>0){
                rar[j]='P';
                j++;
                paper--;
            }
            else{
                rar[j]='X';
                j++;
            }
        }
        else if(ara[i]=='P'){
            if(scissor>0){
                rar[j]='S';
                scissor--;
                j++;
            }
            else{
                 rar[j]='X';
                j++;
            }
        }
        else if(ara[i]=='S'){
            if(rock>0){
                rar[j]='R';
                rock--;
                j++;
            }
              else{
                 rar[j]='X';
                j++;
            }
        }
       }
       /*for(i=0;i<n;i++){
        cout<<ara[i];
       }
       cout<<endl;
         for(i=0;i<n;i++){
        cout<<rar[i];
       }
        cout<<endl;*/
        int win=0;
        for(i=0;i<n;i++){
            if(rar[i]!='X'){
                win++;
            }
        }
        //cout<<win<<endl;
        int r_win;
        if(n%2==0){
            r_win=n/2;
        }
        else{
            r_win=(n/2)+1;
        }
        //cout<<r_win<<endl;
        for(i=0;i<n;i++){
            if(rar[i]=='X'){
                if(rock>0){
                    rar[i]='R';
                    rock--;
                }
                else if(paper>0){
                    rar[i]='P';
                    paper--;
                }
                else if(scissor>0){
                    rar[i]='S';
                    scissor--;
                }
            }
        }
        if(win>=r_win){
            cout<<"YES"<<endl;
            for(i=0;i<n;i++){
                cout<<rar[i];
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
