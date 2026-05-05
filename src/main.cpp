#include <iostream>

// Bildirim tipleri
enum NotificationType { EMAIL, SMS, PUSH };

// Soyut Urun (Abstract Product) sinifi (Arayuz gorevi gorur)
class Notification {
public:
    virtual ~Notification() {}
    // Saf sanal fonksiyon, turetilmis siniflar bunu doldurmak zorunda
    virtual void send(const char* message, const char* recipient) = 0;
};

// Somut Urunler (Concrete Products)
class EmailNotification : public Notification {
public:
    void send(const char* message, const char* recipient) override {
        std::cout << "Email gonderiliyor -> Alici: " << recipient << " | Mesaj: " << message << std::endl;
    }
};

class SMSNotification : public Notification {
public:
    void send(const char* message, const char* recipient) override {
        std::cout << "SMS gonderiliyor -> No: " << recipient << " | Mesaj: " << message << std::endl;
    }
};

class PushNotification : public Notification {
public:
    void send(const char* message, const char* recipient) override {
        std::cout << "Push gonderiliyor -> Cihaz: " << recipient << " | Mesaj: " << message << std::endl;
    }
};

// Fabrika (Factory) Sinifi - Nesne Yaratma Sorumlulugu Sadece Burada!
class NotificationFactory {
public:
    // Cok bicimlilik (polymorphism) kullanarak pointer donduruyoruz
    static Notification* createNotification(NotificationType type) {
        if (type == EMAIL) {
            return new EmailNotification();
        } else if (type == SMS) {
            return new SMSNotification();
        } else if (type == PUSH) {
            return new PushNotification();
        }
        return nullptr;
    }
};

int main() {
    // ARTIK GOD CLASS YOK! Nesneleri dogrudan uretmiyoruz, Fabrikadan istiyoruz.
    
    // Email nesnesi uretimi
    Notification* emailNotif = NotificationFactory::createNotification(EMAIL);
    if (emailNotif != nullptr) {
        emailNotif->send("Faz 1 - Factory Method tamamlandi!", "lamar@example.com");
        delete emailNotif; // Pointer kullandigimiz icin bellegi manuel temizliyoruz
    }

    // SMS nesnesi uretimi
    Notification* smsNotif = NotificationFactory::createNotification(SMS);
    if (smsNotif != nullptr) {
        smsNotif->send("Kodlar cok daha esnek hale geldi.", "05551234567");
        delete smsNotif;
    }

    return 0;
}