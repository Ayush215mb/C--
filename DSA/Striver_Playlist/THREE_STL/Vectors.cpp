#include <bits/stdc++.h> //includes all the libs of c++
using namespace std;

int main()
{
    // Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements are added or deleted from them. Vector elements can be easily accessed and traversed using iterators. A vector stores elements in contiguous memory locations.
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

    front() - it returns a reference to the first element of the vector.

    back() - it returns a reference to the last element of the vector.

    clear() - deletes all the elements from the vector.

    empty() - to check if the vector is empty or not.

    size() - returns the size of the vector


    */
    for (int i = 0; i < 10; i++)
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

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    vector<pair<int, int>> Vpair;
    Vpair.push_back({10, 20});
    Vpair.emplace_back(100, 500);
    return 0;
}