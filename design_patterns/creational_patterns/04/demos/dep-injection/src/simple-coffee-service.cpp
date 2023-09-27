#include <iostream>
#include <memory>
#include "icoffee-service.h"

// Specific implementation of a CoffeeService
class SimpleCoffeeService : public ICoffeeService {
	void sendMetrics() override {
		std::cout << "Sending metrics!\n";
	}
};

