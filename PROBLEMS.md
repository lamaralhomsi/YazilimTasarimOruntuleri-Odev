1.Sıkı Bağımlılık (Tight Coupling): Tüm bildirim mantığı tek bir NotificationManager sınıfı içinde toplanmış.



2.Açık/Kapalı Prensibi İhlali: Yeni bir bildirim kanalı (örneğin WhatsApp) eklemek için mevcut gonder fonksiyonunu modifiye etmek zorundayız.



3.Bakım Zorluğu: Bildirim tipleri arttıkça if-else blokları devasa hale gelecek ve okunabilirlik azalacak.



4.Esneklik Eksikliği: Çalışma zamanında (runtime) bildirim yöntemini değiştirmek veya yeni yöntemler enjekte etmek imkansız.



5.Tek Sorumluluk Prensibi (SRP) İhlali: Sınıf hem hangi tipin seçileceğine karar veriyor hem de gönderme işleminin detaylarını biliyor.



AI Karşılaştırması

AI Tespiti: Yapay zeka da benzer şekilde "Open/Closed" ve "Single Responsibility" prensiplerinin ihlal edildiğini, if-else yapısının sürdürülebilir olmadığını belirtti.

Farklar: Ben başlangıçta kodun sadece "karmaşık" olduğunu düşünmüştüm, ancak AI bunun teknik adının "God Class" olduğunu ve nesne yaratma sorumluluğunun ayrılması gerektiğini vurguladı.

