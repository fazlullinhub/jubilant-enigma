#include <iostream>
#include "AllSorts.h"
using namespace std;




void Bubble_sorting(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void Selection_sorting(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_index]) {
				min_index = j;
			}
		}
		swap(arr[i], arr[min_index]);
	}
}

void Insertion_sorting(int arr[], int n) {
	int counter = 0;
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
			counter++;
			int tmp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = tmp;
		}
	}
	cout << counter << endl;
}

void Counting_sorting(int* a, int* c, int n, int k) {
	for (int i = 0; i < k; i++) {
		c[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		c[a[i]] = c[a[i]] + 1;
    }
	int i = 0;
	for (int j = 0; j < k; j++) {
		while (c[j] != 0) {
			a[i] = j;
			c[j]--;
			i++;
		}
	}
}

void Digital_sorting(int *A, int n, int b, int e)
{
	int i, j, k, * count;
	count = new int[e - b + 1];
	for (i = 0; i <= e - b; i++)
		count[i] = 0;
	for (i = 0; i < n; i++)
		count[A[i] - b]++;
	for (k = i = 0; i <= e - b; i++)
		for (j = 0; j < count[i]; j++)
			A[k++] = b + i;
	delete[] count;
}

