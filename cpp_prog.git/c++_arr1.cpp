#include<iostream>

int main()

{
    std::string cars[4] = {"volvo","honda","suzuki","ford"};
    //type name_of_array[no. of elements] = {.....}
    for (int i=0;i<5;i++)
    {
        std::cout<<cars[i]<<'\n';
    }
    return 0;
}