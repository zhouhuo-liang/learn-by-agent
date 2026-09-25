#include<iostream>
using namespace std;

struct DynArray {
	int* data;
	int size;
	int capacity;
};

void init(DynArray& a, int cap) {
	a.data = new int[cap];
	a.size = 0;
	a.capacity = cap;
}

void destroy(DynArray& a) {
	delete[] a.data;
	a.data = nullptr;
	a.size = a.capacity = 0;
}

void push_back(DynArray& a, int value) {
	if (a.size >= a.capacity) {
		int newCap = (a.capacity == 0) ? 1 : a.capacity * 2;
		int* newdata = new int[newCap];
		for (int i = 0; i < a.size; i++) {
			newdata[i] = a.data[i];
		}
		delete[] a.data;
		a.data = newdata;
		a.capacity = newCap;
	}
	a.data[a.size] = value;
	a.size++;
}

int get(DynArray& a, int i) {
	return a.data[i - 1];
}

int main() {
	DynArray nums;
	init(nums, 2);
	for (int i = 0; i < 8; i++) {
		push_back(nums, i * 10);
	}
	cout << "nums.size = " << nums.size << endl << "nums.capacity = " << nums.capacity << endl;
	for (int i = 0; i < nums.size; i++) {
		cout << nums.data[i] << ' ';
	}
	int inum = get(nums,3);
	cout <<endl<<"������Ԫ�أ�"<< inum << endl;
	destroy(nums);
	return 0;
}