⚠️ PROJE GELİŞTİRME SÜRECİ VE TEKNİK SORUNLAR
Bu doküman, projenin geliştirilmesi sırasında karşılaşılan temel yazılım tasarımı sorunlarını ve bu sorunların çözüm yollarını içermektedir.

🏗️ 1. GOD CLASS (AŞIRI YÜKLÜ SINIF) SORUNU
🔹 SORUN TESPİTİ: Başlangıç kodunda NotificationManager sınıfı tüm bildirim işlemlerini, nesne üretimini ve kullanıcı yönetimini tek başına yapıyordu. Bu durum, kodun okunabilirliğini ve bakımını imkansız hale getiriyordu.

🔹 ÇÖZÜM YOLU: Sorumluluklar parçalandı; nesne üretimi için Factory Method, sistem yönetimi için ise Facade örüntüsü kullanılarak sınıfın yükü hafifletildi.

📐 2. OPEN/CLOSED PRENSİBİ İHLALİ
🔹 SORUN TESPİTİ: Sisteme yeni bir bildirim türü (örneğin WhatsApp) eklemek istendiğinde, mevcut kodun içine müdahale etmek ve ana yapıyı değiştirmek gerekiyordu.

🔹 ÇÖZÜM YOLU: Soyut (Abstract) sınıflar ve arayüzler tanımlanarak sistem genişletilebilir hale getirildi. Artık ana kodu bozmadan yeni bildirim türleri eklenebiliyor.

🔗 3. SIKI BAĞIMLILIK (TIGHT COUPLING)
🔹 SORUN TESPİTİ: Kullanıcı sınıfları ile bildirim gönderme mantığı birbirine çok sıkı bağlıydı. Birindeki değişiklik diğerini doğrudan bozuyordu.

🔹 ÇÖZÜM YOLU: Observer örüntüsü ile kullanıcılar "dinleyici" (listener) konumuna getirildi. Böylece bildirim gönderen yapı ile bildirim alan yapı arasındaki doğrudan bağ koparıldı.

🛠️ 4. BELLEK YÖNETİMİ VE KISITLAMALAR
🔹 SORUN TESPİTİ: Üniversite kuralları gereği string.h kütüphanesi kullanılmaması gerekiyordu. Ancak AI başlangıçta standart kütüphane fonksiyonlarını önererek kısıtlamaları ihlal etti.

🔹 ÇÖZÜM YOLU: AI ile yapılan tartışmalar sonucunda tüm metin işlemleri const char* pointer aritmetiğine dönüştürüldü. Her nesnenin bellekten silinmesi (delete) manuel olarak kontrol edildi.

🔄 5. DİNAMİK ÖZELLİK EKLEME ZORLUĞU
🔹 SORUN TESPİTİ: Bazı bildirimlerin "Öncelikli" olarak işaretlenmesi gerekiyordu ancak sınıf yapısını bozmadan bu özelliği eklemek zordu.

🔹 ÇÖZÜM YOLU: Decorator örüntüsü kullanılarak, mevcut nesneler çalışma zamanında (runtime) sarmalandı ve sınıfa dokunmadan "Öncelik" özelliği kazandırıldı.

⚖️ AI VS. İNSAN ANALİZİ (FAZ 0 KARŞILAŞTIRMASI)
Ödev gereksinimleri doğrultusunda yapılan karşılaştırma sonuçları şöyledir:  


AI Ne Gördü?: Yapay zeka temel olarak yapısal sorunlara (God Class ve OCP ihlali) odaklandı ve modern C++ çözümleri (std::string, std::vector) önerdi.  

Ben Ne Gördüm?: AI'dan farklı olarak, projenin akademik kısıtlamalarını (manuel bellek yönetimi ve pointer aritmetiği zorunluluğu) ana sorun olarak belirledim.

Farklılıklar: AI genel mimari hataları hızlıca tespit etse de, laboratuvar kurallarını başlangıçta göz ardı etti. Bu noktada "İnsan Denetimi" devreye girerek kodun akademik disipline uygun hale getirilmesi sağlanmıştır.

🚀 NOT: Bu teknik analizler, projenin akademik standartlara uygunluğunu sağlamak amacıyla yapılmıştır.
