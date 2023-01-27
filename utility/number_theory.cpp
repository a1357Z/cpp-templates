//returns the round_up of a/b
int round_up(int a, int b){
    if(a%b == 0)return a/b;
    return (a/b) + 1;
}

// round up a/b; th
int round_up(int a, int b){
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

//possible error causes when using long long
ll total = accumulate(items.begin(), items.end(), 0); // this will fail for larger values
ll total = accumulate(items.begin(), items.end(), (ll)0); // use this instead

// vector.size() is a integer, any operation of it with a long might through error, use typecasting
(ll)vector.size() // --> use this syntax