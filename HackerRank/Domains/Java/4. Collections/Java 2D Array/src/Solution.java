import java.util.Scanner;

public class Solution {

	public static int max(int a, int b) {
		return a > b ? a : b;
	}

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = 6;
		int[] X = { -1, -1, -1, 1, 1, 1 };
		int[] Y = { -1, 0, 1, -1, 0, 1 };
		int[][] a = new int[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = in.nextInt();
			}
		}
		int maxSum = -63;
		for (int i = 1; i < n - 1; i++) {
			for (int j = 1; j < n - 1; j++) {
				int sum = a[i][j];
				for (int k = 0; k < 6; k++) {
					int x = i + X[k];
					int y = j + Y[k];
					if (x >= 0 && x < n && y >= 0 && y < n)
						sum += a[x][y];
				}
				maxSum = max(maxSum, sum);
			}
		}
		System.out.println(maxSum);
	}
}
