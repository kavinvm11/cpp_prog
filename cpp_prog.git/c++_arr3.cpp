#include<iostream>
int main(){
    int num[3] = {1,2,3};
    std::cout << sizeof(num)<<'\n';
    //output is 12 not 3,bcz here it is "3*sizeof(int)"
    std::cout<<sizeof(num)/sizeof(num[0])<<'\n';
    //here output is 3
    /*use this when no. of elements is not mentioned 
      and u need to find and use it in a loop*/
    return 0;
}
