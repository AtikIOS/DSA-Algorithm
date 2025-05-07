#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
   int flag = 0;
  
    for (int i = 0; i < n - 1; i++) {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
      
        if (flag == 0){
            break;
        }
    }
}

int main() {
    vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    bubbleSort(arr);
    cout << "Sorted array: \n";
    for(auto i : arr){
        cout<< i << " ";
    }
    cout<<endl;
    return 0;
}


/*
Time Complexity :-
Best case: O(n)
Average case: O(n^2)
Worst case: O(n^2)
*/