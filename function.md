#Function
Some basic C++ functions which used in leetcode.

#\#include \<algorithm\>

##swap

```C++
swap ( T& a, T& b );
```

###num

```C++
{a = a + b; b = a - b; a = a - b;}
```

###bit

```C++
{a = a ^ b; b = a ^ b; a = a ^ b;}
```

##reverse

```C++
reverse(m.begin(), m.end());
```

##find

```C++
find(vector.begin(), vector.end(), n) != vector.end()
```

##sort

```C++
#include<functional>
from greatest to least
sort(nums.begin(),nums.end(), greater<int>());
```

#\#include \<cmath\>

##sqrt

```C++
sqrt(x);
```

##power

```C++
pow(a, b); //a^b
```

#\#include \<unordered_map>

```C++
unordered_map<char,int> pali;
for(char a: s) ++pali[a];
for(unordered_map<char, int>::iterator it = pali.begin(); it != pali.end(); it++){
	res += it -> second/2*2;
	(it -> second %2 == 1) flag = 1;
}

for(auto it = tmp.begin(); it != tmp.end(); it++)
```

#\#include \<bitset>

```	C++
bitset<16> foo;
bitset<16> bar (0xfa2);
//return the number of 1
foo.count();
```

#\#include \<string>

##to_string

```C++
to_string (int val);
```

##substr

```C++
//substr(position,length)
str.substr (3,5);
```

