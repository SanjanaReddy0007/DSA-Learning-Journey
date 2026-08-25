int removeSpecificElement(vector<int>&arr, int target) {
     int n = arr.size();
     int pos = 0;

     for(int i = 0; i < n; i++) {
        if(arr[i] != target) {
            arr[pos] = arr[i];
            pos++;
        }
     }

     return pos;
}


int main() {
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    int length = removeSpecific(arr, n);
    for(int i = 0; i < length; i++) {
        cout<<arr[i]<<" ";
    }
    
}

