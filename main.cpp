#include <iostream>

using namespace std;

int main()
{
   int sum_two_matrices;
    cout<<"Choose one of these pleaase?\n\n";
        cout<<"1.Sum of two matrices\n2.Multi of two matrices\n\n";
        cout<<"Enter the selected number here : ";
            cin>>sum_two_matrices;
            cout<<endl;

                switch (sum_two_matrices)
                {
                case 1:
                    {
                    int row,col,row_col;
                        cout<<"Important:\n*Before starting, please note that matrix indices start at zero.\n\n";
                            cout<<"Row:";
                            cin>>row;
                            cout<<"Column:";
                            cin>>col;
                            row_col=row*col;
                            cout<<endl;

                    int MatrixA[row][col],MatrixB[col][col],MatrixC[row][col];


//                                                      **MatrixA**

                            cout<<"Enter number of MarixA please : \n";

                          for (int k=1;k<=row_col;)
                           {
                              for (int i=0;i<row;i++)
                               {
                                   for (int j=0;j<col;j++)
                                    {
                                        cout<<k<<".["<<i<<"]["<<j<<"]: ";
                                        cin>>MatrixA[i][j];
                                        k++;
                                    }
                               }
                            }//read MatrixA
                           cout<<endl;

//                                                      **MatrixB**

                            cout<<"Enter number of MarixB please : \n";

                           for (int k=1;k<=row_col;)
                            {
                               for (int i=0;i<row;i++)
                                {
                                   for (int j=0;j<col;j++)
                                    {
                                        cout<<k<<".["<<i<<"]["<<j<<"]: ";
                                        cin>>MatrixB[i][j];
                                        k++;
                                    }
                                }
                            }//read MatrixB
//                                                      **MatrixC**

                           for (int i=0;i<row;i++)
                            {
                                for (int j=0;j<col;j++)
                                    MatrixC[i][j]=MatrixA[i][j]+MatrixB[i][j];

                            }//MatrixA + MatrixB
                            cout<<endl;

                            cout<<"Sum of MatrixA and MatrixB = "<<endl;

                             for (int i=0;i<row;i++)
                            {
                                for (int j=0;j<col;j++)
                                    cout<<MatrixC[i][j]<<'\t';
                                    cout<<endl;

                            }//print MatrixC

                    }break;//end of case 1

                case 2:
                    {
                        int row,col,row_col;
                        cout<<"Important:\n*Before starting, please note that matrix indices start at zero.\n\n";
                            cout<<"Row:";
                            cin>>row;
                            cout<<"Column:";
                            cin>>col;
                            row_col=row*col;
                            cout<<endl;

                    int MatrixA[row][col],MatrixB[col][col],MatrixC[row][col];

//                                                      **MatrixA**

                            cout<<"Enter number of MarixA please : \n";

                          for (int k=1;k<=row_col;)
                          {
                              for (int i=0;i<row;i++)
                               {
                                   for (int j=0;j<col;j++)
                                    {
                                        cout<<k<<".["<<i<<"]["<<j<<"]: ";
                                        cin>>MatrixA[i][j];
                                        k++;
                                    }
                               }
                           }//read MatrixA
                           cout<<endl;

//                                                      **MatrixB**

                            cout<<"Enter number of MarixB please : \n";

                           for (int k=1;k<=row_col;)
                           {
                               for (int i=0;i<row;i++)
                               {
                                   for (int j=0;j<col;j++)
                                    {
                                        cout<<k<<".["<<i<<"]["<<j<<"]: ";
                                        cin>>MatrixB[i][j];
                                        k++;
                                    }
                               }
                           }//read MatrixB
                           cout<<endl;
//                                                      **MatrixC**

                           for (int i=0; i<row; i++)
                            {
                               for (int j = 0; j < col; j++)
                               {
                                   MatrixC[i][j] = 0;
                                       for (int m=0;m<col;m++)
                                           MatrixC[i][j] += MatrixC[i][m] * MatrixB[m][j];
                               }
                            }//MatrixA x MatirxB

                              cout<<"Multi of MatrixA and MatrixB = "<<endl;

                           for (int i=0;i<row;i++)
                            {
                                for (int j=0;j<col;j++)
                                    cout<<MatrixC[i][j]<<'\t';
                                    cout<<endl;
                            }//print MatrixC

                    }break;//end of case 2

                default :
                    {
                        cout << "The number is invalid!";

                    }//end of defualt

                }//end of switch

    return 0;
}
