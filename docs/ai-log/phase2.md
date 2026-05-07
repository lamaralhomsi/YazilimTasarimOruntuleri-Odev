📐 FAZ 2: STRUCTURAL PATTERNS (YAPISAL ÖRÜNTÜLER)
Bu aşamada, sistemin nesne yapısını bozmadan yeni yetenekler kazandırmak ve karmaşık alt sistemleri tek bir noktadan yönetmek için yapısal geliştirmeler yapılmıştır.

🛠️ 1. YAPAY ZEKAYA SORULAN SORU (PROMPT)

🔹 SORU TESPİTİ
"Bildirim sisteminde mevcut sınıfları değiştirmeden yeni özellikler eklemek ve artan yapısal karmaşıklığı istemciden gizlemek için hangi yapısal örüntüler kullanılmalı?"

📐 2. YAPAY ZEKA YANITI (ÖZET)

Yapay zeka, sistemin esnekliğini ve kullanım kolaylığını artırmak için şu iki yapısal çözümü önermiştir:

🔹 DECORATOR ÖRÜNTÜSÜ
Nesnelere dinamik olarak yeni sorumluluklar (örneğin öncelik durumu) yüklemek için kalıtım yerine nesne sarmalama (composition) yöntemi önerilmiştir.

🔹 FACADE ÖRÜNTÜSÜ
Sistemin içinde barındırdığı Factory, Decorator ve diğer alt bileşenlerin karmaşıklığını gizleyen, dış dünya için tek bir giriş noktası sağlayan bir arayüz yapısı sunulmuştur.

💡 3. BENİM UYGULAMAM VE MİMARİ ÇÖZÜM

🔹 DİNAMİK ÖZELLİKLER
PriorityDecorator sınıfı hayata geçirilerek, bildirimlere sınıf hiyerarşisini bozmadan çalışma zamanında (runtime) [ACİL] etiketi ve özel davranışlar eklenebilmesi sağlandı.

🔹 SİSTEM YÖNETİMİ
NotificationFacade sınıfı ile tüm karmaşık bildirim akışı tek bir metot (sendNotification) altına toplandı. Bu sayede main fonksiyonu sistemin iç detaylarını bilmek zorunda kalmadan işlem yapabilir hale getirildi.

⚖️ AI YANSIMA SORULARI

🔹 AI OLMASAYDI BU FAZ NE KADAR SÜRERDİ?
Yapısal örüntülerin (özellikle Decorator) birbirine bağlanması ve hiyerarşik pointer yönetiminin kurulması mantığı için yaklaşık 1 saatlik ekstra bir araştırma ve mimari deneme süreci gerekirdi.

🔹 AI SİZİ NEREDE YANILTTI?
AI, Decorator yapısında bellek sızıntısına (memory leak) yol açabilecek hatalı bir nesne silme sırası önerdi. Sistemin güvenliği için yıkıcı fonksiyonlar (destructor) tarafımca manuel olarak düzenlenmiş ve bellek yönetimi stabilize edilmiştir.

🚀 NOT: Bu aşama ile sistem "yazılım geliştirme prensiplerine" (SOLID) tam uyumlu, profesyonel bir yapıya kavuşmuştur.
