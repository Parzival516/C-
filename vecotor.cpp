#include <iostream>
#include <vector>
using namespace std;



int main()
{
vector<int> v1={1,2,3,4};
// cout<<v1[0]<<endl;
// cout<<v1.front()<<endl;
// cout<<v1.back()<<endl;
// cout<<v1.size()<<endl;
// cout<<v1.capacity()<<endl;

// v1.push_back(5);
// v1.push_back(5);
// v1.pop_back();
// cout<<v1.capacity()<<endl;

// v1.insert(v1.begin()+1,5);
// cout<<v1[1]<<endl;

// v1.erase(v1.begin());
// cout<<v1[0]<<endl;
for (int i = 0; i < v1.size(); i++)
{
    cout<<v1[i]<<endl;
}
v1.insert(v1.begin(), 10);

for (auto itr =v1.begin(); itr != v1.end(); itr++)
{
    cout<<*itr<<endl;
}



    return 0;
}