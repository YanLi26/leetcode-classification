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
```