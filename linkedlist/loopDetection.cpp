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

Node* findLoop(Node* head) {
  Node* fast = head;
  Node* slow = head;

  while(fast->next != NULL  and fast->next->next != NULL) {
    fast = fast->next->next;
    slow = slow->next;
    if(slow == fast) {
      break;
    }
  }

  if(fast == NULL || fast->next == NULL) {
    return NULL;
  }

  slow = head;
  while(slow != fast) {
    slow = slow->next;
    fast = fast->next;
  }

  return fast;
}

void solve(){

  Node* head = NULL;
  // append(&head, 4);
  // append(&head, 9);
  // append(&head, 1);
  // append(&head, 15);
  // append(&head, 7);


  append(&head, 4);
  append(&head, 9);
  append(&head, 1);
  append(&head, 8);

  
  
/*  cout<<"LinkedList 1: ";
  print(head);
*/
  Node* loopStart = findLoop(head);
  if(loopStart == NULL) {
    cout<<"No loop found!"<<endl;
  }
  else {
    cout<<"Loop found at: "<<loopStart->data<<endl;
  }

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