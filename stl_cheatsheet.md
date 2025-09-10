<style>
    details > summary * { display : inline; }
</style>
[logicalbee](https://medium.com/logicalbee/c-stl-algorithms-cheat-sheet-d92f986abe14)


<details open>
    <summary>

## Vector</summary>
```cpp
vector<T> v0; vector<int> v1; // declare vectors of types T and int respectivley
v.push_back(ele); // Insert new ele at end of v. Thus increasing size by 1
v[i] = data_i; data_i = v[i]; // set and get ith element resp
v.begin();v.end();
itr - v.begin() // *Imp* index of itr in v
for(auto itr=v.begin(); itr != v.end(); itr++){ // traverse vector
    cout<<*itr; // note *
}
for(auto ele:v){
    cout<<ele;
}
//remove elements from a container from the specified position or range
v.erase(position);
v.erase(startingposition, endingposition);

sort(arr,arr + arr_size); sort(v.begin(),v.end());// sort asc

sort(v.begin(),v.end(),compareNodes);// sort based on compareNodes
sort(v.begin(),v.end(),greater<int>());// note ()
```
</details>
<details open>
    <summary>

## Stack</summary>
```cpp
stack<T> st;// declare stack of type T
st.push(ele);
st.top(); // top element
st.pop(); // returns void but removes top element from stack
```
</details>
<details open>
    <summary>

## Queue</summary>
```cpp
queue<T> q;// declare Queue of type T
q.push(ele);
q.pop();
q.front();
q.back();
```
</details>
<details open>
    <summary>

## Priority Queue or Heap</summary>
```cpp
priority_queue<T> heap;// declare heap (max heap by default for int) of type T
priority_queue<int,vector<int>,greater<int>> min_h; // min heap
min_h.push(ele);
min_h.top();
min_h.pop();
```
</details>
<details open>
    <summary>

## Deque </summary>
```cpp
deque<T> dq; // Same as vector with additional functions
dq.push_front(ele);
dq.push_back(ele);
dq.pop_front();
dq.pop_back();
```
</details>
<details open>
    <summary>

## Set</summary>
```cpp
set<T> s; // declare set of type T
iterator s.insert(element) // Insert ele in s. Increasing size by 1 if not exists before.
s.erase(position_iter);
s.erase(start_posi_iter,end_posi_iter);
s.erase(s.find(ele));
```
</details>
<details open>
    <summary>

## Map</summary>
```cpp
unordered_map<int, string> um =
    {{1, "Geeks"}, {2, "For"}, {3, "C++"}};
// unordered_map<int, string> um; // without init

um[1] = "Geeks";
um.insert({2, "For"});

cout << um[1] << ' ' << um.at(2); // Geeks For

um[2] = "By";
um.at(1) = "Tips";

auto it = um.find(2);

if (it != um.end())
    cout << it->first << ": " << it->second;

for(auto it = um.begin(); it != um.end(); it++)

um.erase(2); // Delete element which have key 2
```
[g4g](https://www.geeksforgeeks.org/cpp/unordered_map-in-cpp-stl/)

</details>

<details open>
    <summary>

## Bit</summary>
```cpp

```
</details>

<details open>
    <summary>

## Custom Operator</summary>
```cpp
ClassName& operator= (const ClassName& other);

class Point {
public:
    int x;
    int y;

    Point(int x_coord = 0, int y_coord = 0) : x(x_coord), y(y_coord) {}

    // Overloading the + operator as a member function
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    // Overloading the << operator as a friend global function
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};
```
</details>

<details open>
    <summary>

## Math</summary>
```cpp
int INF = std::numeric_limits<int>::max();
int NINF = std::numeric_limits<int>::min();
```
</details>

