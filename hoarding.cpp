
#include <utility>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
typedef std::pair<double, double> final;

bool compare(final& a, final& b){
    return a.first/a.second > b.first/b.second;
}
int main(void)
{
    double capacity;
    int n;
    cin>>capacity>>n;
    final final[n];
    int cost [n];
    int weight [n];
    
    for(int i= 0; i<n; i++){
        cin >> cost[i];
        final[i].first = cost[i];

    }
    for(int i =0 ; i <n; i++)
    {
        cin >> weight[i];
        final[i].second = weight[i];
    }
    
      double maxcost= 0;

    sort(final, final+n, compare);
    
    for(int i= 0; i<n; i++){
        if(final[i].second <= capacity){
            capacity =capacity- final[i].second;
            maxcost= maxcost+ final[i].first;
        }
        else{
            maxcost=maxcost+ final[i].first/final[i].second * capacity;
            capacity= 0;
            break;
        }
    }

    double num_with_decimal = static_cast<double>(maxcost);

    std::cout << std::fixed << std::setprecision(2) << num_with_decimal << std::endl;

   

}


