#include <iostream>

using namespace std;

int main()
{
    int Urspeed=0 ;
    int Roadspeed=0;
    int difference=0;
    cout << "Enter Your speed: ";
    cin>>Urspeed;
    cout  << "Enter Speed of the road: ";
    cin >> Roadspeed;
    difference = Urspeed - Roadspeed;
    if(difference <=20){
        cout << " Congrats you have No Fine! "<< endl;
    }else if(difference <= 30)
    {
        cout << "Your fine is 600 AED, No Black Points" << endl;
    }else if(difference <= 40)
    {
        cout << "Your fine is 700 AED, 4 Black Points" << endl;
    }else if(difference <=50){
        cout << "Your fine is 1000 AED, 6 Black Points" << endl;
    } else if(difference <=60)
    {
        cout << "Your fine is 1500 AED, 12 Black Point, 15 Days " << endl;
    }else if(difference <=80)
    {
        cout << "Youre fine is 2000 AED, 12 Black Point, 1 Month" << endl;
    } else if(difference > 80)
    {
        cout << "Your fine is 3000 AED, 23 Black Points, 2 Month" << endl;
        
    }

    return 0;
}
