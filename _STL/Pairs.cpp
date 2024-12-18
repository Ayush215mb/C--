#include <bits/stdc++.h> //includes all the libs of c++

using namespace std;

int main()
{
    // normal pair
    pair<int, int> pf = {50, 30};
    cout << pf.first << " " << pf.second << endl;

    // nested pair
    pair<int, pair<int, int>> ps = {10, pf};
    cout << ps.first << " and " << ps.second.first << " or " << ps.second.second << endl;

    // an array of pairs
    pair<int, int> Parr[] = {{1, 3},
                             {10, 21},
                             {28, 92},
                             {121, 9191}};

    cout
        << Parr[1].first << endl // will second element of pair at index 1

        << Parr[1].second << endl // will second element of pair at index 1

        << Parr[0].second << endl // will second element of pair at index 1

        << Parr[3].second << endl // will second element of pair at index 1

        << Parr[3].first << endl // will second element of pair at index 1

        << Parr[2].second << endl // will second element of pair at index 1

        << Parr[2].first << endl; // will second element of pair at index 1

    return 0;
}