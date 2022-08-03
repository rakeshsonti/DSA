class Solution{
    String rremove(String s) {
        if(s==null || s=="")return s;
       StringBuilder ans=new StringBuilder("");
       s="$"+s+"$";
       for(int i=1;i<s.length()-1;i++){
           if(s.charAt(i)==s.charAt(i+1) || s.charAt(i)==s.charAt(i-1)){
               continue;
           }
           ans.append(s.charAt(i));
       }
       if(ans.length()==s.length()-2)return ans.toString();
       return rremove(ans.toString());
    }
}

// class Solution{
//     String rremove(String s) {
//         boolean flag=true;
//         while(flag){
//             flag=false;
//         for(int i=0;i<s.length()-1;i++){
//             if(s.charAt(i)==s.charAt(i+1)){
//                 int j=i+2;
//                 while(j<s.length() && s.charAt(i)==s.charAt(j))j++;
//                 s=s.substring(0,i)+s.substring(j);
//                 flag=true;
//                 i=i-1;
//             }
//         }
//         }
//         return s;
//     }
// }


