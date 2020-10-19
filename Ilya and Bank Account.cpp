#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char s[15];
    gets(s);
    int len=strlen(s);
    if(s[0]=='-'){
    if(len==3 && (s[1]=='0'|| s[2]=='0'))
                cout<<0;
    else{
      if(s[len-1]>=s[len-2]){
          for(i=0;i<len-1;i++){
            cout<<s[i];
          }
      }
      else{
          for(i=0;i<len;i++){
              if(i==len-2){
                  continue;
              }
              cout<<s[i];
          }
      }
    }
    }
    else{
        for(i=0;i<len;i++){
           cout<<s[i];
        }
    }
    return 0;
}
