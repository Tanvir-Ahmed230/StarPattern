# StarPattern
Printing the pattern of the stars
#include<iostream>
using namespace std;
int main(){
    int row,col,i,j;
    cout<<"Enter row number : ";
    cin>>row;
    cout<<"Enter column number :";
    cin>>col;
    for(i=1;i<=row;i++){
    for(j=1;j<=col;j++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}
