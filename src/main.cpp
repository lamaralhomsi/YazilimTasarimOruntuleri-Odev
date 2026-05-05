#include <iostream>

// Temel Arayuz (Component)
class IObserver {
public:
    virtual ~IObserver() {}
    virtual void update(const char* message) = 0;
};

// Somut Bilesen (Concrete Component)
class User : public IObserver {
private:
    const char* name;
public:
    User(const char* userName) : name(userName) {}
    void update(const char* message) override {
        std::cout << "Kullanici " << name << " mesaji aldi: " << message << std::endl;
    }
};

// Dekorator (Decorator) Temel Sinifi
class ObserverDecorator : public IObserver {
protected:
    IObserver* wrappedObserver; // Sarmalanan asil nesne (Pointer)
public:
    ObserverDecorator(IObserver* observer) : wrappedObserver(observer) {}
    virtual ~ObserverDecorator() {}
    virtual void update(const char* message) override {
        if (wrappedObserver != nullptr) {
            wrappedObserver->update(message);
        }
    }
};

// Somut Dekorator: Oncelik Etiketi Ekleyen Sinif
class PriorityDecorator : public ObserverDecorator {
public:
    PriorityDecorator(IObserver* observer) : ObserverDecorator(observer) {}
    void update(const char* message) override {
        // Asil mesajdan once ekstra davranis (ozellik) ekliyoruz
        std::cout << "[ACIL ONCELIKLI] ";
        ObserverDecorator::update(message);
    }
};

int main() {
    // Faz 3: Decorator Pattern Testi
    
    // 1. Normal bir kullanici nesnesi yaratilir
    IObserver* normalUser = new User("Ahmet");
    
    // 2. Ayni kullanici nesnesi, ozellik eklenmek uzere sarmalanir
    IObserver* vipUser = new PriorityDecorator(normalUser);
    
    std::cout << "--- Normal Bildirim ---" << std::endl;
    normalUser->update("Sistem bakima alinacaktir.");
    
    std::cout << "\n--- VIP Bildirim ---" << std::endl;
    vipUser->update("Sunucu coktu, hemen mudahale et!");
    
    // Bellek temizligi (Sadece yaratilan isaretciler silinir)
    delete vipUser;
    delete normalUser;
    
    return 0;
}