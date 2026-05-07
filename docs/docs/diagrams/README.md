📊 Faz 1: Mimari ve UML Diyagramları
Bu bölümde, projenin ilk aşamasında nesne yaratma sorumluluğunun nasıl merkezi bir yapıya (Factory Method) taşındığı görselleştirilmiştir.

🏗️ Nesne Yaratma Sorunu ve Çözümü (Factory Method)
Önceki Durum: Nesneler doğrudan kod içinde new operatörü ile oluşturuluyordu.

Sonraki Durum (Çözüm): NotificationFactory sınıfı eklenerek nesne oluşturma mantığı tek bir merkezde toplandı.

```mermaid
classDiagram
    class IObserver {
        <<interface>>
        +update(msg)
    }
    class User {
        +update(msg)
    }
    class ObserverDecorator {
        <<abstract>>
        -IObserver wrapped
        +update(msg)
    }
    class PriorityDecorator {
        +update(msg)
    }
    class NotificationFacade {
        -IFormatStrategy formatter
        +sendNotification(user, msg)
    }

    IObserver <|-- User
    IObserver <|-- ObserverDecorator
    ObserverDecorator <|-- PriorityDecorator
    NotificationFacade ..> IObserver : "Sistemi Yonetir"
```
🚀 Not: Bu diyagram, phase-1 kapsamında uygulanan Factory Method örüntüsünün sınıf yapısını göstermektedir.
