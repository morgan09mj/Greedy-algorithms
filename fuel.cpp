#include<bits/stdc++.h>
using namespace std;
int fuel(int dis, int amount, int n, int stations[])
{
    int count = 0, current = 0;
     bool check = false;
    while(current <= n) {
        int final = current;
        check = false;
        while(stations[final]!=dis && stations[current+1] - stations[final] <= amount) {
            current++;
            check = true;
        }
        if(stations[current+1] - stations[final] > amount){
            count++;
        }
        
        
        if(check == false)
        {
        return -1;
        
        }
    
        
    }
    return count-1;
    

}
int main() {
    int dis,amount, n;
    cin >> dis;
    cin >> amount;
    cin >> n;
    int stations[n+2];
    stations[0] = 0;
    stations[n+1] = dis;
    for(int i=1; i<=n; i++) {
        cin >> stations[i];
    }
    cout << fuel(dis, amount, n, stations);
    
}

