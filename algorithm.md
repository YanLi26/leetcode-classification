#Algorithm

##Binary Search

```C++
//O(log(n))
    int low = 0, high = vector.size() - 1;
    while(low <= high){
    	int mid = low + (high - low)/2;
    	if(vector[mid] == value) return mid;
    	else if(vector[mid] > value) high = mid - 1;
    	else low = mid + 1;
    }
```

##KMP Algorithm

```C++
//http://www.cnblogs.com/grandyang/p/6087347.html
int i = 1, j = 0, n = str.size();
vector<int> dp(n + 1, 0);
while (i < n) {
//if str and substr is same, both of them add one
	if (str[i] == str[j]) dp[++i] = ++j;
	//if str != substr and index is at the beginning of substr, ++i
   else if (j == 0) ++i;
   //if str != substr, return index to the matching position
   else j = dp[j];
}
//if the last number is not 0 and n - dp[n] is length of a string
return dp[n] && (dp[n] % (n - dp[n]) == 0);
```

##Sliding Window

```C++
```