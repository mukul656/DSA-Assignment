#include<bits/stdc++.h>
using namespace std;
void merge(int low , int mid , int high , vector<int>& nums){
    vector<int> temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }

        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        } 
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }    
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];

        }
}
void mergeSort(int low , int high , vector<int>& arr){
    if(low >= high) return;
    int mid = (low + high)/2;
    mergeSort(low , mid , arr);
    mergeSort(mid + 1, high , arr);
    merge(low , mid , high , arr);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    mergeSort(0 , n - 1, arr);
    for(auto it : arr) cout<<it<<" ";
    return 0;
}
