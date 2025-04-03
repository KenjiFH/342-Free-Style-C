#include <iostream>





void bubble_sort(int *data, int length) {


    for(int i =0; i < length -1; i++){
        for(int j = 0; j < length - i - 1; j++){
           if(data[j] > data[j+ 1]){
            std::swap(data[j], data[j+1]);
           }
        }
    }

}




