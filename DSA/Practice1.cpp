#include<iostream>

using namespace std;

int main()
{
    for (int i = 0; i <=5; i++)
    {
        cout<< i << " ";
        i++;
    } cout<< endl;

    // for (int i = 0; i <= 5; i--)
    // { 
    //     cout<< i << " ";
    //     i++;
    // }
    
    for (int  i = 0; i <= 15; i+=2) // odd numbers
    {
        cout<< i <<" ";

        if ( i&1 ) 
        {
            continue;
        }
        
        i++;
    }cout<< endl;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <=5 ; j++)
        {
            cout<< i << " " << j << endl;
        }cout<< endl; 
        
    }
    
}