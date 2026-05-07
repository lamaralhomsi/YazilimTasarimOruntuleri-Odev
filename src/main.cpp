#include <iostream>

// --- FAZ 3: BEHAVIORAL (Davranissal) ORUNTULER ---

// 1. STRATEGY PATTERN (Yeni Eklendi)
class IFormatStrategy {
public:
    virtual ~IFormatStrategy() {}
    virtual void format(const char* msg) = 0;
};

class StandardFormat : public IFormatStrategy {
public:
    void format(const char* msg) override {
        std::cout << "[Sistem Mesaji]: " << msg << std::endl;
    }
};

// 2. OBSERVER PATTERN (Zaten Vardi)
class IObserver {
public:
    virtual ~IObserver() {}
    virtual void update(const char* message) = 0;
};

class User : public IObserver {
private:
    const char* name;
public:
    User(const char* userName) : name(userName) {}
    void update(const char* message) override {
        std::cout << "Kullanici " << name << " bildirimi aldi." << std::endl;
    }
};


// --- FAZ 2: STRUCTURAL (Yapisal) ORUNTULER ---

// 1. DECORATOR PATTERN (Zaten Vardi)
class ObserverDecorator : public IObserver {
protected:
    IObserver* wrapped;
public:
    ObserverDecorator(IObserver* obs) : wrapped(obs) {}
    virtual void update(const char* msg) override {
        if(wrapped) wrapped->update(msg);
    }
};

class PriorityDecorator : public ObserverDecorator {
public:
    PriorityDecorator(IObserver* obs) : ObserverDecorator(obs) {}
    void update(const char* msg) override {
        std::cout << "[ACIL ONCELIK] ";
        ObserverDecorator::update(msg);
    }
};

// 2. FACADE PATTERN (Yeni Eklendi)
class NotificationFacade {
private:
    IFormatStrategy* formatter;
public:
    NotificationFacade(IFormatStrategy* strat) : formatter(strat) {}
    void sendNotification(IObserver* user, const char* msg) {
        // Facade karmasikligi gizler: Once formata sokar, sonra gonderir.
        formatter->format(msg);
        user->update(msg);
    }
};


// --- FAZ 1: CREATIONAL (Yaratimsal) ORUNTULER ---

// 1. FACTORY METHOD (Zaten Vardi)
class UserFactory {
public:
    static IObserver* createUser(const char* name, bool isPriority) {
        IObserver* baseUser = new User(name);
        if (isPriority) {
            // Eger oncelikliyse Decorator ile sarmalayip uretir
            return new PriorityDecorator(baseUser);
        }
        return baseUser;
    }
};


int main() {
    std::cout << "--- Sistem Testi Basliyor ---" << std::endl;

    // Faz 1: Factory ile nesneler uretilir
    IObserver* normalUser = UserFactory::createUser("Ahmet", false);
    IObserver* vipUser = UserFactory::createUser("Lamar", true); // Faz 2: Decorator ile sarmalandi

    // Faz 3: Strategy ile mesaj formati belirlenir
    IFormatStrategy* stdFormat = new StandardFormat();

    // Faz 2: Facade ile sistemin karmasikligi gizlenir ve yonetilir
    NotificationFacade system(stdFormat);

    // Faz 3: Observer mantigi ile bildirimler gonderilir
    std::cout << "\n1. Normal Bildirim:" << std::endl;
    system.sendNotification(normalUser, "Sistem yarin bakima alinacaktir.");
    
    std::cout << "\n2. Oncelikli Bildirim:" << std::endl;
    system.sendNotification(vipUser, "Sunucu coktu, lutfen mudahale edin!");

    // Bellek temizligi (Pointer'lar siliniyor)
    delete normalUser;
    delete vipUser; 
    delete stdFormat;

    std::cout << "\n--- Test Tamamlandi ---" << std::endl;
    return 0;
}
