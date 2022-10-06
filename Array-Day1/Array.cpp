 void print2DArray(int* arr,int n){
	 //int arr[][2]={{1,2},{3,4}};
	 //print2DArray((int *)arr,2);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<*((arr+i*n)+j)<<" ";
		}
		cout<<endl;
	}
}

//------------------------------------------------------------------------------
//int arr[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
//	twoDArray(arr,5);
 void twoDArray(int arr[][5],int n){
	 for(int i=0;i<n;i++){
		 for(int j=0;j<n;j++){
		 cout<<arr[i][j]<<" ";
		 }
	 cout<<endl;
	 }
 }
//-------------------------------------------------------------------------
void OneDArray(int arr[],int n){
  //OneDArray(arr1,3);
  //int arr1[3]={1,2,3};
	 for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	 cout<<endl;
 }
//-----------------------------------------------------------------------

	vector<vector<int>> vc;
	vc.push_back({1,2,3});
	vc.push_back({5,4,5});
	vc.push_back({6,7,9});
	for(auto i:vc){
		for(auto j:i)cout<<j<<" ";
		cout<<endl;
	}
	
	unordered_map<int,int> mp;
	mp.insert({1,2});
	mp.insert({2,3});
	mp.insert({3,4});
	mp.insert({4,5});
	mp.insert({6,2});
	mp.clear();
	for(pair<int,int> i:mp){
		cout<<i.first<<"-"<<i.second<<" \n";
	}
	for(auto i=mp.begin();i!=mp.end();i++){
		cout<<i->first<<"-"<<i->second<<" \n";
	}
	-------------------------------------------------------------------------


