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
----------------------------------------------	
	
	
	
	
