#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9;
const long long m=9;
typedef long long ll;
ifstream inputFile;
ofstream outputFile;
class Node{
	public:
		long long value;
		Node* next;
		Node(long long value);
		Node* addNode(long long value);
		
};
class LinkedList{
	public:
		Node *head;
		long long sizeList;
		LinkedList();
		void pushBack(long long value);
		void clear();
		string printList();
		
};
Node::Node(long long value){
	this->value=value;
	this->next=nullptr;
}
Node* createNode(long long value){
 	return new Node(value);
}
LinkedList::LinkedList(){
	this->head=nullptr;
	this->sizeList=0;
}
void LinkedList::pushBack(long long value){
	
	Node* node=  createNode(value);
	if(this->head==nullptr) {
		this->head=node;
	}
	else{
		Node* begin=this->head;
		while(begin->next !=nullptr) begin=begin->next;
		begin->next=node;
	}
	this->sizeList++;
}
string LinkedList::printList() {
    Node* temp = this->head;
    string result="";
    while (temp != nullptr) {
        string tmp=to_string(temp->value);
        if(temp->next!=nullptr){
			while (tmp.length() < m)
           		tmp= "0"+ tmp;
        }
        result=tmp+result;
        temp=temp->next;
    }
    int dem=0;
	while(result[dem]=='0') dem++;
	result=result.substr(dem,result.size()-dem);
    return result;
}
void LinkedList::clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
    sizeList = 0;
}

LinkedList addTwoNumbers(LinkedList &first , LinkedList &second){
	LinkedList result;
	Node* currFirst=first.head;
	Node* currSecond=second.head;
	ll carry=0;
	while(currFirst != nullptr && currSecond != nullptr){
		long long sum=currFirst->value+currSecond->value+carry;
		carry=sum/mod;
		long long digit=sum%mod;
		
		result.pushBack(digit);
		
		currFirst=currFirst->next;
		currSecond = currSecond->next;
	}
    if(currFirst != nullptr) {
    	while (currFirst != nullptr) {
		    long long sum = currFirst->value + carry;
		    long long digit = sum % mod;
		    carry = sum / mod;
		
		    result.pushBack(digit);
		
		    currFirst=currFirst->next;
		}
    }
    else if (currSecond != nullptr) {
	    while (currSecond != nullptr) {
		    long long sum = currSecond->value + carry;
		    long long digit = sum % mod;
		    carry = sum / mod;
		    result.pushBack(digit);
		    currSecond = currSecond->next;
	    }		
	}
	if(carry>0){
		result.pushBack(carry);
	}
	return result;
		
}
LinkedList mulTwoNumbers(LinkedList &first , LinkedList &second){
	LinkedList result;
	Node* currFirst=first.head;
	Node* currSecond=second.head;
	ll indexFirst=0,indexSecond,index,digit,carry;
	while(currFirst!=nullptr){
		Node* copySecond=currSecond;
		carry=0;
		indexSecond=0;
		LinkedList nhole;
		for(int i=0;i<first.sizeList+second.sizeList;i++){
			nhole.pushBack(0);
		}
		while(copySecond!=nullptr){
			index=indexFirst+indexSecond;
            Node * start=nhole.head;
			for(int i=0;i<index;i++ ) start=start->next;
			ll sum=currFirst->value*copySecond->value;
			carry=sum/mod;
			start->value+=(sum % mod);
			if(carry>0) {
				start=start->next;
				start->value+=(carry);
			}
			copySecond=copySecond->next;
			indexSecond++;	
		}
		result=addTwoNumbers(result,nhole);
		nhole.clear();
		indexFirst++;
		currFirst=currFirst->next;
	}
	return result;
}

int main(){
	inputFile.open("bignumber.in");
    outputFile.open("bignumber.out");
	int t;
	inputFile>>t;
    inputFile.ignore();
	while(t--){
		string s;
		getline(inputFile,s);	
		stringstream ss(s);
		string tmp;
		vector<string> vectors;
		while(ss>>tmp){
			vectors.push_back(tmp);
		}
		string firststring =vectors[0];
		string secondstring=vectors[2];
	//	cout<<firststring<<endl;
	//	cout<<secondstring<<endl;
		LinkedList first;
		LinkedList second;
		ll number;
	    //pushBack
		for(int i=firststring.size()-1;i>=0;i-=m){
			if(i<m)
				number=stoll(firststring.substr(0,i+1));
			else 
				number=stoll(firststring.substr(i-m+1,m));	
			first.pushBack(number);
			
		}
		for(int i=secondstring.size()-1;i>=0;i-=m){
			if(i<m)
				number=stoll(secondstring.substr(0,i+1));
			else 
				number=stoll(secondstring.substr(i-m+1,m));	
			second.pushBack(number);	
		}
		//first.printList();
		//second.printList();
		
		if(vectors[1]=="+"){
			LinkedList result=addTwoNumbers(first, second);
			outputFile<<result.printList()<<"\n";
			result.clear();
		}
	    else{
	    	LinkedList result=mulTwoNumbers(first, second);
			outputFile<<result.printList()<<"\n";
			result.clear();
		}
		first.clear();
		second.clear();
	}
	inputFile.close();
    outputFile.close();
}
