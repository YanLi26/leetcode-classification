#Container

##vector

\#include\<vector>

```C++
vector<int> vec(n);
//the last element
vec.back();
vec.front();
vec.push_back();
vec.pop_back;
// erase the 6th element
vec.erase (myvector.begin()+5);
// erase the first 3 elements:
vec.erase (myvector.begin(),myvector.begin()+3); 
// 7 ints with a value of 100
vec.assign (7,100);
//two-dimensional array, 1 means every vector<int> have one element
vec.assign(numRows, vector<int>(1));
```

##Set

\#include\<set>

```C++
iterator it = myset.find(20);
myset.insert(20);
```

##unordered_set

\#include\<unordered\_set>

```C++
unordered_set<char> row3 { 'z', 'x', 'c', 'v'};
row1.find(words[i][j])!=row1.end()
```

##string

\#include\<string>

```C++
//pos,length
str.erase (10,8);
```