#include<iostream>
using namespace std;
class matrix
{
int m[3][3];
  public:
  void read(void)
  {
    cout<<"enter the elements of the 3x3 matrix:\n";
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
          cout<<"m["<<i<<"]["<<i<<"] =";
          cin>>m[i][j];
        }
  }
  void display(void){
    int i,j;
    for(i=0;i<3;i++)
    {
      cout<<"\n";
       for(j=0;j<3;j++)
       {
         cout<<m[i][j]<<"\t";
       }
    }
  }
  friend matrix trans(matrix);
};
matrix trans(matrix m1)
{
  matrix m2;
  int i,j;
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      m2.m[i][j]=m1.m[j][i];
  return(m2);
}
int main()
{
matrix mat1,mat2;
  mat1.read();
  cout<<"\nyou entered the following matrix:";
  mat1.display();
  
  mat2 = trans(mat1);
  cout<<"\ntransposed matrix:";
  mat2.display();
  
  return 0;
}
/*
Output:
enter the elements of the 3x3 matrix:
m[0][0] =1 2 3
m[0][0] =m[0][0] =m[1][1] =2 3 4
m[1][1] =m[1][1] =m[2][2] =3 4 5
m[2][2] =m[2][2] =
you entered the following matrix:
1	2	3	
2	3	4	
3	4	5	
transposed matrix:
1	2	3	
2	3	4	
3	4	5	*/
  
         
      
    
