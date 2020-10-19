#include<bits/stdc++.h>

using namespace std;
int main()
{
   int a, b, c, d, x;
   int mogen = 0;
   cin >> a >> b >> c >> d >> x;
   mogen = x;
   if(a == 1 || b == 1 || c == 1 || d == 1){
        cout << x << endl;
    }
    else{
        for(int i = 1; i <= x; i++){
            if((i%a != 0) && (i%b != 0) && (i%c != 0) && (i%d != 0))
                mogen--;
        }
        cout << mogen << endl;
    }
    return 0;
}


