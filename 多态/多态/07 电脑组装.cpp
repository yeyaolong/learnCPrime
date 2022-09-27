#include<iostream>
#include<string>
using namespace std;

/*-------------------我自己写的 START -----------------------------------*/
/*
class Components {
public:
	Components() {
		cout << "Components构造函数" << endl;
	}
	~Components() {
		cout << "Components析构函数" << endl;
	}
};

class CPU: public Components {
public:
	CPU(string brand) {
		cout << "CPU构造函数" << endl;
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
		cout << "CPU析构函数" << endl;
		if (this != NULL) {
			delete this;
		}
	}
private:
	string m_brand; // 品牌
};
class GraphicsCard: public Components {
public:
	GraphicsCard(string brand) {
		cout << "GraphicsCard构造函数" << endl;
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
		cout << "GraphicsCard析构函数" << endl;
	}
private:
	string m_brand; // 品牌
};
class Memory: public Components {
public:
	Memory(string brand) {
		cout << "Memory构造函数" << endl;
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
		cout << "Memory析构函数" << endl;
	}
private:
	string m_brand; // 品牌
};

class Computer {
public:
	Computer() {
		cout << "Computer 构造函数" << endl;
	}
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
	~Computer() {
		cout << "Computer 析构函数" << endl;
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
	CPUFactory() {
		cout << "CPUFactory构造函数" << endl;
	}
	CPU* production() {
		cout << "生产一个CPU" << endl;
		CPU* c = new CPU("微软");
		return c;
	}
	~CPUFactory() {
		cout << "CPUFactory析构函数" << endl;
	}
};
class GraphicsCardFactory: public ComponentsFactory {
public:
	GraphicsCardFactory() {
		cout << "GraphicsCardFactory构造函数" << endl;
	}
	GraphicsCard* production() {
		cout << "生产一个显卡" << endl;
		GraphicsCard* c = new GraphicsCard("联想");
		return c;
	}
	~GraphicsCardFactory() {
		cout << "GraphicsCardFactory析构函数" << endl;
	}

};
class MemoryFactory: public ComponentsFactory {
public:
	MemoryFactory() {
		cout << "MemoryFactory构造函数" << endl;
	}
	Memory* production() {
		cout << "生产一个内存" << endl;
		Memory* c = new Memory("东芝");
		return c;
	}
	~MemoryFactory() {
		cout << "MemoryFactory析构函数" << endl;
	}
};

class ComputerFactory {
public:
	ComputerFactory() {
		cout << "ComputerFactory构造函数" << endl;
		m_CPUFactory = new CPUFactory();
		m_GraphicsCardFactory = new GraphicsCardFactory();
		m_MemoryFactory = new MemoryFactory();
	}
	Computer* production() {
		CPU* c = m_CPUFactory->production();
		GraphicsCard* g = m_GraphicsCardFactory->production();
		Memory* m = m_MemoryFactory->production();
		Computer *computer = new Computer;
		computer->setCPU(c);
		computer->setGraphicsCard(g);
		computer->setMemory(m);

		return computer;
	}
	~ComputerFactory() {
		cout << "ComputerFactory析构函数" << endl;
		if (m_CPUFactory != NULL) {
			delete m_CPUFactory;
			m_CPUFactory = NULL;
		}
		if (m_GraphicsCardFactory != NULL) {
			delete m_GraphicsCardFactory;
			m_GraphicsCardFactory = NULL;
		}
		if (m_MemoryFactory != NULL) {
			delete m_MemoryFactory;
			m_MemoryFactory = NULL;
		}
	}
private:
	CPUFactory* m_CPUFactory;
	GraphicsCardFactory* m_GraphicsCardFactory;
	MemoryFactory* m_MemoryFactory;
};

void test09() {
	ComputerFactory cf;
	Computer* computer = cf.production();
	cout << "CPU" << computer->getCPU()->getBrand() << endl;
	cout << "GraphicsCard" << computer->getGraphicsCard()->getBrand() << endl;
	cout << "Memory" << computer->getMemory()->getBrand() << endl;
	
	// delete &cf; // 在调用这一段之前， cf的内存就被释放掉了，所以会报错
	delete computer;
}

int main() {

	test09();

	system("pause");

	return 0;
}
*/
/*-------------------我自己写的 END -----------------------------------*/

/*-------------------视频写的 START -----------------------------------*/

class CPU {
public:
	virtual void calculate() = 0;
};

class VideoCard {
public:
	virtual void display() = 0;
};

class Memory {
public:
	virtual void storage() = 0;
};

class Computer {
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void work() {
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	~Computer() {
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}

	}
private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};

class IntelCPU : public CPU {
	void calculate() {
		cout << "Inter CPU 开始计算了" << endl;
	}
};

class IntelVideoCard : public VideoCard {
	void display() {
		cout << "Inter VideoCard 开始显示了" << endl;
	}
};

class IntelMemory : public Memory {
	void storage() {
		cout << "Inter Memory 开始存储了" << endl;
	}
};


class LenovoCPU : public CPU {
	void calculate() {
		cout << "Lenovo CPU 开始计算了" << endl;
	}
};

class LenovoVideoCard : public VideoCard {
	void display() {
		cout << "Lenovo VideoCard 开始显示了" << endl;
	}
};

class LenovoMemory : public Memory {
	void storage() {
		cout << "Lenovo Memory 开始存储了" << endl;
	}
};




void test09() {
	cout << "第一台电脑开始工作" << endl;
	CPU* cpu1 = new IntelCPU;
	VideoCard* videoCard1 = new IntelVideoCard;
	Memory* memory1 = new IntelMemory;

	Computer* computer = new Computer(cpu1, videoCard1, memory1);
	computer->work();
	delete computer;
	cout << "-----------------------------------------" << endl;
	cout << "第二台电脑开始工作" << endl;
	CPU* cpu2 = new LenovoCPU;
	VideoCard* card2 = new IntelVideoCard;
	Memory* memory2 = new IntelMemory;

	Computer* computer2 = new Computer(cpu2, card2, memory2);
	computer2->work();
	delete computer2;
	cout << "-----------------------------------------" << endl;
	cout << "第三台电脑开始工作" << endl;
	CPU* cpu3 = new LenovoCPU;
	VideoCard* card3 = new IntelVideoCard;
	Memory* memory3 = new LenovoMemory;

	Computer* computer3 = new Computer(cpu3, card3, memory3);
	computer3->work();
	delete computer3;
}

int main() {

	test09();

	system("pause");

	return 0;
}
/*-------------------视频写的 END -----------------------------------*/