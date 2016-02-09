import java.util.Scanner;

class Solution {

	public static void main(String[] argh) {
		Scanner in = new Scanner(System.in);
		while (in.hasNext()) {
			String IP = in.next();
			System.out.println(IP.matches(new myRegex().pattern));
		}
		in.close();
	}
}