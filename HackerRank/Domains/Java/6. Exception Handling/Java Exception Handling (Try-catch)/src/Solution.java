import java.util.InputMismatchException;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		try {
			int a = in.nextInt();
			int b = in.nextInt();
			System.out.println(a / b);
		} catch (InputMismatchException e) {
			System.out.println(e.getClass().getName());
		} catch (ArithmeticException e) {
			System.out.println(e);
		}
		in.close();
	}
}
