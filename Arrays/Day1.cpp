1.   /*Largest Element in the Array*/
   

         public class Solution {

    static int largestElement(int[] arr, int n) {
        
        int max = arr[0];
        for(int i=0; i<n; i++)
        {
            if(max<arr[i]){
                   max = arr[i];
            }
        }
        return max;

    }
}


