#include <iostream>
#include <vector>
using namespace std;
int minchange(std::vector<int> coins, int sum)
{
	int len = coins.size() - 1;
	std::vector<int> minCoins{};
	for (int i = len; i >= 0; i--)
	{
		while (sum >= coins[i])
		{
			sum -= coins[i];
			minCoins.push_back(coins[i]);
		}
	}
	return minCoins.size();
}

int main(int argc, char** argv)
{
	std::vector<int> coins{ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
	int n = 3253;
	std::cout << "minium coins: " << minchange(coins, n) << std::endl;
	return 0;
}