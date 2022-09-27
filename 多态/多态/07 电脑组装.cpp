#include<iostream>
#include<string>
using namespace std;

class Components {
public:
	Components() {
		cout << "Components��������" << endl;
	}
	~Components() {
		cout << "Components��������" << endl;
	}
};

class CPU: public Components {
public:
	CPU(string brand) {
		m_brand = brand;
	}
	void calculate() {};
	string getBrand() {
		return m_brand;
	}
	void setBrand(string brand) {
		m_brand = brand;
	}
	~CPU() {
		cout << "CPU��������" << endl;
	}
private:
	string m_brand; // Ʒ��
};
class GraphicsCard: public Components {
public:
	GraphicsCard(string brand) {
		m_brand = brand;
	}
	void show(){};
	string getBrand() {
		return m_brand;
	}
	void setBrand(string brand) {
		m_brand = brand;
	}
	~GraphicsCard() {
		cout << "GraphicsCard��������" << endl;
	}
private:
	string m_brand; // Ʒ��
};
class Memory: public Components {
public:
	Memory(string brand) {
		m_brand = brand;
	}
	void storage() {};
	string getBrand() {
		return m_brand;
	}
	void setBrand(string brand) {
		m_brand = brand;
	}
	~Memory() {
		cout << "Memory��������" << endl;
	}
private:
	string m_brand; // Ʒ��
};

class Computer {
public:
	CPU* getCPU() {
		return m_cpu;
	}
	void setCPU(CPU* cpu) {
		m_cpu = cpu;
	}
	GraphicsCard* getGraphicsCard() {
		return m_graphicsCard;
	}

	void setGraphicsCard(GraphicsCard* graphicsCard) {
		m_graphicsCard = graphicsCard;
	}

	Memory* getMemory() {
		return m_memory;
	}
	void setMemory(Memory* memory) {
		m_memory = memory;
	}
private:
	CPU* m_cpu;
	GraphicsCard* m_graphicsCard;
	Memory* m_memory;
};

class ComponentsFactory {
public:
	virtual Components* production() = 0;
};

class CPUFactory: public ComponentsFactory {
public:
	CPU* production() {
		cout << "����һ��CPU" << endl;
		CPU* c = new CPU("΢��");
		return c;
	}
};
class GraphicsCardFactory: public ComponentsFactory {
public:
	GraphicsCard* production() {
		cout << "����һ���Կ�" << endl;
		GraphicsCard* c = new GraphicsCard("����");
		return c;
	}
};
class MemoryFactory: public ComponentsFactory {
public:
	Memory* production() {
		cout << "����һ���ڴ�" << endl;
		Memory* c = new Memory("��֥");
		return c;
	}
};

class ComputerFactory {
public:
	Computer* production() {
		CPU* c = m_CPUFactory.production();
		GraphicsCard* g = m_GraphicsCardFactory.production();
		Memory* m = m_MemoryFactory.production();
		Computer *computer = new Computer;
		computer->setCPU(c);
		computer->setGraphicsCard(g);
		computer->setMemory(m);

		return computer;
	}
private:
	CPUFactory m_CPUFactory;
	GraphicsCardFactory m_GraphicsCardFactory;
	MemoryFactory m_MemoryFactory;
};

void test09() {
	ComputerFactory cf;
	Computer* computer = cf.production();
	cout << "CPU" << computer->getCPU()->getBrand() << endl;
	cout << "GraphicsCard" << computer->getGraphicsCard()->getBrand() << endl;
	cout << "Memory" << computer->getMemory()->getBrand() << endl;
}

int main() {

	test09();

	system("pause");

	return 0;
}