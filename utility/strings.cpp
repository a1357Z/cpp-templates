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