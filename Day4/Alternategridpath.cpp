//here problem is tht need to store odd :- move right /down
//for even left / up so it for odd moves forward and for left and down its forcefully backwards



int computegrid(int rows,int cols) {
    
    if(rows == 1 && cols == 1) return 3;
    if(rows == 2 && col == 1) return 3;
    if(rows == 1 && cols == 1) return 1;

    return -1;

}

//becsuase after the 2,2 it dont moves forward next row or col it alwz forces backward pull result 
//so trick is to found until it exactly the grid 
//statement:- (0,0) to (rows - 1) (cols - 1) and here each (i,j) is incurs (i+1) * (j+1)





