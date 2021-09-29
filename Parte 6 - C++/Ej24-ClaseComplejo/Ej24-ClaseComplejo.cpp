#include <iostream>
using namespace std;

class Complejo{
	Private:
		double q, p;
	
	Public:
		void suma(const Complejo& a, const Complejo& b);
		void resta(const Complejo& a, const Complejo& b);
		
};

void Complejo::suma(const Complejo& a, const Complejo& b)
{
q= a.q + b.p;
p= a.q + b.p;
}

void Complejo::resta(const Complejo& a, const Complejo& b)
{
q= a.q - b.q;
p= a.p - b.p;
}



