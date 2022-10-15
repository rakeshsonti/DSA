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
---------------------------------------------------------
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
-----------------------------------------
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
------------------------------------------------------
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
----------------------------------------------	
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
	
--------------------------------------------------------------------------------------
	
	
	
	
	
	
	
	
