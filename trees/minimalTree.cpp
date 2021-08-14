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

void preOrder(TreeNode* root) {
    if(root == NULL) {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

TreeNode* minimalTree(vector<int>& a, int l, int r) {
    if(l > r) {
        return NULL;
    }
    int mid = (l+r)/2;
    TreeNode* root = new TreeNode(a[mid]);
    root->left = minimalTree(a, l, mid-1);
    root->right = minimalTree(a, mid+1, r);
    return root;
}


void solve(){
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    TreeNode* root = minimalTree(a, 0, a.size()-1);
    preOrder(root);
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