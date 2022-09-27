#include<iostream>
#include<string>
using namespace std;

/*-------------------���Լ�д�� START -----------------------------------*/
/*
class Components {
public:
	Components() {
		cout << "Components���캯��" << endl;
	}
	~Components() {
		cout << "Components��������" << endl;
	}
};

class CPU: public Components {
public:
	CPU(string brand) {
		cout << "CPU���캯��" << endl;
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
		if (this != NULL) {
			delete this;
		}
	}
private:
	string m_brand; // Ʒ��
};
class GraphicsCard: public Components {
public:
	GraphicsCard(string brand) {
		cout << "GraphicsCard���캯��" << endl;
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
		cout << "Memory���캯��" << endl;
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
	Computer() {
		cout << "Computer ���캯��" << endl;
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
		cout << "Computer ��������" << endl;
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
		cout << "CPUFactory���캯��" << endl;
	}
	CPU* production() {
		cout << "����һ��CPU" << endl;
		CPU* c = new CPU("΢��");
		return c;
	}
	~CPUFactory() {
		cout << "CPUFactory��������" << endl;
	}
};
class GraphicsCardFactory: public ComponentsFactory {
public:
	GraphicsCardFactory() {
		cout << "GraphicsCardFactory���캯��" << endl;
	}
	GraphicsCard* production() {
		cout << "����һ���Կ�" << endl;
		GraphicsCard* c = new GraphicsCard("����");
		return c;
	}
	~GraphicsCardFactory() {
		cout << "GraphicsCardFactory��������" << endl;
	}

};
class MemoryFactory: public ComponentsFactory {
public:
	MemoryFactory() {
		cout << "MemoryFactory���캯��" << endl;
	}
	Memory* production() {
		cout << "����һ���ڴ�" << endl;
		Memory* c = new Memory("��֥");
		return c;
	}
	~MemoryFactory() {
		cout << "MemoryFactory��������" << endl;
	}
};

class ComputerFactory {
public:
	ComputerFactory() {
		cout << "ComputerFactory���캯��" << endl;
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
		cout << "ComputerFactory��������" << endl;
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
	
	// delete &cf; // �ڵ�����һ��֮ǰ�� cf���ڴ�ͱ��ͷŵ��ˣ����Իᱨ��
	delete computer;
}

int main() {

	test09();

	system("pause");

	return 0;
}
*/
/*-------------------���Լ�д�� END -----------------------------------*/

/*-------------------��Ƶд�� START -----------------------------------*/

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
		cout << "Inter CPU ��ʼ������" << endl;
	}
};

class IntelVideoCard : public VideoCard {
	void display() {
		cout << "Inter VideoCard ��ʼ��ʾ��" << endl;
	}
};

class IntelMemory : public Memory {
	void storage() {
		cout << "Inter Memory ��ʼ�洢��" << endl;
	}
};


class LenovoCPU : public CPU {
	void calculate() {
		cout << "Lenovo CPU ��ʼ������" << endl;
	}
};

class LenovoVideoCard : public VideoCard {
	void display() {
		cout << "Lenovo VideoCard ��ʼ��ʾ��" << endl;
	}
};

class LenovoMemory : public Memory {
	void storage() {
		cout << "Lenovo Memory ��ʼ�洢��" << endl;
	}
};




void test09() {
	cout << "��һ̨���Կ�ʼ����" << endl;
	CPU* cpu1 = new IntelCPU;
	VideoCard* videoCard1 = new IntelVideoCard;
	Memory* memory1 = new IntelMemory;

	Computer* computer = new Computer(cpu1, videoCard1, memory1);
	computer->work();
	delete computer;
	cout << "-----------------------------------------" << endl;
	cout << "�ڶ�̨���Կ�ʼ����" << endl;
	CPU* cpu2 = new LenovoCPU;
	VideoCard* card2 = new IntelVideoCard;
	Memory* memory2 = new IntelMemory;

	Computer* computer2 = new Computer(cpu2, card2, memory2);
	computer2->work();
	delete computer2;
	cout << "-----------------------------------------" << endl;
	cout << "����̨���Կ�ʼ����" << endl;
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
/*-------------------��Ƶд�� END -----------------------------------*/