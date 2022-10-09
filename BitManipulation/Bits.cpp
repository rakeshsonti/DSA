#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<set>
 using namespace std;
int main(){
    /*
    & (bitwise AND) (all 1 -> 1 else 0 )
    | (bitwise OR) (one 1 -> 1)
    ^ (bitwise XOR) even 1-> 0 odd 1-> 1
    << (left shift) 101-> 10100
    >> (right shift) 101->1
    ~ (bitwise NOT) 
    */
	cout<<"AND: "<<(5&6)<<endl;
	cout<<"OR: "<<(5|6)<<endl;
	cout<<"Bitwise XOR: "<<(5^6)<<endl;
	cout<<"Left Shift: "<<(5<<2)<<endl;
	cout<<"Right Shift: "<<(5>>2)<<endl;
	cout<<"Bitwise NOT: "<<(~5)<<endl;	
}
