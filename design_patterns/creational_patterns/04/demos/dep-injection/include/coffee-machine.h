#pragma once

#include <memory>
#include "icoffee-service.h"

class CoffeeMachine {
	public:
		CoffeeMachine(std::unique_ptr<ICoffeeService>&& coffeeSvc) : coffeeService(std::move(coffeeSvc)) {}

		void brew();

	private:
		std::unique_ptr<ICoffeeService> coffeeService;
};
