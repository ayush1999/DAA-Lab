#include<iostream>
using namespace std;

int search(int a[], int n, int e)
{
    int f, l, m;
    f = 0;
    l = n - 1;

    while (f <= l)
    {
        m = (f + l) / 2;
        if (e == a[m])
            return (m);
        else if (e > a[m])
            f = m + 1;
        else
            l = m - 1;
    }

    return -1;
}

int fact(int x){
    if (x<=1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}

int pow(int x){
    int ans = 1;
    for (int i=0;i<x;i++){
        ans = ans*10;
    }
    return ans;
}
int zeros(int x){
    int i=0;
    for(i=0;i<50;i++){
        if (x%pow(i) != 0){
            break;
        }
    }
    return i-1;
}
int main(){
    int size = 10;
    int arr[size];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<search(arr, size, 4);
}