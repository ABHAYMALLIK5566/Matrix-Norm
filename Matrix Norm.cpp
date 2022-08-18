/*Norm is the square root of
the sum of squares of all elements in the matrix.*/

#include<iostream>
#include<cmath>
using namespace std;

int m,n,sum=0;

void matrix()
{
    int a[m][n],i,j,k,l;
    cout<<"Enter array elements:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix is:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(k=0;k<m;k++)
    {
        for(l=0;l<n;l++)
        {
            sum += pow(a[k][l],2);
        }
    }
}

int main()
{
    cout<<"Which matrix do you want to create?\na * b\na = ";
    cin>>m;
    cout<<"b = ";
    cin>>n;

    matrix();
    cout<<"The norm of matrix is "<<sum<<"."<<endl;
    return 0;
}