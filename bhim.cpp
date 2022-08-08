#include <iostream>
using namespace std;

int main(){

	cout << "Calculating the sum of even numbers from 1 to 10,000." << endl << endl;

	int sum = 0;
	int countEven = 1;

	for(int e=2; e<=10000; e++){
		if(e%2 == 0){
			sum = sum + e;
			countEven++;
	}
}

	cout << "The number of even numbers available in the given range is:  " << countEven << endl << endl;
	cout << "The sum of the even numbers is: " << sum << endl << endl;

	float avg;
	avg = sum/countEven;
	cout << "The mean is therefore calculated as: " << avg << endl;

return 0;
}
