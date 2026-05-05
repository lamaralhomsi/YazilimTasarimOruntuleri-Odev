Faz 1: Creational Pattern - Factory Method

Nerede Kullanıldı: NotificationFactory sınıfında nesne yaratma sürecinde kullanıldı.

Neden Kullanıldı: Başlangıç kodunda NotificationManager tüm bildirim türlerinin detaylarını biliyordu ve bu durum Sıkı Bağımlılık (Tight Coupling) yaratıyordu.

Ne Kazandık: Nesne yaratma mantığı ile iş mantığı birbirinden ayrıldı. Artık yeni bir bildirim tipi eklemek istediğimizde sadece yeni bir sınıf oluşturup fabrikaya eklememiz yetecek, ana kodu (main) değiştirmek zorunda kalmayacağız.

