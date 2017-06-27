#include <iostream>
#include <vector>
using namespace std;

template<class T>
class stack {
private:
	int tp;
	vector<T> v;
public:
	stack() {
		tp=0; // starting index to push elements
	}
	void push(T elem) {
		if(tp==v.size()) // stack is full
			v.push_back(elem); // vector automatically resizes to give space to push elem
		else
			v[tp]=elem;
		tp++;
	}
	void pop() {
		if(tp==0) // stack is empty
			cout<<"No elements to pop !!!"<<endl;
		else
			tp--;
	}
	T& top() {
		if(tp==0)  // stack is empty
			cout<<"Stack is empty !!!"<<endl;
		return v[tp-1];
	}
	bool empty() {
		if(tp==0)
			return true;
		else
			return false;
	}
};