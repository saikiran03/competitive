#include <iostream>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	int test, cars, maxSpeed, maxCars;
	cin >> test;
	while(test--)
	{
		cin >> cars;
		int speed[cars];
		maxCars = 0;
		for(int i=0; i<cars; i++) cin >> speed[i];
		maxSpeed = speed[0];
		for(int i=0; i<cars; i++)
		{
			if(speed[i]<=maxSpeed)
			{
				maxCars++;
				maxSpeed = speed[i];
			}
		}
		cout << maxCars << endl;
	}
}