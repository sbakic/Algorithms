import java.math.BigDecimal;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		LinkedList<BigDecimal> a = new LinkedList<BigDecimal>();
		for (int i = 0; i < n; i++) {
			a.add(in.nextBigDecimal());
		}
		Collections.sort(a, Collections.reverseOrder());
		for (int i = 0; i < a.size(); i++) {
			if (a.get(i).compareTo(BigDecimal.ZERO) != 0 && a.get(i).toString().charAt(0) == '-' && a.get(i).toString().charAt(1) == '0') {
				System.out.println("-" + a.get(i).toString().substring(2));
				continue;
			}
			if (a.get(i).compareTo(BigDecimal.ZERO) != 0 && a.get(i).toString().charAt(0) == '0') {
				System.out.println(a.get(i).toString().substring(1));
			} else if (a.get(i).toString().length() > 1 && a.get(i).toString().contains("E")) {
				System.out.println(a.get(i).toPlainString().substring(1));
			} else {
				System.out.println(a.get(i));
			}
		}
	}
}
