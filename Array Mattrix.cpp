#include<iostream>
#include<vector>

using namespace std;

void AddMat()
{
    int row1,column1;
    int row2,column2;



    do
    {
        cout<<"Enter Row & Column numbers of A:";
        cin>>row1>>column1;

        cout<<"Enter Row & Column numbers of B:";
        cin>>row2>>column2;

        if((row1 != row2) || (column1 != column2))
        {
            cout<<"row and Column of A & B must need to be equal"<<endl ;
            cout<<"Please Enter Again."<<endl;
        }
    }while((row1 != row2) || (column1 != column2));

     //vector<vector<int> > A(row1, vector<int>(column1));
    //vector<vector<int> > B(row2, vector<int>(column2));
    int A[row1][column1];
    int B[row2][column2];

    cout << "Enter The Value of Matrix A"<<endl;
    for(int i=0; i<row1 ; i++)
    {
        for(int j=0 ; j<column1 ; j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"]:";
            cin>>A[i][j];
        }
    }

     cout << "Enter The Value of Matrix B"<<endl;
    for(int i=0; i<row2 ; i++)
    {
        for(int j=0 ; j<column2 ; j++)
        {
            cout<<"B["<<i+1<<"]["<<j+1<<"]:";
            cin>>B[i][j];
        }
    }

    cout << "Matrix A:"<<endl;

    for(int i=0; i<row1 ; i++)
    {
        for(int j=0 ; j<column1 ; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << "Matrix B:"<<endl;

    for(int i=0; i<row2 ; i++)
    {
        for(int j=0 ; j<column2 ; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix A+B:"<<endl;

    for(int i=0; i<row1 ; i++)
    {
        for(int j=0 ; j<column2 ; j++)
        {
            cout<<(double)A[i][j]+(double)B[i][j]<<" ";

        }
        cout<<endl;
    }

}

void SubMat()
{
    int row1,column1;
    int row2,column2;



    do
    {
        cout<<"Enter Row & Column numbers of A:";
        cin>>row1>>column1;

        cout<<"Enter Row & Column numbers of B:";
        cin>>row2>>column2;

        if((row1 != row2) || (column1 != column2))
        {
            cout<<"row and Column of A & B must need to be equal"<<endl ;
            cout<<"Please Enter Again."<<endl;
        }
    }while((row1 != row2) || (column1 != column2));

     //vector<vector<int> > A(row1, vector<int>(column1));
    //vector<vector<int> > B(row2, vector<int>(column2));
    int A[row1][column1];
    int B[row2][column2];

    cout << "Enter The Value of Matrix A"<<endl;
    for(int i=0; i<row1 ; i++)
    {
        for(int j=0 ; j<column1 ; j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"]:";
            cin>>A[i][j];
        }
    }

     cout << "Enter The Value of Matrix B"<<endl;
    for(int i=0; i<row2 ; i++)
    {
        for(int j=0 ; j<column2 ; j++)
        {
            cout<<"B["<<i+1<<"]["<<j+1<<"]:";
            cin>>B[i][j];
        }
    }

    cout << "Matrix A:"<<endl;

    for(int i=0; i<row1 ; i++)
    {
        for(int j=0 ; j<column1 ; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << "Matrix B:"<<endl;

    for(int i=0; i<row2 ; i++)
    {
        for(int j=0 ; j<column2 ; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix A-B:"<<endl;

    for(int i=0; i<row1 ; i++)
    {
        for(int j=0 ; j<column2 ; j++)
        {
            cout<<(double)A[i][j]-(double)B[i][j]<<" ";

        }
        cout<<endl;
    }


}

void TransMat()
{
    int row1,column1;

    cout<<"Enter Row & Column number:";
    cin>>row1>>column1;

    int A[row1][column1];
    int C[column1][row1];

    cout<<"Enter value of Matrix A:"<<endl;
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1; j++)
        {
          cout<<"A["<<i+1<<"]["<<j+1<<"]:";
          cin>>A[i][j];
        }
    }


    cout<<"Given Matrix A"<<endl;

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1; j++)
        {
          cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Transpose Matrix A"<<endl;

    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1; j++)
        {
          C[j][i]=A[i][j];
        }

    }
   for(int i=0;i<row1;i++)
    {
        for(int j=0;j<column1; j++)
        {
          cout<<C[i][j]<<" ";
        }
        cout<<endl;

    }
}

void MultiMat()
{
    int row1,column1;
    int row2,column2;

    do
    {
      cout<<"Input Row and Column for A matrix: ";
      cin>>row1>>column1;

      cout<<"Input Row and Column for B matrix: ";
      cin>>row2>>column2;

      if(column1 != row2)
      {
        cout<<"Column of A matrix & Row of B matrix need to be same."<<endl;
        cout<<"Please Enter Again Carefully"<<endl;
      }

    }while(column1 != row1);

    int A[row1][column1];
    int B[row2][column2];
    double C[row1][column2];

    cout << "Enter The Value of Matrix A"<<endl;
    for(int i=0; i<row1 ; i++)
    {
        for(int j=0 ; j<column1 ; j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"]:";
            cin>>A[i][j];
        }
    }

    cout << "Enter The Value of Matrix B"<<endl;
    for(int i=0; i<row2 ; i++)
    {
        for(int j=0 ; j<column2 ; j++)
        {
            cout<<"B["<<i+1<<"]["<<j+1<<"]:";
            cin>>B[i][j];
        }
    }


    for(int i=0;i<row1;i++)
    {
      for(int j=0 ; j<column2 ;j++)
      {
          for(int k=0 ; k<column1 ; k++)
          {
              C[i][j] += (double)A[i][k] * (double)B[k][j];
          }
      }
    }

    cout << "Matrix A:"<<endl;

    for(int i=0; i<row1 ; i++)
    {
        for(int j=0 ; j<column1 ; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << "Matrix B:"<<endl;

    for(int i=0; i<row2 ; i++)
    {
        for(int j=0 ; j<column2 ; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << "Matrix A*B :"<<endl;

    for(int i=0; i<row1 ; i++)
    {
        for(int j=0 ; j<column2 ; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

}



int main()
{
   char choice;

   cout<< "\t\t\tWelcome to Matrix Calculator"<<endl;
   cout<<"\t\t      --------------------------------"<<endl;

    do
    {
     cout<<"Enter A for Matrix Addition"<<endl;
     cout<<"Enter S for Matrix Subtraction "<<endl;
     cout<<"Enter T for Transpose of Matrix"<<endl;
     cout<<"Enter M for Matrix Multiplication "<<endl;
     cout<<"Enter E for Exit"<<endl;

     cin>>choice;


     switch(choice)
     {
     case 'A':
        AddMat();
        break;
     case 'S':
        SubMat();
        break;
     case 'T':
        TransMat();
        break;
     case 'M':
        MultiMat();
        break;
     case 'E':
         cout<<"Thank You For Using This Program..";
         return 0; // for exit

     default:
         cout<<"You maybe pressed the wrong key"<<endl;
         cout<<"Please Enter The Right Key Again"<<endl;
         cout<<endl<<endl;
     }

    }while(choice != 'E');



   return 0;

}

