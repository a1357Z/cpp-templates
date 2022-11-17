
// sliding window my personally created template

ll l = 0, r = 0;

// r - l + 1 --> the size of the subarray from [l,r]
//r - l --> distance between l and r
for (; r < n;r++)
{
    //some possbile initial condition for skipping
    //continue statement if skip condition matches

    // transition from the invalid state to valid state
    while (l < n && (invalid()))
    {
        l++;
    }
    //update the answer --> this handles both the valid and invalid states
    answer += (r - l + 1); // valid even if l overtakes r
}

//ask if i need to update the answer even after ending the for sliding window  ? not needed 


//shrinkable template leetcode
int i = 0, j = 0, ans = 0;
for (; j < N; ++j) {
    // CODE: use A[j] to update state which might make the window invalid
    for (; invalid(); ++i) { // when invalid, keep shrinking the left edge until it's valid again
        // CODE: update state using A[i]
    }
    ans = max(ans, j - i + 1); // the window [i, j] is the maximum window we've found thus far
}
return ans;


// non-shrinkable template
int i = 0, j = 0;
for (; j < N; ++j) {
    // CODE: use A[j] to update state which might make the window invalid
    if (invalid()) { // Increment the left edge ONLY when the window is invalid. In this way, the window GROWs when it's valid, and SHIFTs when it's invalid
        // CODE: update state using A[i]
        ++i;
    }
    // after `++j` in the for loop, this window `[i, j)` of length `j - i` MIGHT be valid.
}
return j - i; // There must be a maximum window of size `j - i`.