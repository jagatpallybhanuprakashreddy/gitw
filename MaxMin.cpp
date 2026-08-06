#include <iostream>
using namespace std;
void MinMax(int arr[], int &max, int &min, int low, int high){
   if (low== high){
        min= max = arr[low];
    }
    else if (low== high - 1){
        if (arr[low]< arr[high]){
            min= arr[low];
            max= arr[high];
        }
        else{
            min= arr[high];
            max= arr[low];
        }
    }
    else{
        int mid =(low + high) / 2;
        int min1, max1, min2, max2;
        MinMax(arr, max1, min1, low, mid);
        MinMax(arr, max2, min2, mid + 1, high);
        min= (min1 < min2) ? min1 : min2;
        max= (max1 > max2) ? max1 : max2;
    }
}
int main(){
    int arr[] = {12, 45, 7, 89, 23, 1, 56};
    int n =sizeof(arr) / sizeof(arr[0]);
    int min, max;
    MinMax(arr, max, min, 0, n - 1);
    cout << "Minimum:"<<min<<endl;
    cout << "Maximum:"<<max<<endl;
    return 0;
}

