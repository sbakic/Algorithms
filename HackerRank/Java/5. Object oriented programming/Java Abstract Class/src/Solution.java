import java.util.Scanner;

abstract class Book {
	String title;

	abstract void setTitle(String s);

	String getTitle() {
		return title;
	}
}

class MyBook extends Book {
	void setTitle(String s) {
		title = s;
	}
}

public class Solution {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String title = in.nextLine();
		MyBook novel = new MyBook();
		novel.setTitle(title);
		System.out.println("The title is: " + novel.getTitle());

	}
}
