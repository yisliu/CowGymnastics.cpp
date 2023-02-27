
#include <iostream>

using namespace std;

/*
le projeter:

SAMPLE INPUT:
3 4
4 1 2 3
4 1 3 2
4 2 1 3
SAMPLE OUTPUT:
4

OBJECTIVE: find way to remember where things are...

*/

int check(int a, int b){
    int num = 0;
    if(a>b){
        num = 1;
        // cout<<" YOO ";
    }
    if(a<b){
        num = 0;
        // cout<<" BOO ";
    }
    return num;
}

int main()
{
    int n, k;
    cin>>k>>n;
    int a[n*k];
    for(int i = 0; i<n*k; i++){
        cin>>a[i];
        //bad method!!!
    }
    int h[n];
    for(int i = 0; i<n; i++){
        h[i] = check(a[i], a[i+1]);
    }
    int count;
    for(int i = 0; i<(k-1)*n; i++){
        int num = check(a[i], a[i+1]);
        if(num!=h[i]){
            // cout<<" NOO ";
            continue;
        }
        // cout<<" LOO ";
        count++;
    }
    cout<<count;
    return 0;
}
