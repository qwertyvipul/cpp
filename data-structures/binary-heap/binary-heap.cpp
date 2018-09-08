#include<iostream>
#include<vector>
using namespace std;

class BinaryHeap{
private:
	vector<int> heap;
public:
	vector<int> getHeap();
	int leftChild(int parent);
	int rightChild(int parent);
	int parent(int child);
	int getSize();
	void insert(int data);
	void buildHeap(int* arr, int size);
	void maxHeapify();
	void minHeapify();
	void print();
	int getMax();
	int getMin();
	void swap(int &num1, int &num2);
};

void BinaryHeap::swap(int &num1, int &num2){
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
}

void BinaryHeap::insert(int data){
	heap.push_back(data);
}

void BinaryHeap::buildHeap(int* arr, int size){
	for(int i=0; i<size; i++){
		heap.push_back(arr[i]);
	}
}

int BinaryHeap::parent(int child){
	return (child-1)/2;
}

int BinaryHeap::leftChild(int parent){
	return 2*parent + 1;
}

int BinaryHeap::rightChild(int parent){
	return 2*parent + 2;
}

int BinaryHeap::getSize(){
	return heap.size();
}

vector<int> BinaryHeap::getHeap(){
	return heap;
}

void BinaryHeap::print(){
	for(int i=0; i<getSize(); i++){
		if(i==0) cout<<heap[i];
		else cout<<", "<<heap[i];
	}
	cout<<endl;
}


void BinaryHeap::maxHeapify(){
	int size = heap.size();
	if(size == 0) return;
	int index = (size - 1)/2;
	int lastIndex = index;
	int flag = 1;
	int init = 1;
	while(flag){
		int left = leftChild(index);
		int right = rightChild(index);
		if(init){
			if(size-1 == right){
				if(heap[index]<heap[left] && heap[right]<=heap[left]) swap(heap[index], heap[left]);
				else if(heap[index]<heap[right] && heap[left]<=heap[right]) swap(heap[index], heap[right]);
			}else if(size-1 == left){
				if(heap[index]<heap[left]) swap(heap[index], heap[left]);
			}
			init = 0;
		}else{
			if(heap[index]<heap[left] && heap[right]<=heap[left]) swap(heap[index], heap[left]);
			else if(heap[index]<heap[right] && heap[left]<=heap[right]) swap(heap[index], heap[right]);
		}
		
		if(index == 0){
			if(lastIndex == 1) flag = 0;
			else{
				index = lastIndex;
				lastIndex--;
				init = 1;
			}
		}
		else index--;
	}
}

void BinaryHeap::minHeapify(){
	int size = heap.size();
	if(size == 0) return;
	int index = (size - 1)/2;
	int lastIndex = index;
	int flag = 1;
	int init = 1;
	while(flag){
		int left = leftChild(index);
		int right = rightChild(index);
		if(init){
			if(size-1 == right){
				if(heap[index]>heap[left] && heap[right]>=heap[left]) swap(heap[index], heap[left]);
				else if(heap[index]>heap[right] && heap[left]>=heap[right]) swap(heap[index], heap[right]);
			}else if(size-1 == left){
				if(heap[index]>heap[left]) swap(heap[index], heap[left]);
			}
			init = 0;
		}else{
			if(heap[index]>heap[left] && heap[right]>=heap[left]) swap(heap[index], heap[left]);
			else if(heap[index]>heap[right] && heap[left]>=heap[right]) swap(heap[index], heap[right]);
		}
		
		if(index == 0){
			if(lastIndex == 1) flag = 0;
			else{
				index = lastIndex;
				lastIndex--;
				init = 1;
			}
		}
		else index--;
	}
}

int main(){
	BinaryHeap heap;
	heap.insert(12);
	int arr[] = {11, 33, 77, 12, 2, 93, 7, 4, 23};
	heap.buildHeap(arr, 9);
	heap.print();
	heap.maxHeapify();
	heap.print();
	heap.minHeapify();
	heap.print();
	return 0;
}
