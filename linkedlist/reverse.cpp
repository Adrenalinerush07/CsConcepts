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

Node* reverse(Node** head) {
  Node* cur = *head;
  Node* prev = NULL;
  Node* next_n;

  while(cur != NULL) {
    next_n = cur->next;

    cur->next = prev;

    prev = cur;
    cur = next_n; 
  }

  cur = prev;

  return cur;
}

void solve(){

  Node* head = NULL;
  append(&head, 4);
  append(&head, 9);
  append(&head, 1);
  append(&head, 15);
  append(&head, 7);
  
  cout<<"LinkedList 1: ";
  print(head);

  cout<<"LinkedList after reverse: ";
  print(reverse(&head));

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