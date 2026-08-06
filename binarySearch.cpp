#include <iostream>
using namespace std;
int main() {
    int arr[]={12, 23, 25, 46, 49, 89, 109};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout <<"Enter element to search:";
    cin >> key;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout<<"Element found at index"<<mid<<endl;
            return 0;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }											
    }
    cout<<"Element not found"<<endl;


