//returns the ceiling of a/b

int cust_ceil(int a, int b){
    if(a%b == 0)return a/b;
    return (a/b) + 1;
}

int cust_ceil(int a, int b){
    return (a + b - 1)/b;
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

//range intersection
//range [a, b] && range [c,d]
ll left = max(a, c);
ll right = min(b, d);

//new range [left, right]
//no intersection found
if(left > right){
    valid = false;
    found = true;
    break;
}