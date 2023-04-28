class Solution {
    public void duplicateZeros(int[] arr) {
      int n=arr.length;
        for(int i=0;i<n;i++){
          //find a zero
          if(arr[i]==0){
            int j=n-1;
            //shift all right elements to one position
            while(j>i){
              arr[j]=arr[j-1];
              j--;
            }
            //insert element at current position
            arr[i]=0;
            i++;
          }
        }
    }
}