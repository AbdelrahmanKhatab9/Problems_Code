#include <bits/stdc++.h>
using namespace std;
const int N = 100 + 5;

int n, arr[N], x;
bool found;

int main(){
   cin >> n >> x;

   for(int i = 0; i < n; i++)
       cin >> arr[i];

   sort(arr, arr + n);

   int start = 0, end = n - 1, mid;

   while(start <= end){
       mid = (start + end) / 2;

       if(arr[mid] == x){
           found = 1;
           break;
       }
       else if(arr[mid] > x){
           end = mid - 1;
       }
       else if(arr[mid] < x){
           start = mid + 1;
       }
   }

   if(found)
       cout << x << " is found.";
   else
       cout << x << " is not found.";
}