// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v1 = {5, 7, 4, 9, 3};

    vector<int> v2; // initialize vector with 0 size
 
    vector<int> v3(5,1);  // create an array of 5 elements and initialize with all elements as 1

    vector<int> copyOfv3 (v3);  // this ia a copy of v3




    cout << v2.capacity() << endl; // capacity is total memory capacity assigned
    cout << v2.size() << endl;     // size is number of elements present

    v2.push_back(4);   //push from back
    v2.push_back(6);

    cout << v2.capacity() << endl;
    cout << v2.size() << endl;

    v2.push_back(9);

    cout << v2.capacity() << endl; // here capacity is 4 and size is 3 because as vector falls short of space it copies elements into a new vector of double size so after adding 3rd element capacity doubles (becomes 4 from 2, and size is 3)
    cout << v2.size() << endl;



    for (auto elem : v2)
    { 
        cout << elem << " ";
    }
    cout<<endl;

    for (auto elem : v1)
    { 
        cout << elem << " ";
    }
    cout<<endl; 

    for (int i : v1)
    { // this will also work
        cout << i << " ";
    }
    cout<<endl;

    cout<<v2.at(2)<<"\n";   // accessing
    cout<<v2.empty()<<"\n";  // is empty?
    cout<<v2.front()<<"\n";   //front elem
    cout<<v2.back()<<"\n";   //rear elem

    v2.pop_back();  //pop from back

    for (int i : v2)
    { 
        cout << i << " ";
    }
    cout<<endl;

    v1.clear();  //size will become zero not capacity as elements are cleared not memory

    cout << v1.capacity() << endl;   // 5
    cout << v1.size() << endl;       // 0

    for (int i : v3)
    { 
        cout << i << " ";
    }
    cout<<endl;

    for (int i : copyOfv3)
    { 
        cout << i << " ";
    }
    cout<<endl;

    
}