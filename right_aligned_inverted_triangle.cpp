/*
Author: Arifur Rahman Shuvro
Date: 10 July 2025
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

void right_aligned_inverted_triangle(int row_count){
    for(int i = 0; i < row_count; i++){              // loop through each row
        for(int space = 0; space < i; space++){      // print leading spaces
            cout << " ";
        }
        for(int star = 0; star < row_count - i; star++){ //loop for print stars
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter number of row: ";
    cin >> n;
    right_aligned_inverted_triangle(n);
}
