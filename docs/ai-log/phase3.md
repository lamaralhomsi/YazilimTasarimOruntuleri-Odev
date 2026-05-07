🔄 FAZ 3: BEHAVIORAL PATTERNS (DAVRANIŞSAL ÖRÜNTÜLER)
Bu final aşamasında, kullanıcıların bildirim sistemine aboneliği ve mesajların farklı stratejilerle formatlanması üzerine yoğunlaşılarak proje tamamlanmıştır.

🛠️ 1. YAPAY ZEKAYA SORULAN SORU (PROMPT)

🔹 SORU TESPİTİ
"Bildirimlerin hangi kullanıcılara gideceğini dinamik olarak takip etmek ve farklı mesaj formatlama algoritmaları (Basit, Detaylı vb.) arasında kolayca geçiş yapmak için hangi davranışsal örüntüler uygundur?"

📐 2. YAPAY ZEKA YANITI (ÖZET)

Yapay zeka, sistemin etkileşim gücünü artırmak için şu iki güçlü davranışsal çözümü önermiştir:

🔹 OBSERVER ÖRÜNTÜSÜ
Birden fazla kullanıcının (Subscriber) bir merkeze (Subject) abone olması ve bir değişiklik olduğunda otomatik olarak uyarılması için bu mimari önerilmiştir.

🔹 STRATEGY ÖRÜNTÜSÜ
Mesaj formatlama mantığının sınıftan ayrıştırılarak bağımsız birer algoritma haline getirilmesi ve çalışma zamanında bu formatlar arasında değişim yapılması önerilmiştir.

💡 3. BENİM UYGULAMAM VE FİNAL ENTEGRASYONU

🔹 DİNAMİK ABONELİK
User sınıfı birer Observer olarak güncellendi. Böylece sistem, yeni bir bildirim geldiğinde tüm kayıtlı kullanıcılara (sarmalanmış veya normal) otomatik olarak veri iletebilir hale geldi.

🔹 ALGORİTMİK ESNEKLİK
IFormatStrategy arayüzü hayata geçirildi. StandardFormat gibi somut sınıflar sayesinde, mesajların içeriği ana kod yapısını bozmadan farklı formatlara büründürüldü.

⚖️ AI YANSIMA SORULARI

🔹 AI OLMASAYDI BU FAZ NE KADAR SÜRERDİ?
Strategy ve Observer örüntülerinin birbiriyle uyumlu çalışması ve pointer üzerinden veri akışının hatasız kurulması süreci yaklaşık 2 saatlik yoğun bir geliştirme ve test süresi alırdı.

🔹 AI SİZİ NEREDE YANILTTI?
Yapay zeka başlangıçta Strategy sınıflarını çok karmaşık ve projenin ölçeğini aşan bir yapıda kurmaya çalıştı. Projenin sürdürülebilirliği ve sadeliği için daha yalın, anlaşılır bir arayüz yapısına tarafımca indirgenmiştir.

🚀 NOT: Bu aşama ile proje, tasarım örüntülerinin hiyerarşik ve mantıksal bir sıra ile uygulandığı eksiksiz bir sistem olarak tamamlanmıştır.
