<style>
    details > summary * { display : inline; }
</style>
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
    cout<<*itr;
}
sort(arr,arr + arr_size); sort(v.begin(),v.end());// sort asc

sort(v.begin(),v.end(),compareNodes);// sort based on compareNodes
```
</details>
<details open>
    <summary>

## stack</summary>
```cpp
stack<T> set_name;// declare stack of type T
iterator set_name.insert(element) // Insert new ele at end of v. Thus increasing size by 1
```
</details>
<details open>
    <summary>

## Set</summary>
```cpp
set<T> set_name; // declare set of type T
iterator set_name.insert(element) // Insert ele in set_name. Increasing size by 1 if not exists before.
```
</details>