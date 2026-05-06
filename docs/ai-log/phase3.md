### Faz 3: Behavioral (Davranışsal) Örüntü Günlüğü
**Soru:** Bildirimlerin kimlere gideceğini takip etmek ve farklı mesaj formatları arasında seçim yapmak için hangi örüntüler uygundur?
**AI Yanıtı:** Abonelik sistemi için Observer, farklı mesaj formatlama algoritmaları arasında geçiş yapmak için Strategy örüntüsü önerildi.
**Uygulama:** User sınıfı Observer olarak güncellendi. IFormatStrategy arayüzü ile mesajların nasıl görüneceği (StandardFormat) belirlendi.
**AI Yansıma Soruları:**
* **AI olmasaydı bu faz ne kadar sürerdi?** Strategy ve Observer örüntülerinin entegrasyonu karmaşık olduğu için yaklaşık 2 saat daha sürerdi.
* **AI sizi nerede yanılttı?** Strategy sınıflarını çok karmaşık bir yapıda kurmaya çalıştı, projenin sadeliği için daha basit bir arayüz yapısına indirgenmesi sağlandı.
