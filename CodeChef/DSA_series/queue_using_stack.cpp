#include<bits/stdc++.h>
using namespace std;

class Que{
	stack<int>s1,s2;
public:
	void enqueue(int x){
		
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x);
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
	}
	void dequeue(){
		cout << s1.top() << endl;
		s1.pop();
	}
	
};

int main(){
	Que q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.dequeue();
	q.enqueue(40);
	q.dequeue();


}