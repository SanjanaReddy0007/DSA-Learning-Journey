void arrangeColorsInOrder(vector<int>&arr)
{
    int n = arr.size();
    sort(arr.begin() , arr.end());
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    arrangeColorsInOrder(arr,n);
    for(int num : arr) {
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}

