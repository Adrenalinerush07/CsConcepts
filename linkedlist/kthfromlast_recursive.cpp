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

int kthFromLast(Node* head, int k) {
  if(head == NULL) {
    return 0;
  }
  int index = kthFromLast(head->next, k) + 1;
  if(index == k) {
    cout<<head->data<<endl;
  }
  return index;
}

void solve(){

  Node* head = NULL;
  append(&head, 4);
  append(&head, 10);
  append(&head, 13);
  append(&head, 20);
  append(&head, 30);
  append(&head, 40);
  append(&head, 50);
  append(&head, 60);
  print(head);

  int k;
  // cout<<"Size of the list: "<<sizeOfList(head)<<endl;
  cout<<"Enter the value of k: "; 
  cin>>k;
  cout<<endl;
  cout<<"Kth element from last is: "<<kthFromLast(head, k);
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