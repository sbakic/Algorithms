import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;

public class Solution {
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		int k = in.nextInt();
		int n = s.length();
		LinkedList<String> a = new LinkedList<String>();
		for (int i = 0; i <= n - k; i++) {
			a.add(s.substring(i, i + k));
		}
		Collections.sort(a);
		System.out.println(a.getFirst() + '\n' + a.getLast());
		in.close();
	}

}
