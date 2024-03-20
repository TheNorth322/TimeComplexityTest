#include <iostream>
#include "StackOnList.h"
#include "StackOnArray.h"
#include "QueueOnList.h"
#include "QueueOnArray.h"
#include "Map.h"
#include <chrono>

void testMap() {
	Map map = Map();

	map.insert('a', 5);
	map.insert('h', 27);

	std::cout << map.get('a') << std::endl;
	std::cout << map.get('h') << std::endl;

	map.display();
}

void testQueueOnList(int size) {
	QueueOnList queue = QueueOnList();
	auto start_push = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < size; i++) {
		queue.push(i);
	}

	auto end_push = std::chrono::high_resolution_clock::now();
	auto duration_push = std::chrono::duration_cast<std::chrono::microseconds>(end_push - start_push);
	std::cout << "Time taken for pushing " << size << " elements: " << duration_push.count() << " microseconds" << std::endl;

	auto start_pop = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < size; i++) {
		queue.pop();
	}

	auto end_pop = std::chrono::high_resolution_clock::now();
	auto duration_pop = std::chrono::duration_cast<std::chrono::microseconds>(end_pop - start_pop);
	std::cout << "Time taken for popping " << size << " elements: " << duration_pop.count() << " microseconds" << std::endl;
}

void testStackOnArray(int size) {
	StackOnArray stack = StackOnArray(size);
	auto start_push = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < size; i++) {
		stack.push(i);
	}

	auto end_push = std::chrono::high_resolution_clock::now();
	auto duration_push = std::chrono::duration_cast<std::chrono::microseconds>(end_push - start_push);
	std::cout << "Time taken for pushing " << size << " elements: " << duration_push.count() << " microseconds" << std::endl;

	auto start_pop = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < size; i++) {
		stack.pop();
	}

	auto end_pop = std::chrono::high_resolution_clock::now();
	auto duration_pop = std::chrono::duration_cast<std::chrono::microseconds>(end_pop - start_pop);
	std::cout << "Time taken for popping " << size << " elements: " << duration_pop.count() << " microseconds" << std::endl;
}

void testStackOnList(int size) {
	StackOnList stack = StackOnList();
	auto start_push = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < size; i++) {
		stack.push(i);
	}
	
	auto end_push = std::chrono::high_resolution_clock::now();
	auto duration_push = std::chrono::duration_cast<std::chrono::microseconds>(end_push - start_push);
	std::cout << "Time taken for pushing " << size << " elements: " << duration_push.count() << " microseconds" << std::endl;

	auto start_pop = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < size; i++) {
		stack.pop();
	}
	auto end_pop = std::chrono::high_resolution_clock::now();
	auto duration_pop = std::chrono::duration_cast<std::chrono::microseconds>(end_pop - start_pop);
	std::cout << "Time taken for popping " << size << " elements: " << duration_pop.count() << " microseconds" << std::endl;

}

void testQueueOnArray(int size) {
	QueueOnArray queue = QueueOnArray(size);
	auto start_push = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < size; i++) {
		queue.push(i);
	}
	
	auto end_push = std::chrono::high_resolution_clock::now();
	auto duration_push = std::chrono::duration_cast<std::chrono::microseconds>(end_push - start_push);
	std::cout << "Time taken for pushing " << size << " elements: " << duration_push.count() << " microseconds" << std::endl;

	auto start_pop = std::chrono::high_resolution_clock::now();

	for (int i = 0; i < size; i++) {
		queue.pop();
	}
	auto end_pop = std::chrono::high_resolution_clock::now();
	auto duration_pop = std::chrono::duration_cast<std::chrono::microseconds>(end_pop - start_pop);
	std::cout << "Time taken for popping " << size << " elements: " << duration_pop.count() << " microseconds" << std::endl;
}

int main()
{
	int size = 10000000;
	int size2 = size / 10;
	
	std::cout << "QueueOnArray: " << size << std::endl;
	testQueueOnArray(size);
	std::cout << std::endl;
	
	std::cout << "QueueOnArray: " << size2 << std::endl;
	testQueueOnArray(size2);
	std::cout << std::endl;
	
	std::cout << "QueueOnList: " << size <<std::endl;
	testQueueOnList(size);
	std::cout << std::endl;
	
	std::cout << "QueueOnList: " << size2 <<std::endl;
	testQueueOnList(size2);
	std::cout << std::endl;
	
	std::cout << "StackOnArray: " << size << std::endl;
	testStackOnArray(size);
	std::cout << std::endl;
	
	std::cout << "StackOnArray: " << size2 << std::endl;
	testStackOnArray(size2);
	std::cout << std::endl;
	
	std::cout << "StackOnList: " << size << std::endl;
	testStackOnList(size);
	std::cout << std::endl;
	
	std::cout << "StackOnList: " << size2 << std::endl;
	testStackOnList(size2);
	std::cout << std::endl;

	return 0;
}
