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

int length(Node* head) {
  Node* cur = head;
  int count = 0;
  while(cur != NULL) {
    cur = cur->next;
    count++;
  }
  return count;
}

Node* sumList(Node* head1, Node* head2, int carry) {

  if(head2 == NULL and head1 == NULL and carry == 0) {
    return NULL;
  }
  int value = carry;
  if(head1 != NULL) {
    value += head1->data;
  }
  if(head2 != NULL) {
    value += head2->data;
  }

  Node* result = new Node(value%10);

  if(head2 != NULL || head1 != NULL) {
    result->next = sumList(head1->next == NULL? NULL: head1->next, head2->next == NULL? NULL: head2->next, value/10);
  }
  return result;
}

void appendBeforeZeros(Node* head, int d) {
  Node* cur = head;
  while(cur->next != NULL) {
    cur = cur->next;
  }

  while(d--) {
    cur->next = new Node(0);
    cur = cur->next;
  }
}

void makeLengthEqual(Node* head1, Node* head2) {
  int len1 = length(head1);
  int len2 = length(head2);
  
  Node* target;
  int diff = abs(len2 - len1);
  if(len1 != len2) {
    if(len1 > len2) {
      target = head2;
    }
    else {
      target = head1;
    }    
  }

  if(diff) appendBeforeZeros(target, diff);

}



void solve(){

  Node* head = NULL;
  append(&head, 4);
  append(&head, 9);
  append(&head, 1);
  append(&head, 7);
  append(&head, 3);

  Node* head2 = NULL;
  append(&head2, 1);
  append(&head2, 3);
  append(&head2, 8);

  makeLengthEqual(head, head2);

  cout<<"LinkedList 1: ";
  print(head);

  cout<<"LinkedList 2: ";
  print(head2);
  
  Node* sum = sumList(head, head2, 0);
  cout<<"LinkedList after sum: ";
  print(sum);
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