#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long long t,sum,j=1;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n;
        cin >> n;
        sum=0;
        for(long long i=1;i<=n/3;i++){
            if((i*3)<n){
                sum=sum+(i*3);
            }
            if((i*5)<n&&(i*5)%15!=0){
                sum=sum+(i*5);
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}


