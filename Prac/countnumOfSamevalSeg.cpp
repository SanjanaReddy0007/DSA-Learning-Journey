
int countSegments(hugeArray* data) {
    
    int n = data -> length();
    int blocks = 1;
    if(n == 0) return 0;
    
    for(int i = 1; i < n; i++) {
        if(data -> valueAt(i) != data -> valueAt(i - 1)) {
            blocks++;
        }
    }

    return blocks;

}



