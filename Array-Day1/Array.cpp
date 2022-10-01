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




