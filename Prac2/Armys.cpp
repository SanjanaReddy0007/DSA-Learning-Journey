
string isDominant(int A,int B, int C) {

    if(A > B + C || B > A + C || C > A + B) {
        return "YES";
    } else {
        return "NOOO";
    }

}

