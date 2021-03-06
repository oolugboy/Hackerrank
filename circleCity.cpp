#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool valid(int i, int d)
{
    if(sqrt(d - pow(i, 2)) == (int)sqrt(d - pow(i,2)))
        return true;
    return false;
}
int main() {
    int t = 0;
    cin >> t;
    while(t--)
    {
        int d = 0, k = 0;
        scanf("%d%d",&d,&k);
        int res = 0;
        for(int i = 1; i <= d/i; i++)
        {
            if(valid(i,d))
                res+= 4;
        }
       // printf("%s%d\n", " The res ", res);
        if(res > k)
            printf("impossible\n");
        else
            printf("possible\n");
    }
    return 0;
}
