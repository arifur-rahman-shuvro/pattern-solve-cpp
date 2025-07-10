/*
Author: Arifur Rahman Shuvro
Date:10 July 2025
GitHub: https://github.com/arifur-rahman-shuvro

Input:

5

Output:

*****
****
***
**
*

*/


#include<iostream>
using namespace std;

void left_aligned_inverted_triangle(int row_count){
    for(int i=0; i<row_count; i++){        //loop for row count
        for(int j=0; j<row_count-i; j++){ // loop for print star
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter number of row: ";
    cin>>n;
    left_aligned_inverted_triangle(n);
}