using namespace std;
namespace ram{
	int val=45;
	int getVal(){
		return 23;
	}
}
int main(){
	int val=34;
	cout<<ram::val<<endl;	
	cout<<ram::getVal()<<endl;	
}
-------------------------------------------------------------------------------------------
 # structure
   struct Node{
	  string name;
	  int age;
	  Node(){};
	  Node(string nm,int ag){
		  name=nm;
		  age=ag;
	  };
  };
int main(){
	struct Node st;
	//wrong way
	st.name="ram";
	st.age=34;
	cout<<st.name<<","<<st.age<<endl;
	//correct way
	Node* nm=new Node("raja",23);
	cout<<nm->name<<","<<nm->age<<endl;
	
	//second way
	Node node=Node("raja",23);
	cout<<node.name<<endl;
}
------------------------------------------------------------------------------------------------
//Array-> 
	int arr2[10];//{?,?,?}
	array<int,10> arr;//->{?,?,?}
	array<int,10> arr3={}//-> {0,0,0}
	array<int,5> arr1={1,2,3};//{1,2,3,0,0}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
//if want all zero
	array<int,10>arr4={0};//{0,0,0,0,0} // work in int arr[10]={0}
-------------------------------------------------------------------------------------------------
//iterator
	//begin(),end(),rbegin(),rend()
	array<int,5> arr5={1,2,3,4,5};
	for(auto itr=arr5.begin();itr!=arr5.end();itr++){
		cout<<*itr<<" ";
	}
	cout<<endl;
	for(auto itr=arr5.rbegin();itr!=arr5.rend();itr++){
		cout<<*itr<<" ";
	}
	cout<<endl;
	cout<<arr.size()<<endl;
	cout<<arr.front()<<endl;
	cout<<arr.back()<<endl;
	


// for each loop
	string s="ram";
	for(auto ch:s){
		cout<<ch<<" ";
	}
	cout<<endl;
--------------------------------------------------------------------------------------------	
// Vector
	int arr[10];
// 10^7 global array size-> int ,double,char
//10^8 global boolean
// max size of array 1000000 (10^6) -> int  ,double, char
//10^7 -> boolean
	vector<int> vc;
	vc.push_back(23);
	cout<<vc.size()<<endl;
	vc.pop_back();
//segmentation fault if you push 10^7
	vc.clear(); // clear all the element at once
	vector<int>vc2(7,1);//{1,1,1,1,1,1,1}
//copy
	vector<int> vc3(vc2.begin(),vc2.end());
	vector<int> vc4(vc2);
	vector<int> vc5={1,2,3,4,5};
	vector<int>vc6(vc5.begin(),vc5.begin()+2);
	print(vc6);//{1 2}
	vc6.emplace_back(34);// slightly fast than push_back
	print(vc6);
	/*
	lower bound, upper bound
	swap(v1,v2)
	begin(),end(),rbegin(), rend()
	*/
// 2d vector
	vector<vector<int>> vc7;
	//print first way
	for(auto itr1:vc7){
		for(auto itr2: itr1){
			cout<<itr2<<" ";
		}
		cout<<endl;
	}
	//second way
	for(int i=0;i<vc7.size();i++){
		for(int j=0;j<vc7[i].size();j++){
			cout<<vc7[i][j]<<" ";
		}
		cout<<endl;
	}
	//10*20 dynamic across row and column
	vector<vector<int>> vec(10,vector<int>(20,1));
	// 2d vector number of row's fized but column can be changed . Reason: this is a array of vector
	vector<int> vc8[10];
	
	// 3d vector 10x20x30
	vector<vector<vector<int>>> vc9(10,vector<vector<int>> (10,vector<int>(20,1)));

	}	
	
-----------------------------------------------------------------------------------------------------
	                |     set             | unordered_set
---------------------------------------------------------
Ordering        | increasing  order   | no ordering
                | (by default)        |

Implementation  | Self balancing BST  | Hash Table
                | like Red-Black Tree |  

search time     | log(n)              | O(1) -> Average 
                |                     | O(n) -> Worst Case

Insertion time  | log(n) + Rebalance  | Same as search
                      
Deletion time   | log(n) + Rebalance  | Same as search
	
	// set
	/*
	first element is smallest second is second smallest
	can't do st[i] / can not access directly
	store in ascending order
	st.insert(1) tc-> log(n) n is size of set
	st.erase(st.begin()) tc-> log(n)
	vector method work here // not sure need to practice
	*/
	int n=8;
	int arr[]={1,2,3,4,5,2,3,4};
	// unique element
	set<int> st;
	for(auto i:arr)st.insert(i);
	for(auto i:st)cout<<i<<" ";//1 2 3 4 5
	cout<<endl;
	st.erase(st.begin());

	//st.erase(st.begin(),st.begin()+1); not possible // using c++ 11
	st.erase(5);// delete perticular time

	for(auto itr=st.begin();itr!=st.end();itr++)
		cout<<*itr<<" ";//{1 2 3 4 5}
		cout<<endl;
	set<int> st1(st.begin(),st.end());

	for(auto i:st1)cout<<i<<" ";
	cout<<endl;
	auto it1=st1.find(4); //tc-> log(n)

	// if not exists then it will point st.end()

	st.emplace(34);//similar to insert but slightly fast
	cout<<st.size()<<endl;

	//cout<<st[3]<<endl; not possible
	st.erase(st.begin(),st.end());
	
	//unordered set // can be used & preffered in CP
	unordered_set<int> st3;
	st3.insert(1);
	st3.insert(3);
	st3.insert(4);
	st3.insert(3);

	/*
	average time complexity is o(1) but worst case o(n)
	
	 if order not required then use if getting TLE then use set may be that is your worst case
	 
	 all operation in o(1)
	 
	 All operations on the unordered_set takes constant time O(1) on an average which can go up to linear time O(n) in worst case which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation. 
	
	*/
	// multiset // store all the element in sorted order (stores duplicates)
	multiset<int> ms;
	ms.insert(1);
	ms.insert(2);
	ms.insert(2);
	ms.insert(1);
	ms.insert(3);
	ms.insert(4);// ms.emplace(4)
	ms.erase(1);// erase all the instances of 1
	auto itr=ms.find(2);//used an iterator pointing to the 2
	//ms.clear();
	for(auto it=ms.cbegin();it!=ms.cend();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	ms.erase(ms.find(4));
	}
