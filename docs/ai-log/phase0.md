🚀 FAZ 0: BAŞLANGIÇ ANALİZİ VE AI TARTIŞMASI
Bu aşama, projenin mevcut sorunlarının tespit edildiği ve çözüm stratejilerinin yapay zeka ile birlikte belirlendiği hazırlık sürecini içermektedir.

🛠️ 1. YAPAY ZEKAYA SORULAN SORU (PROMPT)
🔹 SORU TESPİTİ
"Bildirim sistemi başlangıç kodundaki tasarım sorunları nelerdir? Hangi tasarım örüntüleri bu sorunları çözebilir? Her sorun için kısa bir açıklama yaz."

📐 2. YAPAY ZEKA YANITI (ÖZET)
Yapay zeka, projenin temelinde yer alan ve geliştirilmesini engelleyen şu kritik sorunları tespit etmiştir:

🔹 GOD CLASS (AŞIRI YÜKLÜ SINIF)
NotificationManager sınıfı tüm iş mantığını kendi üzerinde topladığı için yönetilemez bir yapıdadır.

🔹 OPEN/CLOSED PRENSİBİ İHLALİ
Sisteme yeni bir bildirim türü eklemek için mevcut kaynak kodun sürekli modifiye edilmesi gerekmektedir.

🔹 NESNE YARATMA KARMAŞASI
Nesne oluşturma mantığı ile iş mantığı iç içe geçmiş durumdadır; bu da kodun esnekliğini yok etmektedir.

🔹 SIKI BAĞIMLILIK (TIGHT COUPLING)
Sınıflar arasındaki bağımlılık o kadar yüksektir ki, bir noktadaki değişiklik tüm sistemi bozma riski taşımaktadır.

💡 3. BENİM UYGULAMAM VE KARARIM
🔹 ANALİZ SÜRECİ
Başlangıç aşamasında, tasarım hatalarının etkisini net görebilmek adına bilerek "geleneksel/kötü" bir kod yapısı kurulmuştur.

🔹 STRATEJİK KARAR
AI tarafından önerilen Factory Method örüntüsünün, Faz 1'deki nesne yaratma karmaşasını çözmek için en doğru başlangıç noktası olduğuna karar verilmiştir. Bu sayede sistemin temeli sağlam bir mimari üzerine inşa edilmeye başlanmıştır.
