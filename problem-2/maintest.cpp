#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5; //the size of vector;

    vector<int> v = {
        7, 8, 6, 4, 3
    };

    vector<int> ans; 
    for(int i=n-1; i>=0; i--)
    {
        ans.push_back(v[i]);
    }

    vector<int> expectedOutput = {
        3, 4, 6, 8, 7
    };

    if(expectedOutput==ans) cout<<"SUCCESSFULLY"<<endl;
    else cout<<"UNSUCCESSFULLY"<<endl;
    
}
