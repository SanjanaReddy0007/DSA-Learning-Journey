
string toRoman(int num)
{
    string romansymbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int vals[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    
    string res = "";
    for(int i = 0; i < 13; i++) {
        while(num >= vals[i]) {
            res += romansymbols[i];
            num -= vals[i];
        }
    }

    return res;

}


