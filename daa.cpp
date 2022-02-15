// C++ program to find out execution time of
// of functions
#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>
using namespace std;
using namespace std::chrono;

// For demonstration purpose, we will fill up
// a vector with random integers and then sort
// them using sort function. We fill record
// and print the time required by sort function
int main()
{   int n ,a;
    int flag=0;
    printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array\n");
	for(int i=0;i<n;i++)
	{       scanf("%d",&arr[i]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&a);

	for(int i=0;i<n;i++)
	{	if(arr[i]==a)
		{	flag=1;
			printf("Found at %d location\n",i+1);
        }
	}
	if(flag==0)
            printf("not found");


	vector<int> values(10000);
	auto f = []() -> int { return rand() % 10000; };
	generate(values.begin(), values.end(), f);

	auto start = high_resolution_clock::now();
	sort(values.begin(), values.end());
	auto stop = high_resolution_clock::now();

	auto duration = duration_cast<microseconds>(stop - start);

	cout << "Time taken by function: "
		<< duration.count() << " microseconds" << endl;

	return 0;
}
