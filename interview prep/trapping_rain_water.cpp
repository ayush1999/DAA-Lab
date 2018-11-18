#include<iostream>
#include<vector>

using namespace std;

int get_max_right(int* a, int index, int size){
    int max_ind = index;
    for(int i=index+1;i<size;i++){
        if (a[max_ind] < a[i]){
            max_ind = i;
        }
    }
    return a[max_ind];
}

int get_max_left(int* a, int index, int size){
    int max_ind = index;
    for(int i=index-1;i>=0;i--){
        if (a[max_ind] < a[i]){
            max_ind = i;
        }
    }
    return a[max_ind];
}



int main(){
    int a[12] = {3,0,0,2,0,4};
    int count = 0;
    for(int i=1;i<5;i++){
        
        if (min(get_max_right(a, i, 6), get_max_left(a, i, 6)) > a[i]){
        count = count + min(get_max_right(a, i, 6), get_max_left(a, i, 6)) - a[i];
        }
    }
    cout << count;
}