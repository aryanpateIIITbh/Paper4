//Two numbers with sum closest to zero
#include<bits/stdc++.h>
using namespace std;
int closestToZero(int arr[], int n)
{
            int arr1[n],k=0;
            sort(arr,arr+n);
            int start=0,end=n-1;
            int sum,min_sum=INT_MAX;
            while(end>start){
                if((arr[start]+arr[end])<0){
                    arr1[k++]=arr[start]+arr[end];
                    sum=arr[start]+arr[end];
                    start++;
                }
                else{
                    arr1[k++]=arr[start]+arr[end];
                    sum=arr[start]+arr[end];
                    end--;
                }
                if(abs(sum) < abs(min_sum))
                {
                    min_sum = sum;
                }
            }
             sort(arr1,arr1+k);
            if(arr1[k-1]<0){
                return arr1[k-1];
            }
            else if(arr1[0]>=0){
                return arr1[0];
            }
            else{
            int num,prev_num;
            for(int i=k-1;i>=0;i--){
                if(arr1[i]==0){
                    return 0;
                }
                else if(arr1[i]<0){
                    num=arr1[i];
                    prev_num=arr1[i+1];
                    break;
                }
            }
            prev_num=prev_num*-1;
            int maxi=max(num,prev_num);
            if(maxi==prev_num){
                return abs(prev_num);
            }
            else{
                return maxi;
            }
            }
}    
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        cout << closestToZero(arr, n) << endl;
    }
} 