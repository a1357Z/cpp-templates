ll to_number(string num)
{
    ll answer = 0;
    ll mult = 1;

    for (ll i = num.length() - 1; i > -1; i--)
    {
        answer += (num[i] - '0') * mult;
        mult *= 10;
    }
    return answer;
}

//searches for the query subsequence in the target subsequence in O(n+m)
pair<bool, string> find_subsequence(string query, string target){
    bool found = false; string answer = "";
    int charIdx = 0;
    for(int ptr=0;ptr < target.size() && charIdx < query.size();ptr++){
        if(target[ptr] == query[charIdx]){
            charIdx++;
        }
    }
    if(charIdx == query.size()){
        return { true, query };
    }
    return { false, answer};
}