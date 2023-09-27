#include <iostream>

#include "coffee-machine.h"
#include "icoffee-service.h"

class MockCoffeeService : public ICoffeeService {
	void sendMetrics() override {
		std::cout << "Sending mock metrics!\n";
	}
};

// Example of simple "constructor injection" using interfaces
int main() {
	CoffeeMachine myMachine(std::make_unique<MockCoffeeService>());

	// Test my machine with a mock coffee service
	myMachine.brew();
}
