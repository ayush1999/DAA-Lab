#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<deque>
using namespace std;

bool notin(deque<string> q, string s){
    int count = 0;
    for(int i=0;i < q.size(); i++){
        if (q[i] == s){
            return false;
            break;
        }
    }
    return true;
}

bool notin(vector<string> q, string s){
    int count = 0;
    for(int i=0;i < q.size(); i++){
        if (q[i] == s){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    string s[4][2] = { {"a", "b"}, {"a", "c"}, {"c", "b"}, {"b", "d"} };
    deque<string> q;
    q.push_back("a");
    vector<string> res;
    while(!q.empty()){
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                if (s[i][j] == q.front()){
                    if (notin(res, s[i][1-j])){
                        if (notin(q, s[i][1-j])){
                            q.push_back(s[i][1-j]);
                        }
                    }
                }
            }
        }
        res.push_back(q.front());
        q.pop_front();

    }
    for(int i=0;i<res.size(); i++){
        cout<<res[i]<<endl;
    }
}