  void printAsteriskSquare(int n) {
        // Write your code here...
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i == 0 || i == n - 1 || j == 0 || j == n - 1) { //first row first col last row last col thts only start else " "
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }

    