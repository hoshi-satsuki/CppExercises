#include <iostream>


template <typename T>
void printTable2D(T &table){
    constexpr unsigned int NROW=sizeof(T)/sizeof(table[0]);
    constexpr unsigned int NCOL=sizeof(table[0])/sizeof(table[0][0]);
    for(unsigned int i=0;i<NROW;++i){
        for(unsigned int j=0;j<NCOL;++j){
            std::cout.width(3);
            std::cout<<table[i][j]<<' ';
        }
        std::cout<<'\n';
    }
    std::cout<<'\n';
}

template <typename T>
void printTable3D(T &table){
    constexpr unsigned int NLEV=sizeof(T)/sizeof(table[0]);
    constexpr unsigned int NROW=sizeof(table[0])/sizeof(table[0][0]);
    constexpr unsigned int NCOL=sizeof(table[0][0])/sizeof(table[0][0][0]);
    for(unsigned int k=0;k<NLEV;++k){
        for(unsigned int i=0;i<NROW;++i){
            for(unsigned int j=0;j<NCOL;++j){
                std::cout.width(3);
                std::cout<<table[k][i][j]<<' ';
            }
            std::cout<<'\n';
        }
        std::cout<<"\n\n";
    }
    std::cout<<'\n';

}

int main()
{
    int matrix[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    printTable2D(matrix);
    int table[3][2][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    printTable3D(table);
    return 0;
}
