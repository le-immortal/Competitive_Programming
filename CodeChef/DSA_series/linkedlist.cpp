#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int x){
		data = x;
		next = NULL;
	}
	node* insert(int, node*);
	int detect(node*);
	void remove(node*, node*);
	void prin(node* head){
		node* temp = head;
		while(temp != NULL){
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout<<endl;
	}
};

node* node::insert(int data, node* head){
	if(head == NULL){
		head = new node(data);
		return head;
	}
	else
	{
		node* n = new node(data);
		node* temp = head;
		while(temp->next!=NULL){
			temp = temp->next;
		}
		temp->next = n;
		return head;
	}
}

int node::detect(node* head){
	if(head == NULL || head->next == NULL){
		return 0;
	}
	else{
		node* slow = head;
		node* fast = head;

		while(slow && fast && fast->next != NULL){
			slow = slow->next;
			fast = fast->next->next;

			if(slow == fast){
				remove(head, slow);
				return 1;
			}
		}
		return 0;
	}
}

void node::remove(node* head, node* loop){
	node* p1 = head;
	node* 	p2;
	while(1){
		p2 = loop;
		while(p2->next != loop && p2->next!= p1){
			p2 = p2->next;
		}	
		if(p2->next == p1)
			break;
		p1 = p1->next;
	}
	p2->next = NULL;
}


int main(){
	node* head = new node(2);
	head->next = new node(20);
	head->next->next = new node(3);
	head->next->next->next = head->next;
	//head->prin(head);
	cout << head->detect(head);
}