#include <iostream>


using namespace std;


bool is_pow_of_2_loop(int num){ //google AIP check if number is a power of 2 c++ with loops
    if (num <= 0) {
        return false;
    }
    while (num % 2 == 0) {
        num /= 2;
    }
    return num == 1;
}

bool is_power_of_2_non_loop(int num){
    
    if(num <= 0){
        return false;
    }

    return (num & (num-1)) == 0; //in class example
    
}




bool is_prime(int num){
    
    if(num < 2){
       return false;
    }

    if(num == 2 || num ==3){  //edge cases for 2 and 3
        return true;
    }

    if(num % 3 == 0 || num % 2 == 0){   //if num is not 2 or 3 check if it is product of 3 or even
        return false;
    }

    for(int i = 5; i < num; i+=2){  //skips even numbers and if the num is divisible it 
        if(num % i == 0){
            return false;
        }
    }

    return true;

    
}



void reduce_fraction(int nrtr, int denom){
   





}



//TEST CASES



//CHATGPT PROMPTs USED: 
//can you now create a test case for my boolean function that checks if a number is prime
//create test cases to check if my function to see if a number is a power of 2 in c++ works
//can you make the test cases more shorter and more simple because i got this warning : warning: 'auto' type specifier is a C++11 extension [-Wc++11-extensions]





void run_prime_Tests() {
    int testCases[][2] = {
        {2, 1}, {3, 1}, {5, 1}, {7, 1}, {11, 1}, // Primes
        {1, 0}, {4, 0}, {9, 0}, {10, 0}, {15, 0}, // Non-primes
        {0, 0}, {-1, 0}, {-7, 0}, // Edge cases
        {97, 1}, {100, 0}, {101, 1} // Large numbers
    };

    for (int i = 0; i < 14; i++) {
        int input = testCases[i][0];
        int expected = testCases[i][1];
        bool result = is_prime(input);
        cout << "Test " << (i + 1) << ": " << input << " -> "
             << (result ? "true" : "false")
             << " (Expected: " << (expected ? "true" : "false") << ") "
             << ((result == expected) ? "PASS" : "FAIL") << endl;
    }
}


void run_pow_2_Tests() {
    int testCases[][2] = {
        {1, 1}, {2, 1}, {4, 1}, {8, 1}, {16, 1},  // Powers of 2
        {0, 0}, {3, 0}, {5, 0}, {6, 0}, {9, 0},   // Non-powers of 2
        {-1, 0}, {-2, 0}, {-4, 0},               // Negative numbers
        {1024, 1}, {1023, 0}, {2048, 1}          // Large numbers
    };
    
    cout << "test for non loop" << endl;
    for (int i = 0; i < 13; i++) {
        int input = testCases[i][0];
        int expected = testCases[i][1];
        bool result = is_power_of_2_non_loop(input);
        cout << "Test " << (i + 1) << ": " << input << " -> "
             << (result ? "true" : "false")
             << " (Expected: " << (expected ? "true" : "false") << ") "
             << ((result == expected) ? "PASS" : "FAIL") << endl;
    }
    cout << "test for  loop" << endl;
    for (int i = 0; i < 13; i++) {
        int input = testCases[i][0];
        int expected = testCases[i][1];
        bool result = is_pow_of_2_loop(input);
        cout << "Test " << (i + 1) << ": " << input << " -> "
             << (result ? "true" : "false")
             << " (Expected: " << (expected ? "true" : "false") << ") "
             << ((result == expected) ? "PASS" : "FAIL") << endl;
    }
}


int main(){


    //run_prime_Tests();
    run_pow_2_Tests();
   

    return 0;
}
