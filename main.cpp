#include <iostream>
#include "vector"

std::vector<int> arr={-100,-50, -5, 1, 10, 15};

void print(std::vector<int> arr){
    for(int i=0;i<arr.size();++i){
        std::cout<<arr[i]<< " ";
    }
    std::cout<<std::endl;
}

void sort(){
    for(int k=0;k<arr.size();++k) {
        for (int i = 0; i < arr.size()-1; ++i) {
            if (abs(arr[i])>abs(arr[i+1])) std::swap(arr[i],arr[i+1]);
        }
        if (arr[0]>0) break;
    }
}

int main() {
    print(arr);
    sort();
    print(arr);
}
