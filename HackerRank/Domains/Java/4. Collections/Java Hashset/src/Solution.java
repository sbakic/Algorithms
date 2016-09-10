import java.util.HashSet;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		HashSet<String> a = new HashSet<String>();
		while (t-- > 0) {
			String first = in.next();
			String second = in.next();
			a.add(first + " " + second);
			System.out.println(a.size());
		}
	}
}
