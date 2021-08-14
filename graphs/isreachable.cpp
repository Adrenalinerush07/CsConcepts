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

class Graph {
    int v;
    vector<int>* adj;
    public: 
        Graph(int v);
        void addEdge(int a, int b);
        bool isReachable(int a, int b);
};

Graph::Graph(int v) {
    this->v = v;
    adj = new vector<int>[v];
}

void Graph::addEdge(int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

bool Graph::isReachable(int a, int b){
    if(a == b){
        return true;
    }
    queue<int> q;
    q.push(a);
    vector<bool> visited(v);
    fill(visited.begin(), visited.end(), false);

    while(!q.empty()) {
        visited[q.front()] = true;
        int cur = q.front();
        if(cur == b) {
            return true;
        }
        q.pop();

        for(auto i:adj[cur]) {
            if(!visited[i]) {
                q.push(i);
            }
        }
    }

    return false;
}   

void solve(){
    Graph g(5);
    g.addEdge(1,3);
    g.addEdge(3,4);

    cout<<g.isReachable(1,4)<<endl;;
    cout<<g.isReachable(1,5);
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