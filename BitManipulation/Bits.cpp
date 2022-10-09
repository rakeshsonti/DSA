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
	//---------------------------------------------------------
	int main(){
	//tc-> O(n) sc-> O(1) 
	//approach-> 0^2^7^2^5^6^5^7^7^6= repetive number will be cancled and last number will be left that's our ans
	//All element occurs twise except a number which occurs once only. find out the number the number which occurs once
	int arr[]={2,7,2,5,6,5,7,7,6};
	int val=0;
	for(int num:arr){
		val=val^num;
	}
	cout<<val<<endl;
	
	}
	//---------------------------------------------------------
	swaping of two numbers using XOR
	a=5, b=7 => a=7, b=5
	int main(){
	//tc-> O(1) SC->O(1)
	int a=7,b=5;
	cout<<"a: "<<a<<", b: "<<b<<endl;
	a=a^b;
	b=a^b; // b=(a^b)^b=a
	a=a^b; // a=a^(a^b)=b
	cout<<"a: "<<a<<", b: "<<b<<endl;
	}	
	//---------------------------------------------------------
	print XOR of all the numbers
	[1,2,3,4,5]
	e.g. 1^2^3^4^5 
	int main(){
	// tc-> O(1) sc-> O(1)
	// monitor the pattern
	//cout<<(1^2^3^4^5^6^7^8^9)<<endl;
	/*
	0-1 -> 1
	1-2 -> 3 (n+1)
	1-3 -> 0
	1-4 -> 4
	1-5 -> 1
	1-6 -> 7
	1-7 -> 0
	1-8 -> 8
	1-9 -> 1
	*/
	int n=9;
	if(n%4==1)cout<<1<<endl;
	if(n%4==2)cout<<(n+1)<<endl;
	if(n%4==3)cout<<0<<endl;
	if(n%4==0)cout<<n<<endl;
	
	}
//---------------------------------------------------------

	
	
	
	
	
	
}
