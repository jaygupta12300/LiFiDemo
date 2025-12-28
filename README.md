# 📡 LiFiDemo

**LiFiDemo** is a Light Fidelity (Li-Fi) communication demonstration project that showcases data transmission using **visible light**. The system uses **Arduino boards**, **LEDs**, and **LDR/photodiode sensors**, along with **C# Windows Forms applications** for sending and receiving data.

---

## 🎥 Demo Video (Project in Action)

▶️ **Watch the Working Demo Video:**
👉 [https://github.com/jaygupta12300/LiFiDemo/blob/main/WorkingVideo.mp4](https://github.com/jaygupta12300/LiFiDemo/blob/main/WorkingVideo.mp4)

> *(GitHub will open the video player directly. You can also download it if needed.)*

---

## 🧩 Repository Structure

```
/
├── ReceiverSideArduino/          # Arduino receiver code
├── SenderSideArduino/            # Arduino sender code
├── ReciverSideFormC#/            # Receiver Windows Form (C#)
├── SenderSideFormC#/             # Sender Windows Form (C#)
├── LiFiSRC.7z                    # Combined source archive
├── Final Content.pdf             # Detailed project report
├── visible light communication.pptx  # LiFi theory presentation
├── WorkingVideo.mp4              # Live working demo video
├── README.md                     # Project documentation
```

---

## 🛠️ Features

* ✔️ Data transmission using visible light (Li-Fi)
* ✔️ Arduino-based sender and receiver
* ✔️ LED modulation and light sensing
* ✔️ Desktop GUI using C# Windows Forms
* ✔️ Complete documentation + demo video
* ✔️ Ideal for academic projects and demonstrations

---

## 🔧 Hardware Requirements

| Component                 | Description       |
| ------------------------- | ----------------- |
| Arduino Uno / Nano (2x)   | Sender & Receiver |
| LED                       | Light transmitter |
| LDR / Photodiode          | Light receiver    |
| Resistors                 | Circuit stability |
| Breadboard & Jumper Wires | Connections       |
| USB Cable                 | Arduino ↔ PC      |

---

## ⚙️ Software Requirements

* Arduino IDE
* Visual Studio (for C# Windows Forms)
* .NET Framework
* Windows OS

---

## 🔄 System Working (Overview)

1. **Sender C# Application** sends text data to Arduino.
2. **Sender Arduino** converts data into LED ON/OFF light pulses.
3. **Receiver Arduino** detects light changes using LDR/photodiode.
4. Signal is decoded back into data.
5. **Receiver C# Application** displays received text.

---

## 🔌 Circuit Diagrams

### 🔹 Sender Side Circuit

* Arduino Digital Pin → LED (via resistor)
* LED acts as light transmitter

📌 *Diagram placeholder (recommended to upload):*

```
Arduino Pin → Resistor → LED → GND
```

---

### 🔹 Receiver Side Circuit

* LDR + resistor in voltage divider
* Output connected to Arduino analog pin

📌 *Diagram placeholder:*

```
VCC → LDR → Analog Pin → Resistor → GND
```

> ℹ️ You can add actual circuit images later under:

```
/images/sender_circuit.png
/images/receiver_circuit.png
```

and embed them using:

```md
![Sender Circuit](images/sender_circuit.png)
```

---

## 🧱 Block Diagram

📌 *Recommended Block Diagram Flow:*

```
Sender App (C#)
      ↓
Sender Arduino
      ↓
LED (Light Transmission)
      ↓
LDR / Photodiode
      ↓
Receiver Arduino
      ↓
Receiver App (C#)
```

> You can add a block diagram image as:

```
/images/block_diagram.png
```

---

## 🖼️ Application Screenshots (Optional)

You can include screenshots of:

* Sender C# UI
* Receiver C# UI
* Arduino setup

📌 Example:

```md
![Sender UI](images/sender_ui.png)
![Receiver UI](images/receiver_ui.png)
```

---

## 🚀 How to Run the Project

### 1️⃣ Clone the Repository

```bash
git clone https://github.com/jaygupta12300/LiFiDemo.git
cd LiFiDemo
```

---

### 2️⃣ Arduino Setup

* Open Arduino IDE
* Upload:

  * `SenderSideArduino/*.ino` → Sender board
  * `ReceiverSideArduino/*.ino` → Receiver board
* Connect hardware as per circuit

---

### 3️⃣ Desktop Applications

* Open `SenderSideFormC#` in Visual Studio → Run
* Open `ReciverSideFormC#` in Visual Studio → Run
* Send text and observe real-time reception

---

## 📚 Documentation Included

* 📄 **Final Content.pdf** – Complete project report
* 📊 **visible light communication.pptx** – Li-Fi theory & concepts
* 🎥 **WorkingVideo.mp4** – Real hardware demonstration

---

## 🔮 Future Enhancements

* Improve transmission speed
* Add error detection & correction
* Support multimedia data
* Mobile application integration
* Use high-speed photodiodes

---

## 📜 License

This project is intended for **educational and academic use**.
(Add license if required.)

---

## 🤝 Contributing

Pull requests are welcome.
Feel free to fork, improve, and submit enhancements.
