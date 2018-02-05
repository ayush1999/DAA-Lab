#include<iostream>
using namespace std;

int main(){
    int len1, len2;
    cin>>len1>>len2;
    int arr[len1+2][len2+2];
    for(int i=1;i<len1+1;i++){
        for(int j=1;j<len2+1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<len1+2;i++){
        arr[i][0] = -1;
        arr[i][len2+1] = -1;
    }
    for (int j = 0; j < len2 + 2; j++)
    {
        arr[0][j] = -1;
        arr[len1+1][j] = -1;
    }
    for (int i = 1; i < len1 + 1; i++)
    {
        for (int j = 1; j < len2 + 1; j++)
        {
            if (arr[i][j] >= arr[i - 1][j] && arr[i][j] >= arr[i+1][j] && arr[i][j] >= arr[i][j-1] && arr[i][j] >= arr[i][j+1])
            {
                cout<<arr[i][j];
            }
        }
    }
}