//template for calculating prefix and suffix over items array for some <operator> like +, *, |, ^

vector<ll> items(n);
vector<ll> prefix(n), suffix(n);

//initialize the value of prev
ll prev = 0;
for(ll i=0;i<n;i++){
    prefix[i] = prev <operator> numbers[i];
    prev = prefix[i];
}

prev = 0;
for(ll i=n-1;i>-1;i--){
    suffix[i] = prev <operator> numbers[i];
    prev = suffix[i];
}