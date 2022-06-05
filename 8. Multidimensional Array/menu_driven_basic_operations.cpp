/* 1. Write a menu driven C++ program to do following operation on two dimensional array A of size m x n. 
You should use user-defined functions which accept 2-D array A, and its size m and n as arguments. 
The options are:

To input elements into matrix of size m x n
To display elements of matrix of size m x n
Sum of all elements of matrix of size m x n
To display row-wise sum of matrix of size m x n
To display column-wise sum of matrix of size m x n
To create transpose of matrix B of size n x m */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout<<"enter no of rows and columns: ";
    cin>>m>>n;

    int A[m][n];

    int no;

    cout<<"chose options from below mentioned:"<<endl<<"1. input elements into matrix"<<endl
    <<"2. display elements of matrix"<<endl<<"3. find sum of all elements"<<endl
    <<"4. find row wise sum of matrix"<<endl<<"5. find column wise sum of matrix"<<endl
    <<"6. find transpose of matrix"<<endl;

    cin>>no;

    switch (no)
    {
        case 1:
        {
            cout<<"enter elements into matrix"<<endl;

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin>>A[i][j];
                }              
            }
                    
            break;
        }
        case 2:
        {
            cout<<"enter elements into matrix"<<endl;

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin>>A[i][j];
                }              
            }

            cout<<"elements of marix are"<<endl;

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<A[i][j];
                }
                cout<<endl;
            }
            
            break;
        }
        case 3:
        {
            cout<<"enter elements into matrix"<<endl;

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin>>A[i][j];
                }              
            }

            int sum=0;

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    sum+=A[i][j];
                }
            }
            
            cout<<"sum of all elements is "<<sum;

            break;
        }
        case 4:
        {
            cout<<"enter elements into matrix"<<endl;

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin>>A[i][j];
                }              
            }
            
            int Rsum;

            for (int i = 0; i < m; i++)
            {
                Rsum=0;

                for (int j = 0; j < n; j++)
                {
                    Rsum+=A[i][j];
                }
                
                cout<<"sum of "<<i+1<<" row= "<<Rsum<<endl;
            }
            
            break;
        }
        case 5:
        {
            cout<<"enter elements into matrix"<<endl;

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin>>A[i][j];
                }              
            }

            int Csum;

            for (int i = 0; i < n; i++)         
            {   
                Csum=0;

                for (int j = 0; j < m; j++)       /*is same as for(int j=0; j<col; j++)
                                                                for(int i=0; i<row; i++) 
                                                                    Csum+=A[i][j]; */                  
                {                                
                    Csum+=A[j][i];
                }
                
                cout<<"sum of "<<i+1<<" column ="<<Csum<<endl;
            }
                    
            break;
        }
        case 6:
        {
            cout<<"enter elements into matrix"<<endl;

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cin>>A[i][j];
                }              
            }

            int B[m][n];

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    B[i][j]=A[j][i];
                }          
            }

            cout<<"transpose matrix is"<<endl;
            

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<B[i][j];
                }
                
                cout<<endl;
            }
            
            break;
        }
        default:
        {
            cout<<"invalid character";
            break;
        }

    }

    return 0;
}