#include<iostream>
using namespace std;
/*
You are given a table with m rows and n columns. Each cell is colored with white or black. Considering the shapes created by black cells, what is the maximum border of these shapes? Border of a shape means the maximum number of consecutive black cells in any row or column without any white cell in between.

A shape is a set of connected cells. Two cells are connected if they share an edge. Note that no shape has a hole in it.
*/
int main(){

  int test;
  cin>> test;
  for(int t =0;t<test;t++)
  {
      int m,n;
      cin>>m>>n;
	  int col_max[n] = {0};
	  int global_max = 0;
	  char c;
      for(int i=0;i<m;i++)
      {
		  int row_max = 0;
		  int curr = 0;
          for(int j=0;j<n;j++){
            cin>>c;
			if(c == '#'){
				if(++curr > global_max){
					global_max = curr;
				}
				if(col_max[j]++ > global_max){
					global_max = col_max[j];
				}
			}else{
				curr = 0;
				col_max[j] = 0;
			}
          }
      }
	  cout<<global_max<<'\n';
  }
}