// Aiming a derived-class pointer at a base-class object
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"

int main() {
	CommissionEmployee commissionEmployee{
		"Sue", "Jones", "222-22-2222", 10000, 0.06 };

	// aim derived-class pointer at base-class object
	// ERROR: a CommissionEmployee is not a BasePlusCommissionEmployee
	// and it goes against the heirarchy.
	BasePlusCommissionEmployee* basePlusCommissionEmployeePtr{ &commissionEmployee };
}