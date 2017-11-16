	#include<iostream>
	#include<math.h>
	#define n 5
	

	using namespace std;
	
		class Matrix
	{
	private:
		int a[n][n];
		int sum[n];
		int i, j, k, c;
		long double g_m, sumg;
	public:
		void matrix_input();
		void matrix_output();
		void matrix_sorting();
		void raw_geometric_mean_and_summation();
	};
	
		void Matrix::matrix_input()
	{
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cout << "Please, enter the element [" << i+1 << ";" << j+1 << "]";
				cin >> a[i][j];
				cout << endl;
			}
		}
	}
	
		void Matrix::matrix_output()
	{
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (j == 0) cout << endl;
				cout << a[i][j] << "\t";
			}
		}
	}
	
	void Matrix::matrix_sorting()
{
  for(j = 0; j < n; j++) {
   for(k = n-1; k >=0 ; k--) {
     for(i = 0; i < k; i++)	  {
 	    if(a[i][j] < a[i+1][j])  	{
	  	  c = a[i][j];
	      a[i][j] = a[i+1][j];
	      a[i+1][j] =c;
	  	}
	  }
   }
  }
 }
	
	 void Matrix::raw_geometric_mean_and_summation()
	 {
	 cout << endl;
	 for (i = 0; i < (n - 1); i++) {
		g_m = 1;
		for (j = 0; j < n; j++) {
			if (j > i) {
				g_m *= a[i][j];
			}
		}
		g_m = pow(fabs(g_m),0.25);
		cout << "Geometric mean of " << i + 1 << " raw is " << g_m << endl;
		sumg += g_m;
		}
		cout << "Sum of geometric means is " << sumg << endl;
 }

 int main()
	{	Matrix X;
		X.matrix_input();
		cout << endl;
		cout << "Entered matrix:\n";
		X.matrix_output();
		cout << endl;
		X.matrix_sorting();
		cout <<"\n New matrix:\n";
		X.matrix_output();
		cout << endl;
		X.raw_geometric_mean_and_summation();
	}
	
