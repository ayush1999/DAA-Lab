#include<iostream>
using namespace std;

int main(){
    int a,b,c=0;
    cin>>a;
    int x[a+1];
    x[1]=0;
    x[2] = 1;
    x[3] = 1;
    for(int i =4;i<=a;i++){
        c = i-1;
        if (i%2 == 0){
            if (a[i/2]<a[c]){
                c = i/2;
            }
        }
        if (i % 3 == 0)
        {
            if (a[i / 3] < a[c])
            {
                c = i / 3;
            }
        }
        x[i] = 1 + x[c];
        c = 0;
    }
    cout<<x[a];
}