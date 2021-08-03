#include<bits/stdc++.h>
using namespace std;

class Node {
  public: 
    int data;
    Node* next = NULL;

    Node(int d){
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

Node* deleteNode(Node* head, int d) {
  Node* cur = head;

  if(cur->data == d){
    return cur->next;
  }

  while(cur->next != NULL) { 
    if(cur->next->data == d){
      cur->next = cur->next->next;
      return head;
    }
    cur = cur->next;
  }

  return head;
}

void solve(){
  Node root(4);
  root.append(10);
  root.append(12);
  root.append(13);
  root.append(14);

  cout<<"Before deleting the node: ";
  root.print();

  int x;
  cout<<"Enter the number you want to delete: ";
  cin>>x;
  root = *deleteNode(&root, x);

  cout<<endl;
  cout<<"After deleting the node: ";
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