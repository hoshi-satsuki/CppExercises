#include <iostream>
#include<vector>


void printVector(std::vector<int>& myVector){
    for(auto v:myVector){
        std::cout<<v<<' ';
    }
    std::cout<<'\n';
}

void bubblesort(std::vector<int>& myVector){
    bool exchanged=true;
    do{
        exchanged=false;
        for(unsigned int j=1; j<myVector.size(); j++){
            if(myVector[j]<myVector[j-1]){
                int temp=myVector[j-1];
                myVector[j-1]=myVector[j];
                myVector[j]=temp;
                exchanged=true;
            }
        }
    }while(exchanged);
}
int main()
{
    std::vector<int> iV {100,0,22,-3,44,6,-9,-2,1,8,9};
    //std::vector<int> iV {1200,1200,38,1,0,3,99,1010,4};
    //std::vector<int> iV {};
    std::cout<<"original vector: ";
    printVector(iV);
    bubblesort(iV);
    std::cout<<"sorted vector: ";
    printVector(iV);
    return 0;
}