------------------------------------------------------------------------------------------------
	Difference : 

                  | map             | unordered_map
-----------------------------------------------------------
Ordering        | increasing  order   | no ordering
                | (by default)        |

Implementation  | Self balancing BST  | Hash Table
                | like Red-Black Tree |  

search time     | log(n)              | O(1) -> Average 
                |                     | O(n) -> Worst Case

Insertion time  | log(n) + Rebalance  | Same as search
                      
Deletion time   | log(n) + Rebalance  | Same as search
	
	/*
	Map store value in key value pair
	key maintain a linearly incresing order
	sorted according to the keys
	only store unique keys
	emplace and insert does not update the value if key already exists intead use [] operator
	log(n) for all the operation
	
	iterator means -> use
	*/
	
	map<string,int> mp;
	mp["ram"]=12;
	mp["raja"]=34;
	mp["ram"]=65;
	mp["rajesh"]=78;
	cout<<mp["ram"]<<endl;
	mp.insert({"ram1",989});
	mp.insert({"ram1",1000});
	mp["ram"]=9;
	cout<<mp["ram1"]<<endl;
	mp.erase(mp.begin());
	mp.erase("ram1");
	bool isEmpty=mp.empty();
	
	for(auto itr: mp){
		cout<<itr.first<<" -> "<<itr.second<<endl;
	}
	auto itr=mp.find("ram1");//find the first occurance of the element
	
	for(auto itr1=mp.begin();itr1!=mp.end();itr1++){
		cout<<itr1->first<<"->"<<itr1->second<<endl;
	}

	unordered_map<int,int> mp1;
	//o(1) in almost all cases
	//o(n) in the worst case, where n is the container size
	//does not store any order	
--------------------------------------------------------------------------------------	
	int main(){
	//can use multiple data structure
	multimap<int,int> mp;
	mp.insert({1,29});
	mp.insert({1,23});
	for(auto itr3:mp){
		cout<<itr3.second<<endl;
	}
------------------------------------------------------------------------------------	
	/*
	Pair 
	pair can't be used with unordered_map intead use map
	*/
	pair<int,int> pr={1,2};
	pair<pair<int,int>,int> pr1={{1,2},3};
	pair<pair<int,int>,pair<int,int>>pr2={{1,2},{3,4}};
	cout<<pr2.first.first<<endl;
-----------------------------------------------------------------------------------------
	//Stack 
	/*
	Last In First Out
	 push emplace pop top size empty
	
	*/
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.pop();
	//clear does not exists
	cout<<st.top()<<endl;// if empty then throw error
	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}
	cout<<"stack"<<endl;
	/*
	can not iterate using begin() begin does not exists
	for(auto itr4=st.begin();itr4!=st.end();itr4++){
		cout<<itr4.top()<<endl;
	}
	
	for(auto itr5: st){
		cout<<itr5.top()<<endl;
	}
	*/
	
-------------------------------------------------------------------------------------	
	/*
	Queue 
	push,front,pop,size,empty
	First in first out
	all operation in O(1)
	deletion in in O(n)
	*/
	cout<<"Queue"<<endl;
	queue<int> q;
	q.push(11);
	q.push(12);
	q.push(13);
	q.push(14);
	// can not iterate through the q.begin()
	cout<<q.front()<<endl;
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
------------------------------------------------------------------------------------------
	/*
	Priority queue
	store all in sorted order and log(n)
	push,size,top empty
	
	(heap short, heapify
	if we store into the pair then it will check if first element if equals then compare the second element
	
	default max priority queue
	
	for min queue have to store element as negative and get back by multiplying -1
	
	duplicate allowed
	*/
	//max heap
	cout<<"priority queue"<<endl;
	priority_queue<int> pq;
	pq.push(1);
	pq.push(2);
	pq.push(3);
	cout<<pq.top()<<endl;
	pq.pop();
	//pq.begin(); thrown an error
	//min heap
	priority_queue<int,vector<int>,greater<int>> pq2;
	pq2.push(1);
	pq2.push(2);
	pq2.push(3);
	cout<<pq2.top()<<endl;
	//Deque double ended queue
	/*
	push_front,push_back,pop_front,pop_back
	begin,cbegin,cend,rbegin,rend
	method similar to vector
	
	*/
	deque<int> dq;
	cout<<"deque"<<endl;
----------------------------------------------------------------------------------	
	/*
	List(doubly linked list)
	push_front,push_back,pop_front,pop_back
	begin,cbegin,cend,rbegin,rend
	method similar to vector
	remove O(1)
	
	*/
	list<int> ls;
	ls.push_back(12);
	}
---------------------------------------------------------------------------------
	
	
	
	
	
	
	
	
