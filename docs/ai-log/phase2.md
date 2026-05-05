Faz 2 AI Review ve Eşli Programlama

Prompt: "Bildirim sistemimde sisteme kayıtlı olan çok sayıda kullanıcıya tek bir merkezden mesaj göndermem gerekiyor. Kullanıcılar sisteme girip çıkabilmeli. Hangi davranışsal örüntüyü önerirsin?"

AI'ın Yanıtı: AI, bu senaryo için en uygun yapının Observer (Gözlemci) örüntüsü olduğunu belirtti. Bir Subject (Yayıncı) sınıfı oluşturarak abone listesini tutmayı ve notifyAll metodu ile abonelere mesaj iletmeyi önerdi.

Benim Uygulamam: Öneriyi projemin main.cpp dosyasına uyguladım. Kurallarım gereği dizi indekslemesi (\[]) yerine tamamen pointer aritmetiği (\*(pointer + offset)) kullanarak abone listesinin yönetimini (ekleme, silme, sola kaydırma) gerçekleştirdim. Ayrıca string kütüphanelerinden kaçınarak const char\* ile mesaj iletimini sağladım.

