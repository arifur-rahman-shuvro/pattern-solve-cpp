#include <iostream>
#include <chrono>
#include<thread>

void right_aligned_triangle(int row){
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            std::cout << " *";
        }
        std::cout << "\n";
    }
}



int main(){
    int num_of_rows;
    char choice;

    std::cout << "Welcome to PATTERN GENERATOR" <<std::endl;
    do{ std::cout << "Enter number of rows(numeric): ";
    std::cin >> num_of_rows;
    if(num_of_rows <= 0){
            std::cout << "Please enter a positive number.\n";
            continue;
        }
    
    
    std::cout << "Pattern Generating......" << std::endl;
    std::cout << std::endl;

    right_aligned_triangle(num_of_rows);
    std::cout << "\n";
    
    std::cout << "Pattern Generated" << std::endl;
    std::cout << "Do you want to generate again?(y/n)" << std::endl;;
    std::cin >> choice;
    }
    while(choice == 'y' || choice == 'Y');

    std::cout <<"Thanks for using PATTERN GENERATOR";

    return 0;
   

}