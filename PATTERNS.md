# 🛠️ Tasarım Örüntüleri Uygulama Raporu

Bu rapor, projenin geliştirme sürecinde kullanılan tasarım örüntülerinin akademik sınıflandırmasını ve kullanım gerekçelerini içermektedir.

### 🏗️ Faz 1: Creational Patterns (Yaratımsal Örüntüler)
* **Factory Method:** Bildirim nesnelerinin (SMS, Email) oluşturulma mantığını istemciden ayırmak, nesne üretimini merkezileştirmek ve sistemi yeni bildirim türlerine açık hale getirmek için kullanıldı.

### 📐 Faz 2: Structural Patterns (Yapısal Örüntüler)
* **Decorator:** Mevcut kullanıcı nesnelerine, temel sınıfları modifiye etmeden dinamik olarak "Öncelik" (Priority) özelliği eklemek için tercih edildi.
* **Facade:** Sistemdeki karmaşık nesne etkileşimlerini ve alt yapı operasyonlarını tek bir basit arayüz üzerinden yöneterek kullanım kolaylığı sağlamak için uygulandı.

### 🔄 Faz 3: Behavioral Patterns (Davranışsal Örüntüler)
* **Observer:** Sistemde meydana gelen bir olaydan (yeni bildirim gelmesi) birden fazla abonenin aynı anda ve otomatik olarak haberdar edilmesi amacıyla temel mimari olarak kullanıldı.
* **Strategy:** Bildirimlerin formatlanma algoritmalarını (Standart veya Özel format) kapsülleyerek, çalışma zamanında (runtime) esnek bir değişim sağlamak için sisteme dahil edildi.

---
🚀 *Bu proje, KTÜN Yazılım Tasarım Örüntüleri dersi kapsamında, belirtilen tüm akademik kısıtlamalara uyularak geliştirilmiştir.*
