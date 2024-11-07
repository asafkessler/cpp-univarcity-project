#include <iostream>
#include <vector>

using namespace std;

int main()
{
	auto strings = {"one", "two", "three"};
	for (auto t : strings){
		cout << t << endl;
	}


	int *p1, *p2;
	int arr[] = { 1, 2, 3 };
	p1 = &arr[0];
	p2 = &arr[1];

	int y = *(p1 + 1);
	y = *(p2 - 1);
	//y = *(p1 * p2);


}

int xmain() {
	//std::vector<int> v = { 0, 1, 2, 3, 4, 5 };

	int v[] = { 1, 2, 3, 4, 5 };

	for ( int i : v) 
		std::cout << i << ' ';
	std::cout << '\n';

	for (const int& i : v) // access by const reference
		std::cout << i << ' ';
	std::cout << '\n';

	for (auto i : v) // access by value, the type of i is int
		std::cout << i << ' ';
	std::cout << '\n';

	for (auto&& i : v) // access by forwarding reference, the type of i is int&
		std::cout << i << ' ';
	std::cout << '\n';

	const auto& cv = v;

	for (auto&& i : cv) // access by f-d reference, the type of i is const int&
		std::cout << i << ' ';
	std::cout << '\n';

	for (int n : {0, 1, 2, 3, 4, 5}) // the initializer may be a braced-init-list
		std::cout << n << ' ';
	std::cout << '\n';

	int a[] = { 0, 1, 2, 3, 4, 5 };
	for (int n : a) // the initializer may be an array
		std::cout << n << ' ';
	std::cout << '\n';

	for (int n : a)
		std::cout << 1 << ' '; // the loop variable need not be used
	std::cout << '\n';

	return 1;

}
