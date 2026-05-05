Faz 1: Creational Pattern - Factory Method

Nerede Kullanıldı: NotificationFactory sınıfında nesne yaratma sürecinde kullanıldı.

Neden Kullanıldı: Başlangıç kodunda NotificationManager tüm bildirim türlerinin detaylarını biliyordu ve bu durum Sıkı Bağımlılık (Tight Coupling) yaratıyordu.

Ne Kazandık: Nesne yaratma mantığı ile iş mantığı birbirinden ayrıldı. Artık yeni bir bildirim tipi eklemek istediğimizde sadece yeni bir sınıf oluşturup fabrikaya eklememiz yetecek, ana kodu (main) değiştirmek zorunda kalmayacağız.

Faz 2: Behavioral Pattern - Observer Method

Nerede Kullanıldı: NotificationSystem (Yayıncı) ve User (Gözlemci) sınıfları arasında kullanıldı.

Neden Kullanıldı: Bildirimleri alacak kullanıcıların listesini dinamik olarak yönetmek (ekleme/çıkarma) ve tek bir merkezden tüm kullanıcılara mesaj iletebilmek için.

Ne Kazandık: Yayıncı sınıf, abonelerin kim olduğunu bilmek zorunda kalmaz, sadece IObserver arayüzüne bildirim gönderir. Bu da Gevşek Bağlılık (Loose Coupling) sağlar.

