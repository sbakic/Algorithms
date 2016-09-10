import java.util.Scanner;

public class Solution {

	static int B;
	static int H;
	static boolean flag = false;

	static {
		Scanner in = new Scanner(System.in);
		B = in.nextInt();
		H = in.nextInt();
		if (B <= 0 || H <= 0) {
			System.out
					.println("java.lang.Exception: Breadth and height must be positive");
		} else
			flag = true;
		in.close();
	}

	public static void main(String[] args) {
		if (flag) {
			System.out.print(B * H);
		}
	}

}
