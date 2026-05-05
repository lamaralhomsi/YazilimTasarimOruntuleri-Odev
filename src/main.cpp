#include <iostream>

// Arayuz: Gozlemci (Observer)
class IObserver {
public:
    virtual ~IObserver() {}
    virtual void update(const char* message) = 0;
};

// Somut Gozlemci: Kullanici (User)
class User : public IObserver {
private:
    const char* name;
public:
    User(const char* userName) : name(userName) {}
    void update(const char* message) override {
        std::cout << "Kullanici " << name << " yeni bildirim aldi: " << message << std::endl;
    }
};

// Yayinci (Subject) - Bildirim Merkezi
class NotificationSystem {
private:
    IObserver** observers; // Pointer to pointer (Dizi yerine)
    int capacity;
    int count;
public:
    NotificationSystem(int cap) : capacity(cap), count(0) {
        observers = new IObserver*[capacity];
        
        // Pointer aritmetigi ile baslangic atamasi
        for (int i = 0; i < capacity; ++i) {
            *(observers + i) = nullptr;
        }
    }
    
    ~NotificationSystem() {
        delete[] observers;
    }

    void attach(IObserver* observer) {
        if (count < capacity) {
            // Indeks yerine pointer aritmetigi kullanildi
            *(observers + count) = observer;
            count++;
        } else {
            std::cout << "Kapasite dolu, yeni gozlemci eklenemez." << std::endl;
        }
    }

    void detach(IObserver* observer) {
        for (int i = 0; i < count; ++i) {
            if (*(observers + i) == observer) {
                // Sola kaydirma islemi (Pointer aritmetigi ile)
                for (int j = i; j < count - 1; ++j) {
                    *(observers + j) = *(observers + j + 1);
                }
                *(observers + count - 1) = nullptr;
                count--;
                break;
            }
        }
    }

    void notifyAll(const char* message) {
        // Tum abonelere bildirimi ilet (Pointer aritmetigi ile)
        for (int i = 0; i < count; ++i) {
            if (*(observers + i) != nullptr) {
                (*(observers + i))->update(message);
            }
        }
    }
};

int main() {
    // Faz 2: Observer Pattern Testi
    
    NotificationSystem* subject = new NotificationSystem(5);
    
    User* user1 = new User("Ali");
    User* user2 = new User("Ayse");
    User* user3 = new User("Mehmet");
    
    subject->attach(user1);
    subject->attach(user2);
    
    std::cout << "--- Ilk Bildirim Gonderiliyor ---" << std::endl;
    subject->notifyAll("Sistem guncellemesi basliyor!");
    
    std::cout << "\n--- Mehmet Sisteme Katiliyor, Ayse Ayriliyor ---" << std::endl;
    subject->attach(user3);
    subject->detach(user2);
    
    subject->notifyAll("Yeni yari yil basladi!");
    
    // Bellek temizligi
    delete subject;
    delete user1;
    delete user2;
    delete user3;
    
    return 0;
}