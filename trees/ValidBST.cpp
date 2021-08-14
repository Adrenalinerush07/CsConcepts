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

bool ValidBST(TreeNode* root, int mini, int maxi) {
    if(root == NULL) {
        return true;
    }

    if(root->data > mini and root->data < maxi and 
        ValidBST(root->left, mini, root->data) and 
        ValidBST(root->right, root->data, maxi)) {
        return true;
    }
    return false;
}

void solve(){
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(2);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(1);
    // root->left->right = new TreeNode(5);
    // root->left->left->left = new TreeNode(8);

    cout<<ValidBST(root, INT_MIN, INT_MAX);
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