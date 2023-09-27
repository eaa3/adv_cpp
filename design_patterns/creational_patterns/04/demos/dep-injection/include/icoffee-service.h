#pragma once

#include <memory>

// Interface for defining a CoffeeService type
struct ICoffeeService {
	virtual void sendMetrics() = 0;
	virtual ~ICoffeeService() = default;
};
