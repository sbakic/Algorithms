import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.next();
		System.out.println(s.compareTo(new StringBuilder(s).reverse().toString()) == 0 ? "Yes" : "No");
	}
}
