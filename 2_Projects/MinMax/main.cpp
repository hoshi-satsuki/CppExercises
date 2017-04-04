#include <iostream>

using std::cout;
using std::cin;


int main()
{
//Number of bytes for int, long, long long
    cout<<"number of bytes int: "<<sizeof(int)<<'\n';
    cout<<"number of bytes long: "<<sizeof(long)<<'\n';
    cout<<"number of bytes longlong: "<<sizeof(long long)<<'\n';
    cout<<"\n\n\n";



//largest number for unsigned int, long, long long
    unsigned int ui {0u};
    unsigned long ul {0ul};
    unsigned long long ull{0ull};
    cout<<"Maximum unsigned int: "<<~ui<<'\n';
    cout<<"Maximum unsigned long: "<<~ul<<'\n';
    cout<<"Maximum unsigned long long: "<<~ull<<'\n';
//smalles and largest number for int, long, long long
    unsigned int ui2=~ui>>1;
    unsigned long ul2=~ul>>1;
    unsigned long long ull2=~ull>>1;
    cout<<"Maximum int: "<<ui2<<'\n';
    cout<<"Maximum long: "<<ul2<<'\n';
    cout<<"Maximum long long: "<<ull2<<'\n';
    int i{0};
    long il{0l};
    long long ill{0ll};
    int i2=~i<<(sizeof(int)*8-1);
    long il2=~il<<(sizeof(long)*8-1);
    long long ill2=~ill<<(sizeof(long long)*8-1);
    cout<<"Minimum int: "<<i2<<'\n';
    cout<<"Minimum long: "<<il2<<'\n';
    cout<<"Minimum long long: "<<ill2<<'\n';

}


