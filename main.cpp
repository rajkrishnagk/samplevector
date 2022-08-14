#include<iostream> 
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1={10,20,30,4,5};
    for(auto x:v1)
    cout<<x;

    int sum=0;
    cout<<"{";
    for_each(v1.begin(),v1.end(),[&sum](const auto& x){cout<<x<<"";sum +=x ;});

    cout<<"}"<< endl;
    cout<<"sum of elements: "<<sum <<endl;

    return 0;
}