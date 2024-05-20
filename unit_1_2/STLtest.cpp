#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> mysample = {1,1,3,3,5,5,6};

    cout << "Lower bound of 3 : "<< lower_bound(mysample.begin(), mysample.end(), 3) - mysample.begin() << endl;
    cout << "Upper bound of 3 : "<< upper_bound(mysample.begin(), mysample.end(), 3) - mysample.begin() << endl;

};

