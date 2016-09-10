import java.util.Arrays;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String a = in.next();
		String b = in.next();
		char[] stringA = a.toLowerCase().toCharArray();
		char[] stringB = b.toLowerCase().toCharArray();
		Arrays.sort(stringA);
		Arrays.sort(stringB);
		a = new String(stringA);
		b = new String(stringB);
		System.out.println(a.compareTo(b) == 0 ? "Anagrams" : "Not Anagrams");
	}
}
