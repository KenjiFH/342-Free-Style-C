#include <iostream>

static int binary_search(const int *data, int length, int target){
     
    int L = 0;
    int R = length -1;

    while(L <= R){
        int mid = (L+R)/2;

        if(data[mid] == target){
            return mid;
        } else if(data[mid] < target){
            L = mid + 1;
        } else{
            R = mid - 1;
        }


    }
    

    return -1;




}



