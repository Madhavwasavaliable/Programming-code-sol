#include<iostream>
using namespace std;

int main(){
    int n;
    int row=1;
    cin>>n;

    while(row<=n){
        int col = 1;
        while(col <= n){
            char ch = 'A' + col - 1; 
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}