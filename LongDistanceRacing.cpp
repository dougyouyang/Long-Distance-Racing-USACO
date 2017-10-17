//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;

int main()
{
    int m, t, u, f, d;
    int sum=0, ans=0;
    char path;
    int i;
    
    cin >> m >> t >> u >> f >> d;
    for(i=0;i<t;i++){
        cin >> path;
        if(path=='u' || path=='d'){
            sum+=u+d;
        }
        else{
            sum+=2*f;
        }
        if(sum>m && ans==0){
            ans=i;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}
