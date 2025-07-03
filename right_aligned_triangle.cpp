/*
Author: Arifur Rahman Shuvro
Date:01 July 2025
GitHub: https://github.com/arifur-rahman-shuvro
*/

#include <iostream>
using namespace std;

// Root function
void right_aligned_triangle(int row){
    for(int i=1; i<=row; i++){  // outer loop for row count
        for(int k = 0; k < row-i; k++) { // to print spaces
            cout << " ";
        }
        for(int j=1; j<=i; j++){ // inner loop for print star
            cout << "*";
        }
        cout << "\n";
        
    }
}



int main(){
    int num_of_rows;
    
    cout << "Enter row number: ";
    cin >> num_of_rows;
  
    right_aligned_triangle(num_of_rows);
    
    return 0;
   

}

/*
Input: 5
Output:
    *
   **
  ***
 ****
*****
*/