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
1	int main(){
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
2	swaping of two numbers using XOR
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
3	print XOR of all the numbers
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
4     	int main(){
	// extract the ith bit of a number  OR  check the i th bit is set
	/*
	
	check 3rd bit
	1 1 0 0 1
	0 1 0 0 0 (mask)
	--------------
	0 1 0 0 0
	Note: if 3rd bit is not zero means bit is set else not set
	create a mask: put 1 at ith position
	1<<3 (i th)
	*/
	int num=5;//101
	int ith=1;
	int mask=(1<<ith);
	cout<<"mask: "<<mask<<endl;
	int result=(num&mask);
	cout<<"result: "<<result<<endl;
	}
//---------------------------------------------------------	
5.	int main(){
	// check a number if even(odd) or not
	/*Note: Last bit is set in case of odd number and last bit is not set in case of even number
	 4-100, 5-101
		101
		001
		-----
		001 (always get non zero number in case of odd number)
	*/
	int num=8;
	if((num &1)==0){
		cout<<"even"<<endl;
	}else{
		cout<<"odd"<<endl;
	}
	
	}	
//---------------------------------------------------------------------------------
6.	/*given a range (L-R) print the XOR
	XOR(L^L+1^L+2--------------R-1^1^2
	e.g. 2-4 2^3^4
	*/
	int l=2,r=3;
	XOR(R)^XOR(L-1)
	Note: tc-> O(1) we can use 3 question to get XOR of any number in O(1)
	Reason: other number will be cancled out only particular range will be left
//---------------------------------------------------------------------------------	
7.  clear the i th bit
	int main(){
	/*
	ith=0
	101 num=5
      & 110 mask (~(1<<ith))
	----
	100 result
	
	*/
	int num=5;
	int ith=0;
	int mask=(1<<ith);
		mask=(~mask);
	int result=(num&mask);
	cout<<"result: "<<result<<endl;
	}	
//---------------------------------------------------------------------------------	
8. remove the last set bit
	e.g. 110110
	     110100 (last set bit removed)
	13-> 1101
	12-> 1100
	----------
	     1100
	Solution: n&(n-1)
		
	int main(){
	int num=9;
	int result=(num&(num-1));
	cout<<result<<endl;
	}
//---------------------------------------------------------------------------------	
9.	check a number is a powwer of 2
	int main(){
	int num=20;
	int result=(num&(num-1));
	if(result==0){
		cout<<"number is a power of 2"<<endl;
	}else{
		cout<<"number is not a power of 2"<<endl;
	}
	}
	
//---------------------------------------------------------------------------------	
10. count the no of set bit
	int main(){
	// 14-> 1110
	// tc->O(no of bit in a number) or(position of most significant bit)
	int count=0;
	int n=5;
	while(n!=0){
		if((n&1)==1)count++;
		n=(n>>1);
	}
	cout<<count<<endl;
	//second approach
	// tc-> O(no of set bits)
	n=5;
	count=0;
	while(n!=0){
		count++;
		n=(n&(n-1));
	}
	cout<<count<<endl;
	}
//---------------------------------------------------------------------------------	

	
	
