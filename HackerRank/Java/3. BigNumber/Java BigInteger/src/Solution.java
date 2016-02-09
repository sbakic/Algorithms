import java.math.BigInteger;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		BigInteger a = in.nextBigInteger();
		BigInteger b = in.nextBigInteger();
		BigInteger c = BigInteger.valueOf(0);
		System.out.println(a.add(b));
		System.out.println(c.add(a).multiply(b));
	}

}
