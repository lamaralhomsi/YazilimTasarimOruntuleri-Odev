### Faz 2: Structural (Yapısal) Örüntü Günlüğü
**Soru:** Bildirim sisteminde sınıfları bozmadan yeni özellikler eklemek ve karmaşık yapıyı basitleştirmek için hangi yapısal örüntüler kullanılmalı?
**AI Yanıtı:** Nesnelere dinamik özellik eklemek için Decorator, sistem karmaşıklığını tek bir noktadan yönetmek için Facade örüntüsü önerildi.
**Uygulama:** PriorityDecorator sınıfı ile bildirimlere [ACIL] etiketi eklendi. NotificationFacade ile tüm sistemin tek bir arayüzden yönetilmesi sağlandı.
**AI Yansıma Soruları:**
* **AI olmasaydı bu faz ne kadar sürerdi?** Yapısal örüntülerin (Decorator) birbirine bağlanması mantığı için 1 saat ekstra araştırma gerektirirdi.
* **AI sizi nerede yanılttı?** Decorator yapısında bellek sızıntısı (memory leak) olabilecek bir silme sırası önerdi, manuel müdahale ile düzeltildi.
