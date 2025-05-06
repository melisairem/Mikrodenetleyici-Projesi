# 🔌 Bluetooth Kontrollü LED Lamba – Arduino Projesi

Bu proje, **Mikrodenetleyiciler Laboratuvarı** dersi kapsamında gerçekleştirilmiş bir uygulama ödevidir. Projede, Arduino ile Bluetooth teknolojisi kullanılarak LED lambaların uzaktan kontrolü sağlanmaktadır.

## 🎯 Proje Amacı

Bluetooth üzerinden kablosuz bağlantı ile LED lambaların açılması, kapatılması ve yanıp sönmesi sağlanmaktadır. Kullanıcı, mobil uygulama arayüzü üzerinden komut vererek bu işlemleri gerçekleştirebilir. Bu sistem, ev otomasyonu ve enerji verimliliği gibi alanlarda kullanılabilecek temel bir prototip sunmaktadır.

## 📹 Tanıtım Videosu

Projeye ait tanıtım videosunu buradan izleyebilirsiniz:  
👉 [YouTube - Proje Tanıtımı](https://youtu.be/gWP80YdLFGA?si=-Zf7TeSe5_6Gjqv_)

## 🛠 Kullanılan Malzemeler

- Arduino UNO
- HC-06 Bluetooth Modülü
- LED Lamba
- Direnç, kablolar ve breadboard
- Mobil uygulama: *Arduino BlueControl*

## 🔧 Devre Bağlantıları

- **LED**:
  - Anot (uzun bacak): Arduino pin 13
  - Katot: GND
- **HC-06 Bluetooth Modülü**:
  - RXD → Arduino TX
  - TXD → Arduino RX
  - VCC → 5V
  - GND → GND

Mobil uygulamadaki A, B, C tuşları bu komutlara atanmıştır.

## 💻 Arduino Kodları

Kod dosyası: `sketch_jun9a.ino`  
Seri port haberleşmesi ve pin kontrolü kullanılarak LED davranışları Arduino ile programlanmıştır.

## 🧩 Proteus ve Donanım Görselleri

Ayrıca projede kullanılan devre şemaları ve fiziksel donanımın görselleri de proje raporunda yer almaktadır.

ℹ️ Not

Bu proje bir üniversite dersi (Mikrodenetleyiciler) kapsamında geliştirilmiştir. Eğitim ve gösterim amacıyla paylaşılmıştır.

