#include<iostream>
int main(){
    int num_arr[2] = {3,4};
    //going to try for-each loop
    for (int x : num_arr){
    //. (type ele. : name)
        std::cout<<x<<'\n';
    }
    return 0;
}