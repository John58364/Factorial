
class factorial
{
public:
	unsigned long long coeff(unsigned long long entern, unsigned long long enterk)
	{
		// Create the public vairables
		unsigned long long fact = 1;
		unsigned long long fact2 = 1;
		unsigned long long fact3 = 1;
		n = entern;
		k = enterk;
		// If k is 0, the coefficient will be 1
		if(k == 0)
		{
			co = 1;
		}
		else
		{
		// Find the factorial of n
		while(n != 0)
		{
			fact *= n;
			n--;
		}
		// Find the factorial of k
		while(k != 0)
		{
			fact2 *= k;
			k--;
		}
		kn = entern - enterk;
		// Find the factorial of n - k
		while(kn != 0)
		{
			fact3 *= kn;
			kn--;
		}

		// Compute the coefficient
		co = fact / (fact2 * fact3);
		}
		return co;
	}
private:
	unsigned long long k;
	unsigned long long n;
	unsigned long long kn;
	unsigned long long co;
};
