import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while (t-- > 0) {
			int n = in.nextInt();
			int m = in.nextInt();
			int[] a = new int[n];
			for (int i = 0; i < n; i++) {
				a[i] = in.nextInt();
			}
			if (move(a, 0, m, n))
				System.out.println("YES");
			else
				System.out.println("NO");
		}
		in.close();
	}

	public static boolean move(int[] a, int i, int m, int n) {
		if (n <= i + m || n <= i + 1) {
			return true;
		}
		a[i] = 1;
		boolean hasEscaped = false;
		if (i + m < n && a[i + m] == 0) {
			hasEscaped = move(a, i + m, m, n);
		}
		if (!hasEscaped && i + 1 < n && a[i + 1] == 0) {
			hasEscaped = move(a, i + 1, m, n);
		}
		if (!hasEscaped && 0 <= i - 1 && a[i - 1] == 0) {
			hasEscaped = move(a, i - 1, m, n);
		}
		return hasEscaped;
	}
}