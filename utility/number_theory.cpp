//returns the ceiling of a/b

int cust_ceil(int a, int b){
    if(a%b == 0)return a/b;
    return (a/b) + 1;
}

//returns the floor of the square root of an integer
ll binary_search_sqrt(ll n){
    ll l=1, r = 1e9;
    ll answer;
    while(l<=r){
        ll mid = l + (r-l)/2;
        if(mid*mid > n){
            r = mid -1;
        }else{
            answer = mid;
            l = mid + 1;
        }
    }
    return answer;
}