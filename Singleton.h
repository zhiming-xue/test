#ifndef  SINGLETON_H
#define SINGLETON_H

class Singleton {
public:
	static Singleton* getInstance()
	{
		if(nullptr == pInstance) {
			lock();
				if(null == pInstance) {
					pInstance = new Singleton();
				}
			unlock();
	
		}

		return pInstance;
	}
private:
	Singleton()= default;
	~Singleton();
	Singleton & operator=(const Singleton&);

private:
	Singleton *pInstance;
};

Singleton::pInstance = nullptr;
#endif //SINGLETON_H
