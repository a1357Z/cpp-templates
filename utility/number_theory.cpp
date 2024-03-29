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

// prime factorization of a number
// returns a map of power --> [bases]
map<ll,vector<ll>> primeFactorization(ll num){
    map<ll, vector<ll>>pow2bases;
    ll numCopy = num;
    for(ll i=2; i*i <= numCopy; i++){
        ll count = 0;
        if(num%i != 0)continue;
        while(num%i == 0){
            num/=i;
            count++;
        }

        pow2bases[count].push_back(i);
    }

    if(num != 1){
        pow2bases[1].push_back(num);
    }

    return pow2bases;
}

//remove leading zeros from a number in string notation
string remove_leading_zeros(string s){
    string answer = "";
    int idx=0;

    //get the most significant bit
    while(idx<s.length() && s[idx] == '0'){
        idx++;
    }

    while(idx<s.length()){
        answer += s[idx++];
    }
    if(answer.length() > 0)
        return answer;
    
    return "0";
}

// where x is the previous lcm and y is the new number added to the list of numbers for which we need lcm
ll get_lcm(ll x, ll y) {
  ll g = __gcd(x, y);
  x /= g;
  if (x >= 1e18 / y) return 1e18;
  return x * y;
}