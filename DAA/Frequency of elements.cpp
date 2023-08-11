#include <iostream> 
using namespace std;

int main()
{
	int n;
	cout<<"Enter the length of array: "<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element of array: "<<endl; 
		cin>>arr[i];
	}
	int freq = 1; 
	int idx = 1;
	int element = arr[0]; 
	while (idx < n)
	{
		if (arr[idx - 1] == arr[idx])
		{
			freq++; 
			idx++;
		}
		else
		{
			cout << element << " Frequency of This Element is: " << freq << endl; element = arr[idx];
			idx++;
			freq = 1;
		}
	}
	cout << element << " Frequency of This Element is: " << freq <<endl;
}
