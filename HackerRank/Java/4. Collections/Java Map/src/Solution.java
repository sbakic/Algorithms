import java.util.HashMap;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		HashMap<String, Integer> a = new HashMap<String, Integer>();
		while (n-- > 0) {
			in.nextLine();
			String s = in.nextLine();
			int number = in.nextInt();
			a.put(s, number);
		}
		String s = in.nextLine();
		while (in.hasNextLine()) {
			s = in.nextLine();
			if (a.get(s) != null) {
				System.out.println(s + "=" + a.get(s));
			} else
				System.out.println("Not found");
		}
	}

}
