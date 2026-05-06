Faz 1 AI Review ve Eşli Programlama

Prompt: "A Konusu (Bildirim Sistemi) başlangıç kodundaki nesne yaratma sorununu Factory Method ile nasıl çözebiliriz? Bana uygun C++ yapısını açıklar mısın?"

AI'ın Yanıtı (Özet): AI, nesne üretiminin tek bir sınıfa yığılmasını önlemek için ortak bir Notification arayüzü (interface) oluşturmayı ve EmailNotification, SMSNotification gibi alt sınıfları bu arayüzden türetmeyi önerdi. Nesnelerin üretimi için de NotificationFactory adında statik bir üretim metodu içeren sınıf sağladı.

Benim Uygulamam: AI'ın Factory Method önerisini kabul ettim ve projeme uyguladım. Üniversite kurallarım gereği string.h kütüphanelerinden kaçınarak işlemleri const char\* pointer'ları üzerinden gerçekleştirdim ve bellek sızıntılarını önlemek için pointer nesnelerini işim bitince sildim.

**AI Yansıma Soruları:**
* **AI olmasaydı bu faz ne kadar sürerdi?** Pointer kısıtlamaları ve bellek yönetimi nedeniyle yaklaşık 1-2 saat daha fazla sürerdi.
* **AI sizi nerede yanılttı?** Başlangıçta standart kütüphane (string.h) kullanımını önerdi, ancak laboratuvar kısıtlamalarını hatırlatınca pointer aritmetiğine döndü.

