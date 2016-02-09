import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String s = in.nextLine();
		s = s.replace(".", " ");
		s = s.replace("!"," ");
		s = s.replace(",", " ");
		s = s.replace("?", " ");
		s = s.replace("\\", " ");
		s = s.replace("'", " ");
		s = s.replace("@", " ");
		s = s.replace("_", " ");
		Pattern pattern = Pattern.compile("\\w+");
		Matcher numberOfWords = pattern.matcher(s);
		Matcher matcher = pattern.matcher(s);
		int words = 0;
		while (numberOfWords.find()) {
			words++;
		}
		System.out.println(words);
		while (matcher.find()) {
		    System.out.println(matcher.group());
		}
		in.close();
	}

}
