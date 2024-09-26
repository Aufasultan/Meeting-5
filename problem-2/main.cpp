#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; //the size of vector;
    cout<<"The size of a vector: ";
    cin>>n;

    vector<int> v; 

    for(int i=0; i<n; i++)
    {
        int x; //the value given 
        cin>>x;
        v.push_back(x); //push x to vector of v
    }

    vector<int> ans; //a vector contains each value of vector of v after reversing
    for(int i=n-1; i>=0; i--)
    {
        ans.push_back(v[i]); 
    }

    for(auto i : ans)
    {
        cout<<i<<' '<<endl;
    }
    
}
