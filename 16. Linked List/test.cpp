#include<bits/stdc++.h>
using namespace std;

int max(int a[], int start, int end)
{
	int max=INT_MIN;

	for (int i = start; i <= end; i++)
	{
		if(a[i] > max)
			max=a[i];
	}
	return max;
}

int min(int a[], int start, int end)
{
	int min=INT_MAX;

	for (int i = start; i <= end; i++)
	{
		if(a[i] < min)
			min=a[i];
	}
	return min;
}

int main()
{
	int n;
	cin>>n;

	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	int left, right;

	for (int i = 0; i < n-1; i++)
	{
		if(a[i+1] < a[i])
		{
			left=i;
			break;
		}
	}
	
	for (int i = n-1; i > 0; i--)
	{
		if(a[i-1] > a[i])
		{
			right=i;
			break;
		}
	}
	
	int max_ele=max(a, left, right);
	int min_ele=min(a, left, right);

	for (int i = 0; i < left; i++)
	{
		if(a[i] > min_ele)
		{
			left=i;
			break;
		}
	}
	
	for (int i = right+1; i < n; i++)
	{
		if(a[i] < max_ele)
		{
			right=i;
			break;
		}
	}
	
	cout<<left<<" "<<right;

	return 0;
}




