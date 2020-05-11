#include <string>
#include <array>
#include <iostream>
#include <iomanip>

class Sales {
public:
	Sales(std::string salesPerson);
	void inputSaleNumber();
	void displaySaleNumber() const;
	float getTotalSales() const;
	void inputProduct();
	void setName(std::string);
	std::string getName() const;
	void displayReport() const;
	
private:
	std::string name;
	std::array<int, 3> products;
	std::array<std::array<float, 8>, 3> salePrice;
	float totalSales{0};
	std::array<float, 3> total;
};
