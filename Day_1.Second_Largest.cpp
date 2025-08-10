class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max=INT_MIN;
        int sec_max=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                sec_max=max;
                max=arr[i];
            }
            if(arr[i]>sec_max && arr[i]<max){
                sec_max=arr[i];
            }
        }
        if(sec_max==INT_MIN)
            return -1;
        else
        return sec_max;
    }
};