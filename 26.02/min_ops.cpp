#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int> v)
{
    int res = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            res++;
        }
    }
    if (res == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int get_steps(int x){
    vector<vector> vec;
    int k = 10
    while(k>0){
    vector<int> v1;
    if (x==1){
        v1.push_back(x);
    }
    else if (x % 3 == 0 && x % 2 == 0)
    {
            v1.push_back(x / 3);
            v1.push_back(x / 2);
            v1.push_back(x - 1);
    }
    else if (x % 3 == 0 && x % 2 != 0)
    {
        v1.push_back(x / 3);
        v1.push_back(x - 1);
    }
    else if (x % 3 != 0 && x % 2 == 0)
    {
        v1.push_back(x / 2);
        v1.push_back(x - 1);
    }
    else
    {
        v1.push_back(x - 1);
    }
    vec.push_back(v1);
    k--;
    }

    int  i=0;
    for (i=0;i<10;i++){
        if (check(vec[i])){
            cout<<i;
            break;
        }
    }
    return 0;
}
int main(){
    get_steps(10);
}