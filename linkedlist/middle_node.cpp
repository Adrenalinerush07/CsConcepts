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

int middle(Node* head) {
  auto slow = head;
  auto fast = head;
  while(fast->next != NULL) {
    if(fast->next->next != NULL) {
      fast = fast->next->next;
      slow = slow->next;      
    }
    else {
      break;
    }
  }
  return slow->data;
}


void solve(){

  Node* head = NULL;
  append(&head, 4);
  append(&head, 10);
  append(&head, 13);
  append(&head, 20);
  append(&head, 30);
  print(head);


  cout<<"Middle node data: "<<middle(head);

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