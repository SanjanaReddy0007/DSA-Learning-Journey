
int wiggleSequence(vector<int>& arr)
{
    int n = arr.size();
    int incr = 1, decr = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[ i - 1]) {
            incr = decr + 1;
        } else {
            decr = incr + 1;
        }
    }

    return max(incr , decr);

}


