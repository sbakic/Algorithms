import java.util.ArrayList;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		ArrayList<ArrayList<Integer>> a = new ArrayList<ArrayList<Integer>>();
		for (int i = 0; i < n; i++) {
			int d = in.nextInt();
			ArrayList<Integer> b = new ArrayList<Integer>();
			a.add(b);
			while (d-- > 0) {
				int x = in.nextInt();
				b.add(x);
			}
		}
		int q = in.nextInt();
		while (q-- > 0) {
			int x = in.nextInt();
			int y = in.nextInt();
			ArrayList<Integer> row = a.get(x - 1);
			if (row.size() > y - 1) {
				System.out.println(row.get(y - 1));
			} else {
				System.out.println("ERROR!");
			}
		}
	}

}
