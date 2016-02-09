import java.util.Scanner;
import java.util.Stack;

public class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			String s = in.next();
			int n = s.length();
			Stack<Character> a = new Stack<Character>();
			for (int i = 0; i < n; i++) {
				if (s.charAt(i) == '[') a.push(s.charAt(i));
				else if (s.charAt(i) == '(') a.push(s.charAt(i));
				else if (s.charAt(i) == '{') a.push(s.charAt(i));
				else if (s.charAt(i) == ']' && !a.isEmpty() && a.peek() == '[') a.pop();
				else if (s.charAt(i) == ')' && !a.isEmpty() && a.peek() == '(') a.pop();
				else if (s.charAt(i) == '}' && !a.isEmpty() && a.peek() == '{') a.pop();
				else {
					a.push(s.charAt(i));
				}
			}
			if (a.isEmpty()) {
				System.out.println("true");
			} else {
				System.out.println("false");
			}
		}
	}
}
