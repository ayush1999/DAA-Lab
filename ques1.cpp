#include<iostream>
using namespace std;

int fact(int x){
    if (x<=1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}

int ncr(int n,int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main(){
    int n,r;
    cout<<"Enter the values of n,r"<<endl;
    cin>>n>>r;
    cout<<"nCr is "<< ncr(n, r);

}