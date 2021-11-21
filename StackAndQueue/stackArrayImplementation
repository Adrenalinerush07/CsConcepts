#include<bits/stdc++.h>
using namespace std;
#define int long long

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
// void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif 

const int N=2e5+4;
const int mod=1e9+7;

/*



*/

class Stack {
    int top;

public:
    Stack() {
        top = -1;
        memset(data, 0, sizeof data);
    }

    int data[3];
    bool isEmpty();
    bool push(int x);
    int pop();
    int peak();
};  

bool Stack::isEmpty() {
    if(top<0) {
        return true;
    }
    else {
        return false;
    }
}

bool Stack::push(int x) {
    if(top == 2) {
        cout<<"Stack is full!"<<endl;
        return false;
    }
    else {
        data[++top] = x;
        return true;
    }
}

int Stack::pop() {
    if(top < 0) {
        cout<<"Stack is empty!"<<endl;
        return -1;
    }
    else {
        return data[top--];
    }
}

int Stack::peak() {
    if(top < 0) {
        cout<<"Stack is empty!"<<endl;
        return -1;
    }
    else {
        return data[top];
    }
}

void solve(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    st.pop();
    st.pop();
    st.pop();
    
}

int32_t main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    int tt; 
    tt=1;
    // cin>>tt;
    for(int t=1;t<=tt;t++){
        solve();
    }
} 