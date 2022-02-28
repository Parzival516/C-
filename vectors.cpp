#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> test_scores {100,90,80,70,60};
    cout<<"Fist score at index 0: "<<test_scores.at(0)<<endl;
    cout<<"Fist score at index 1: "<<test_scores.at(1)<<endl;
    cout<<"Fist score at index 2: "<<test_scores.at(2)<<endl;
    cout<<"Fist score at index 3: "<<test_scores.at(3)<<endl;
    cout<<"Fist score at index 4: "<<test_scores.at(4)<<endl;
    cout<<"Enter new first score: "<<endl;
    cin>>test_scores.at(0);
    cout<<"New first score "<<test_scores.at(0)<<endl;

    vector<char> first_letter{0};
    cout<<"Enter the first letter of your name: "<<endl;
    cin>>first_letter.at(0);
    cout<<"First letter of your name is: "<<first_letter.at(0)<<endl;
    cout<<"Size of the previous vector: "<<first_letter.size()<<endl;

    cout<<"Enter a test score to add"<<endl;
    int score_to_add{0};
    cin>>score_to_add;
    test_scores.push_back(score_to_add);
    cout<<"Enter one more test score to add"<<endl;
    cin>>score_to_add;
    test_scores.push_back(score_to_add);
     cout<<"Fist score at index 0: "<<test_scores.at(0)<<endl;
    cout<<"Fist score at index 1: "<<test_scores.at(1)<<endl;
    cout<<"Fist score at index 2: "<<test_scores.at(2)<<endl;
    cout<<"Fist score at index 3: "<<test_scores.at(3)<<endl;
    cout<<"Fist score at index 4: "<<test_scores.at(4)<<endl;
    cout<<"Fist score at index 4: "<<test_scores.at(5)<<endl;
    cout<<"Fist score at index 4: "<<test_scores.at(6)<<endl;
    return 0;
}
