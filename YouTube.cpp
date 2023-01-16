#include<iostream>
using namespace std;

int main()
{

    float duration , speedX , distance;

    cout<<"Enter Duration of videos "<<endl;
    cin>>duration;

    cout<<"Enter YouTube Speed X , i,e 1.75 2.25 "<<endl;
    cin>>speedX;

    distance=speedX/duration;

    cout<<"You can travel to "<<distance<<" kilometer in this time "<<endl;

    return 0;
}
