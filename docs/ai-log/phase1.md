🏗️ FAZ 1: CREATIONAL PATTERNS (YARATIMSAL ÖRÜNTÜLER)
Bu aşamada, başlangıç kodundaki nesne üretim karmaşasını çözmek için "Factory Method" örüntüsünün entegrasyonuna ve akademik kısıtlamalara odaklanılmıştır.

🛠️ 1. YAPAY ZEKAYA SORULAN SORU (PROMPT)

🔹 SORU TESPİTİ
"Bildirim Sistemi başlangıç kodundaki nesne yaratma sorununu Factory Method ile nasıl çözebiliriz? Üniversite laboratuvar kurallarına uygun C++ yapısını açıklar mısın?"

📐 2. YAPAY ZEKA YANITI (ÖZET)

Yapay zeka, nesne üretiminin tek bir sınıfa bağımlı kalmasını önlemek için şu mimariyi önermiştir:

🔹 ARA YÜZ TASARIMI
Ortak bir Notification arayüzü (interface) oluşturularak, tüm bildirim tiplerinin bu sınıftan türetilmesi sağlanmıştır.

🔹 SOMUT SINIFLAR
EmailNotification ve SMSNotification gibi alt sınıflar oluşturularak her birine kendi özgün davranışları kazandırılmıştır.

🔹 FABRİKA SINIFI
Nesnelerin üretimi için NotificationFactory adında, statik bir üretim metodu içeren özel bir sınıf yapısı sunulmuştur.

💡 3. BENİM UYGULAMAM VE AKADEMİK DİSİPLİN

🔹 UYGULAMA SÜRECİ
AI'ın önerdiği mimari kabul edilmiş ancak üniversite kuralları gereği kod üzerinde ciddi revizyonlar yapılmıştır. string.h kütüphaneleri tamamen devredışı bırakılarak tüm işlemler const char pointer* aritmetiği ile yeniden yazılmıştır.

🔹 BELLEK YÖNETİMİ
Sistemde bellek sızıntısı (memory leak) oluşmaması adına, üretilen tüm nesneler işlevini tamamladıktan sonra delete komutu ile bellekten manuel olarak temizlenmiştir.

⚖️ AI YANSIMA SORULARI

🔹 AI OLMASAYDI BU FAZ NE KADAR SÜRERDİ?
Pointer kısıtlamaları ve manuel bellek yönetimi senaryolarının hatasız kurulması nedeniyle süreç yaklaşık 1-2 saat daha fazla araştırma ve hata ayıklama gerektirirdi.

🔹 AI SİZİ NEREDE YANILTTI?
AI başlangıçta standart modern C++ kütüphanelerini (std::string) kullanmayı önerdi. Ancak laboratuvar kısıtlamaları hatırlatılınca, düşük seviyeli pointer aritmetiğine dayalı yapıya geri dönüş yapıldı.

🚀 NOT: Bu aşama, projenin diğer fazları için esnek ve genişletilebilir bir temel oluşturmuştur.
