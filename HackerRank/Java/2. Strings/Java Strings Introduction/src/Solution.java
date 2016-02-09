import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String a = in.next();
		String b = in.next();
		System.out.println(a.length() + b.length());
		System.out.println(a.compareTo(b) > 0 ? "Yes" : "No");
		a = a.substring(0, 1).toUpperCase() + a.substring(1);
		b = b.substring(0, 1).toUpperCase() + b.substring(1);
		System.out.println(a + " " + b);
	}

}
