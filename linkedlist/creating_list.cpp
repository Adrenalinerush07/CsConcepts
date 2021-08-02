#include<bits/stdc++.h>
using namespace std;

//pointer jispe point kr rha ha ha, vahan ka data lene ke liye use "->""
class Node {
  int data;
  Node* next = NULL;

  public: Node(int d){
    data = d;
  } 

  void append(int d){
    Node* end = new Node(d);
    Node* it = this;
    while(it->next != NULL) {
      it = it->next;
    }
    it->next = end;
  }

  void print() {
    Node* it = this;
    while(it != NULL){
      cout<<it->data<<" ";
      it = it->next;
    }
    cout<<endl;
  }
};

void solve(){
  Node root(4);
  root.append(10);
  root.print();
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