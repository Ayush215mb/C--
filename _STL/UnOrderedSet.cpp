#include <bits/stdc++.h>
using namespace std;

int main()
{
    // An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.
    unordered_set<int> s;
    unordered_set<string> str;

    // Functions in unordered set:
    /*

    insert() - to insert an element in the unordered set.
    begin() - return an iterator pointing to the first element in the unordered set.
    end() - returns an iterator to the theoretical element after the last element.
    count() - it returns 1 if the element is present in the container otherwise 0.
    clear() - deletes all the elements in unordered set.
    find() - to search an element in the unordered set.
    erase() - to delete a single element or elements between a particular range.
    size() - returns the size of the unordered set.
    empty() - to check if the unordered set is empty or not.

    */

    for (int i = 0; i < 5; i++)
    {
        s.insert(i);
    }

    cout << "Elements present in the unordered set: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    int n = 8;

    s.erase(s.begin());
    if (s.find(n) != s.end())
        cout << n << " is present in unordered set" << endl;
    else
    {
        cout << "not present";
    }

    cout << "The size of the unordered set is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;
    s.clear();
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
    return 0;
}