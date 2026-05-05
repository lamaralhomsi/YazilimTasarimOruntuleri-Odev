\# Faz 0: Baslangic Analizi ve AI Tartismasi



\### 1. Yapay Zekaya Sorulan Soru (Prompt)

"Bildirim sistemi baslangic kodundaki tasarim sorunlari nelerdir? Hangi tasarim oruntuleri bu sorunlari cozebilir? Her sorun icin kisa bir aciklama yaz."



\### 2. Yapay Zeka Yaniti (Ozet)

AI, mevcut kodda su kritik sorunlari tespit etti:

\* \*\*God Class Sorunu:\*\* NotificationManager sinifi her seyi kendi yapiyor.

\* \*\*Open/Closed Prensibi Ihlali:\*\* Yeni bildirim tipi eklemek icin mevcut kodu degistirmek gerekiyor.

\* \*\*Factory Method Eksikligi:\*\* Nesne yaratma mantigi ile is mantigi birbirine karismis durumda.\[cite: 1]

\* \*\*Siki Bagimlilik (Tight Coupling):\*\* Kodun esnekligi yok ve bakimi zor.



\### 3. Benim Uygulamam ve Kararim

Baslangic asamasinda sorunlari gormek adina bilerek "kotu" bir kod yazildi. AI'nin onerdigi "Factory Method" oruntusunun Faz 1'de nesne yaratma sorununu cozmek icin en uygun yol olduguna karar verdim.\[cite: 1]

