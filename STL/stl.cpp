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
  Struct data structure
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
