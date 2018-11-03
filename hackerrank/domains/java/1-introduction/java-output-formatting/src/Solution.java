import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("================================");
		for (int i = 0; i < 3; i++) {
			String s = in.next();
			int a = in.nextInt();
			System.out.print(s);
			for (int j = 0; j < 15 - s.length(); j++) {
				System.out.print(" ");
			}
			System.out.println(a > 99 ? a : a > 9 ? "0" + a : "00" + a);
		}
		System.out.println("================================");
	}
}
