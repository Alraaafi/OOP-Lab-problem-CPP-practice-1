#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,i,j,k=2;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1;j<=n*2-i*2; j++) cout<<" ";
        for(j=1;j<=i*2-1; j++)
        {

           cout<<left<<setw(4)<<65;

        }
        cout<<endl;
    }



    //patent by ©Alraaafi
}
