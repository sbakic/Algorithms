
class myCalculator {

	public String power(int n, int p) {
		int result = 1;
		if (n < 0 || p < 0) {
			try {
				throw new Exception("n and p should be non-negative");
			} catch (Exception e) {
				return e.toString();
			}
		}
		else {
			for (int i = 0; i < p; i++) {
				result *= n;
			}
		}
		return Integer.toString(result);
	}

}