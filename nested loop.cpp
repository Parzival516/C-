#include <iostream>
#include<vector>
using namespace std;
int main()
{
    /*for(int num1{1};num1<=10;num1++)
        {
            for(int num2{1};num2<=10;num2++)
                {
                    cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
                }
                cout<<"==================="<<endl;
        }*/
        int num_items{};
        cout<<"How many items do you have: "<<endl;
        cin>>num_items;

        vector<int>data{};
        for(int i{1};i<=num_items;++i)
            {
                int data_items{};
                cout<<"Enter data items "<<i<<" : ";
                cin>>data_items;
                data.push_back(data_items);
            }

            cout<<"\nDisplaying Histogram"<<endl;
            for(auto val:data){
                for(int i{1};i<=val;++i)
                    {
                        if(i%5==0)
                            cout<<"*";
                        else
                        cout<<"-";
                    }
                    cout<<endl;
            }

    return 0;
}
