#include <iostream>

// Bildirim tiplerini belirlemek icin enum
enum NotificationType { EMAIL, SMS, PUSH };

// Bu sinif her seyi tek basina yapiyor (God Class). 
// Bu cok kotu bir tasarim ornegidir.
class NotificationManager {
public:
    // Bildirim gonderme fonksiyonu
    void gonder(NotificationType tip, const char* mesaj, const char* alici) {
        
        // Hangi tip oldugunu surekli if-else ile kontrol ediyoruz.
        // Yeni bir tip (orn: WhatsApp) eklemek istersek bu kodu degistirmemiz gerekecek.
        // Bu durum "Open/Closed" prensibine aykiridir.
        
        if (tip == EMAIL) {
            std::cout << "Email gonderiliyor... Alici: " << alici << std::endl;
            std::cout << "Mesaj: " << mesaj << std::endl;
        } 
        else if (tip == SMS) {
            std::cout << "SMS gonderiliyor... No: " << alici << std::endl;
            std::cout << "Mesaj: " << mesaj << std::endl;
        } 
        else if (tip == PUSH) {
            std::cout << "Push bildirimi gonderiliyor... Cihaz ID: " << alici << std::endl;
            std::cout << "Mesaj: " << mesaj << std::endl;
        }
    }
};

int main() {
    NotificationManager manager;

    // Kotu tasarim: Her defasinda tipi manuel seciyoruz
    manager.gonder(EMAIL, "Vize projesine basladik!", "lamar@example.com");
    manager.gonder(SMS, "Kodlar hazir.", "05551234567");

    return 0;
}