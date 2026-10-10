
int countValueAtSameSegment(HugeArray* data) {
    int n = data -> length();
    int blocks = 0;
    int index = 0;

    while(index < n) {
        int curr = data->valueAt(index);
        int lastSame = index;
        int low = index;
        int high = n - 1;

        while(low <= high) {
            int mid = (low + high) / 2;
            if(curr == data->valueAt(mid)) {
                lastSame = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        blocks++;
        index = lastsame + 1;
    }

    return blocks;

}

