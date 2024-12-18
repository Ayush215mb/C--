#include <bits/stdc++.h> //includes all the libs of c++
using namespace std;

// best place to learn vector
// https://www.geeksforgeeks.org/vector-in-cpp-stl/?ref=lbp#create-a-vector
int main()
{
    // In C++, vector is a dynamic array with the ability to resize itself automatically when an element is inserted or deleted. It is the part Standard Template Library (STL) and provide various useful functions for data manipulation.
    vector<int> v;
    vector<char> v2;
    vector<string> v3;

    // Functions in unordered set:
    /*
    begin() - it returns an iterator pointing to the first element of the vector.

    end() - it returns an iterator pointing to the element theoretically after the last element of the vector.

    push_back() - it accepts a parameter and insert the element passed in the parameter in the vectors, the element is inserted at the end.

    insert() - it is used to insert an element at a specified position.

    erase() - it is used to delete a specific element

    pop_back() - it deletes the last element and returns it to the calling function.

    front() - it returns the first element of the vector without bothering about index.

    back() - it returns a reference to the last element of the vector.

    clear() - deletes all the elements from the vector.

    empty() - to check if the vector is empty or not.

    size() - returns the size of the vector

    cbegin() - it refers to the first element of the vector.

    cend() - it refers to the theoretical element after the last element of the vector.

    rbegin() - it points to the last element of the vector.

    rend() - it points to the theoretical element before the first element of the vector.

    crbegin() - it refers to the last element of the vector.

    crend() - it refers to the theoretical element before the first element of the vector.

    max_size() - returns the maximum size the vector can hold.

    capacity() - it returns the current capacity of the vector.

    */
    for (int i = 0; i <= 10; i++)
    {
        v.push_back(i); // inserting elements in the vector
        v.emplace_back(10 + i);
    }

    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: " << v.back();
    cout << "\nThe size of the vector: " << v.size();
    cout << "\nPrinting the vector before removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    v.pop_back();
    cout << "\nThe size of the vector: " << v.size();
    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nInserting 5 at the beginning....." << endl;
    v.insert(v.cbegin(), 5);
    cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());
    cout << "Now the first element is: " << v[0] << endl;
    cout << "The last element is: " << *v.end() << endl;

    // vector pair
    vector<pair<int, int>>
        Vpair;
    Vpair.push_back({10, 20});
    Vpair.emplace_back(100, 500);
    return 0;
}