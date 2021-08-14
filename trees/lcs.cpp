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

class TreeNode {
public:
    int data;
    TreeNode* left = NULL;
    TreeNode* right = NULL;
    TreeNode(int v);
};

TreeNode::TreeNode(int d) {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
}

bool path(TreeNode* root, int t, vector<int>& p) {
    if(root == NULL) {
        return 0;
    }
    p.push_back(root->data);
   
    if(root->data == t) {
        return 1;
    }

    if(path(root->left, t, p) || path(root->right, t, p)) {
        return 1;
    }

    p.pop_back();
    return 0;
}

int lcs(vector<int> a, vector<int> b) {
    int i;
    for(i=0;i<min(a.size(),b.size());i++) {
        if(a[i] != b[i]) {
            break;
        }        
    }
    return a[i-1];
}

void solve(){
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(2);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(5);
    root->left->left->left = new TreeNode(8);

    vector<int> a1, b1;
    path(root, 1, a1);
    path(root, 5, b1);

    debug(a1, b1);

    cout<<lcs(a1, b1);
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