Faz 3 AI Review ve Eşli Programlama

Prompt: "Bildirim sistemimde bazı kullanıcılara giden mesajların başına '\[ACIL]' gibi öncelik etiketleri eklemek istiyorum ancak var olan User sınıfını bozmak istemiyorum. Hangi yapısal örüntüyü kullanmalıyım?"

AI'ın Yanıtı: AI, nesnelere dinamik özellik eklemek için Decorator (Dekoratör) örüntüsünü önerdi. Bir temel dekoratör sınıfı yazıp, asıl nesneyi bunun içinde sarmalamayı (wrapping) tavsiye etti.

Benim Uygulamam: Bu yapıyı main.cpp dosyasına entegre ettim. C++'ta string ve standart kütüphane kısıtlamalarına uyarak const char\* işaretçileri ile mesaj iletimini sağladım. Orijinal nesneye işaretçi üzerinden erişerek ekstra çıktı ekleyen PriorityDecorator sınıfını başarıyla derledim.

