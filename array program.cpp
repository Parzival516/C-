#include <iostream>
using namespace std;
int main()
{
    char vowels[]{'a','e','i','o','u'};
    cout<<"The first vowel is "<<vowels[0]<<endl;
    cout<<"The last vowel is "<<vowels[4]<<endl;

    double hi_temps[]{90.1,89.8,77.5,81.6};
    cout<<"The first high temperature is "<<hi_temps[0]<<endl;
    cout<<"The least high temperature is "<<hi_temps[3]<<endl;
    hi_temps[0]=100.7;
    cout<<"The new highest temperature is "<<hi_temps[0]<<endl;

    int test_scores[]{100,90,80,70,60};
    cout<<"First integer is"<<test_scores[0]<<endl;
    cout<<"Second integer is"<<test_scores[1]<<endl;
    cout<<"Third integer is"<<test_scores[2]<<endl;
    cout<<"Fourth integer is"<<test_scores[3]<<endl;
    cout<<"Fifth integer is"<<test_scores[4]<<endl;

    cout<<"Enter 5 test scores"<<endl;
    cin>>test_scores[0];
    cin>>test_scores[1];
    cin>>test_scores[2];
    cin>>test_scores[3];
    cin>>test_scores[4];
    cout<<"Updated list of scores"<<endl;
    cout<<"First integer is"<<test_scores[0]<<endl;
    cout<<"Second integer is"<<test_scores[1]<<endl;
    cout<<"Third integer is"<<test_scores[2]<<endl;
    cout<<"Fourth integer is"<<test_scores[3]<<endl;
    cout<<"Fifth integer is"<<test_scores[4]<<endl;

    cout<<"Storage location of the above array "<<test_scores<<endl;

    return 0;
}
