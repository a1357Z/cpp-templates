/* get the modulo of product of n numbers a, b, c, d..... with mod
    
    (a*b*c*d....)%mod
    int answer = a%mod;
    answer = (answer*(b%mod))%mod;
    answer = ( answer*(c%mod))%mod;
    answer = (answer*(d%mod))%mod;
    ... and so on
    getModProduct()
*/

getModProduct(vector<int> items, int mod){
    int answer = 1;
    for(int i: items){
        answer = (answer * (i%mod))%mod;
    }
    return answer;
}
