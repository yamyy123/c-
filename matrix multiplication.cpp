#include <iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],m[10][10];
    int r;
    int c;
    cout<<"give the row and coloumn size "<<endl;
    cin>>r>>c;
    cout<<"give the first matrix elements"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"give second first matrix elements"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"the multiplied matrix is"<<endl;
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            m[i][j]=0;
            for(int k=0;k<c;k++)
            {
                m[i][j]+=(a[i][k])*(b[k][j]);
            }
        }
    }
   for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<m[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
