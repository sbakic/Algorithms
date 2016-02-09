import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		String[] s = new String[t];
		for (int i = 0; i < t; i++) {
			s[i] = in.next();
		}
		for (int i = 0; i < t; i++) {
			try {
				Long.parseLong(s[i]);
				try {
					Integer.parseInt(s[i]);
					try {
						Short.parseShort(s[i]);
						try {
							Byte.parseByte(s[i]);
							System.out
									.println(s[i]
											+ " can be fitted in:\n* byte\n* short\n* int\n* long");
						} catch (NumberFormatException e) {
							System.out
									.println(s[i]
											+ " can be fitted in:\n* short\n* int\n* long");
						}
					} catch (NumberFormatException e) {
						System.out.println(s[i]
								+ " can be fitted in:\n* int\n* long");
					}
				} catch (NumberFormatException e) {
					System.out.println(s[i] + " can be fitted in:\n* long");
				}
			} catch (NumberFormatException e) {
				System.out.println(s[i] + " can't be fitted anywhere.");
			}

		}
	}
}