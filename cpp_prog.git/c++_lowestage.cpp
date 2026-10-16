#include<iostream>
int main(){
    int ages[8] = {2,4,3,6,5,8,9,1};
    int low = ages[0];
    for (int i=0;i<sizeof(ages)/sizeof(ages[0]);i++){
        if (ages[i]<low){
            low = ages[i];
        }
    }
    std::cout<<"The lowest age is "<<low<<'\n';
    return 0;
}
//diary
//i made a mistake by taking low = 0
//but that way of approach is useful when we need to find the largest age and not the smallest one
//the method of taking "if (ages[i]<ages[i+1])" is also wrong bcz is the smaleest is at last there is an error
//finally the present one is correct