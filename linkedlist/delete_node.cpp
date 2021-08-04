#include<bits/stdc++.h>
using namespace std;

class Node {
public: 
  int data;
  Node* next = NULL;

  Node(int d){
    data = d;
  }
};

void append(Node** head_ref, int d) {
  Node* new_node = new Node(d);
  new_node->next = *head_ref;
  *head_ref = new_node;
}

void print(Node* head) {
  Node* cur = head;
  while(cur != NULL) {
    cout<<cur->data<<" ";
    cur = cur->next;
  }
  cout<<endl;
}

void deleteNode(Node** head_ref, int d) {
  Node* cur = *head_ref;

  if(cur->data == d){
    *head_ref = cur->next;
    delete cur;
    return;
  }

  while(cur->next != NULL) { 
    if(cur->next->data == d){
      auto temp = cur->next;
      cur->next = cur->next->next;
      delete temp;
      return;
    }
    cur = cur->next;
  }

}

void solve(){

  Node* head = NULL;
  append(&head, 4);
  append(&head, 10);
  append(&head, 13);
  append(&head, 20);
  print(head);

  int x;
  cout<<"Enter the number you want to delete: ";
  cin>>x;
  deleteNode(&head, x);

  cout<<"After deleting the node: ";
  print(head);

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