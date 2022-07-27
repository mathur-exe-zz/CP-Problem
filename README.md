# CP-Problem

### Patterns
- Pascal Triangle 
- 

### Time Complexity 
![](img/Time_Complexity.png)
<details>
<summary> Log n </summary>

![log n](img/Log(n).png)

</details>

<details>
<summary> nlog(n) </summary>

![](img/nlog(N)_1.png)
![](img/nlog(N)_2.png)

</details>

<details>
<summary> sqrt(n) vs log(n) </summary>

![sqrt(n) vs log(n)](img/nlog(N)_2.png)
</details>

### Space Complexity 


## Data Structure

### Array & Vector

```
// Basic Vector functions
#include <vector>
vector <int> v;
vector <int> v2 (3, 50);    // Vector w/ 3 elements (50, 50, 50)

v.push_back(ele);   // Add element
v.pop_back();       // Remove last Element


swap(v, v2);                        // Swap the values between two vectors
sort(v.begin(), v.end());           // Sort


```

```
// Iterating throught a vector

// M1
for(int i =0; i<v.size();i++)
        cout << v[i] << endl;

// M2
vector <int>:: iterator it;
for(it=v.begin(); it!=v.end(); it++) {
    cout << *it << endl;
}


// M3 
for(auto element:v) {
    cout << element << endl;
}

```