class MyCalculator implements AdvancedArithmetic {

	@Override
	public int divisorSum(int n) {
		int count = 0;
		int i = 1;
		while (i * i < n) {
			if (n % i == 0) {
				count += i;
				count += n / i;
			}
			i++;
		}
		if (i * i == n)
			count += i;
		return count;
	}

}
