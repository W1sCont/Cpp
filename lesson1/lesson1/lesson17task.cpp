#include <iostream>

struct Device
{
	std::string name;
	double price;

	void UpdatePrice(double newPrice) {
		price = newPrice;
	}

	void info(){
		std::cout << "Name: " << name << "\n" << "Price: " << price << std::endl;
		std::cout << std::endl;
	}
};

void UpdatePrice(Device& d, double newPrice) {
	d.price = newPrice;
}

Device FindeCheaper(Device d1, Device d2) {
	if (d1.price > d2.price)
		return d1;
	else if (d1.price < d2.price)
		return d2;
}

int main() {
	Device Sony{ "PS2", 230 };
	Device Nokia{ "N95", 50 };

	std::cout << "info Sony" << std::endl;
	Sony.info();
	std::cout << std::endl;

	std::cout << "info Nokia" << std::endl;
	Nokia.info();
	std::cout << std::endl;

	Nokia.UpdatePrice(150.5);
	Nokia.info();
	std::cout << std::endl;
	UpdatePrice(Sony, 255.6);
	Sony.info();
	std::cout << std::endl;

	std::cout << "Cheaper device: " << std::endl;
	Device cheaper = FindeCheaper(Sony, Nokia);
	cheaper.info();
	std::cout << std::endl;

	return 0;
}