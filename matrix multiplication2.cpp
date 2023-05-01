#include <iostream>

using namespace std;

int main()
{
    int a[10][10],b[10][10],m[10][10];
    int r;
    int c;
    cout<<"give the row and coloumn size of first matrix "<<endl;
    cin>>r>>c;
    cout<<"give the first matrix elements"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int r1;
    int c1;
    cout<<"give the row and coloumn size of second matrix "<<endl;
    cin>>r1>>c1;
    cout<<"give second  matrix elements"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"the multiplied matrix is"<<endl;
    if(c!=r1)
    {
        printf("not valid multiplication");
    }
    else{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c1;j++)
        {
            m[i][j]=0;
            for(int k=0;k<r;k++)
            {
                m[i][j]+=(a[i][k])*(b[k][j]);
            }
        }
    }
   for(int i=0;i<r;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<m[i][j]<<"  ";
        }
        cout<<endl;
    }
    }
    return 0;
}
