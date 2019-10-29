//Program to Determining a Prime Number or Not
#include <iostream>
using namespace std;

int main()
{
    int number,i, value;
    cout<<"Enter Number = ";
    cin>>number;
    
        if((value==2)||(value==3)||((value+1)%6==0)||((value-1)%6==0))
        {
            cout<<"PRIMES";
        }
        else{
            cout<<"NOT PRIMES";
        }
    return 0;
}
