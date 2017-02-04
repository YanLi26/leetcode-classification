#Function
Some basic C++ functions which used in leetcode.

#\#include \<algorithm\>

##swap

swap ( T& a, T& b );

###num

{a = a + b; b = a - b; a = a - b;}

###bit

{a = a ^ b; b = a ^ b; a = a ^ b;}

##reverse

reverse(m.begin(), m.end());

#\#include \<cmath\>

##sqrt

sqrt(x);

##power

pow(a, b); //a^b

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
foo.count();
```

