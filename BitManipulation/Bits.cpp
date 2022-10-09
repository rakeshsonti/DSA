#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_set>
#include<set>
 using namespace std;
int main(){
    /*
    XOR-> even 1=0 odd 1=1
    & (bitwise AND)
    | (bitwise OR) 
    ^ (bitwise XOR)
    << (left shift)
    >> (right shift)
    ~ (bitwise NOT)
    */
	cout<<"AND: "<<(5&6)<<endl;
	cout<<"OR: "<<(5|6)<<endl;
	cout<<"Bitwise XOR: "<<(5^6)<<endl;
	cout<<"Left Shift: "<<(5<<2)<<endl;
	cout<<"Right Shift: "<<(5>>2)<<endl;
	cout<<"Bitwise NOT: "<<(~5)<<endl;	
}
