// Q10) WAP in java to find the saddle point coordinates in a given matrix. A Saddle Point 
//     is an element of the matrix, which is the minimum element in its row and the 
//     maximum in its column.



class SaddlePoint
{
	static boolean findSaddlePoint(int mat[][ ], int n)
	{
		for (int i = 0; i < n; i++)
		{
			int min_row = mat[i][0], col_ind = 0;
			for (int j = 1; j < n; j++)
			{
				if (min_row > mat[i][j])
				{
					min_row = mat[i][j];
					col_ind = j;
				}
			}
	
			int k;
			for (k = 0; k < n; k++)
	
				if (min_row < mat[k][col_ind])
					break;
	
			if (k == n)
			{
			System.out.println("Value of Saddle Point " + min_row);
			return true;
			}
		}
	
		return false;
	}
	
	public static void main(String[] args) 
	{
		int mat[][] = {{1, 2, 3},
					{4, 5, 6},
					{7, 8, 9}};
		
		int n = 3;
		if (findSaddlePoint(mat, n) == false)
			System.out.println("No Saddle Point ");
	}
}
