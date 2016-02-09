import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Solution {

	public static void main(String[] args) {
		try {
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			String line;
			int i = 1;
			while ((line = br.readLine()) != null) {
				System.out.println(i + " " + line);
				i++;
			}
		} catch (Exception e) {

		}
	}

}
