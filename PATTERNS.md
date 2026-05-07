🛠️ TASARIM ÖRÜNTÜLERİ UYGULAMA RAPORU
Bu rapor, projenin geliştirme sürecinde kullanılan tasarım örüntülerinin akademik sınıflandırmasını ve kullanım gerekçelerini içermektedir.

🏗️ FAZ 1: CREATIONAL PATTERNS (YARATIMSAL ÖRÜNTÜLER)
🔹 FACTORY METHOD
Bildirim nesnelerinin (SMS, Email) oluşturulma mantığını istemciden ayırmak, nesne üretimini merkezileştirmek ve sistemi yeni bildirim türlerine açık hale getirmek için kullanıldı.

📐 FAZ 2: STRUCTURAL PATTERNS (YAPISAL ÖRÜNTÜLER)
🔹 DECORATOR
Mevcut kullanıcı nesnelerine, temel sınıfları modifiye etmeden dinamik olarak "Öncelik" (Priority) özelliği eklemek için tercih edildi.

🔹 FACADE
Sistemdeki karmaşık nesne etkileşimlerini ve alt yapı operasyonlarını tek bir basit arayüz üzerinden yöneterek kullanım kolaylığı sağlamak için uygulandı.

🔄 FAZ 3: BEHAVIORAL PATTERNS (DAVRANIŞSAL ÖRÜNTÜLER)
🔹 OBSERVER
Sistemde meydana gelen bir olaydan (yeni bildirim gelmesi) birden fazla abonenin aynı anda ve otomatik olarak haberdar edilmesi amacıyla temel mimari olarak kullanıldı.

🔹 STRATEGY
Bildirimlerin formatlanma algoritmalarını (Standart veya Özel format) kapsülleyerek, çalışma zamanında (runtime) esnek bir değişim sağlamak için sisteme dahil edildi.

🚀 NOT: Bu proje,
