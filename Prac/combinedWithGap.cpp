 void printCombinedTriangle(int n) {
        //Write your code here...
        for(int i=1;i<=n;i++){
            
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            
            for(int space =1;space<=2*(n-i);space++){
                cout<<"  ";
            }
            
            //rigth decreasing numz
            for(int j=i;j>=1;j--){
                cout<<j;
                if(j!=1)cout<<" ";
            }
            cout<<endl;
        }
        