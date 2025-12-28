# 📡 LiFiDemo

**LiFiDemo** is a Light Fidelity (Li-Fi) communication demonstration project that allows transmission of data using visible light — specifically using LEDs as transmitters and LDR (light dependent resistor) sensors or photodiodes as receivers. This repository contains Arduino code and C# desktop applications to send and receive data using simple hardware. ([GitHub][1])

---

## 📌 Overview

Traditional wireless communication like Wi-Fi uses radio frequency (RF) signals. Li-Fi, on the other hand, uses **visible light** to transmit information at high speeds through rapid ON/OFF modulation of light sources (LEDs), which is decoded by light sensors on the receiving end. ([GeeksforGeeks][2])

This project demonstrates a basic Li-Fi system where textual data or simple signals are transmitted from one Arduino (with LED) to another Arduino (with LDR/photodiode), and shown using Windows desktop applications (C# Forms). ([GitHub][1])

---

## 🧩 Repository Structure

```
/
├── ReceiverSideArduino/         # Arduino code for receiver
├── SenderSideArduino/           # Arduino code for sender
├── ReciverSideFormC#/           # C# Windows form for receiver
├── SenderSideFormC#/            # C# Windows form for sender
├── LiFiSRC.7z                   # Compressed source code (possibly combined)
├── Final Content.pdf            # Documentation/report for LiFi project
├── visible light communication.pptx  # Presentation about LiFi
├── WorkingVideo.mp4             # Demo video showing LiFi in action
├── README.md                    # This readme file
```

---

## 🛠️ Features

✔️ **Data Transmission Using Light** — Sends information using LED blinking patterns
✔️ **Arduino Integration** — Works with Arduino and simple analog sensors
✔️ **C# Forms Interface** — Easy GUI to send and receive messages
✔️ **Demo Video Included** — Shows working prototype in action
✔️ **Documentation & PPT** — Helps understand Li-Fi principles and project structure

---

## 🔧 Requirements

### Hardware

| Component                  | Purpose                           |
| -------------------------- | --------------------------------- |
| Arduino Board (Uno / Nano) | Transmitter / Receiver Controller |
| LED                        | Light source for transmission     |
| LDR / Photodiode           | Light sensor for reception        |
| Resistors                  | For LED and LDR circuits          |
| USB cable                  | Arduino ↔ PC connection           |

---

## 🧪 How It Works

1. **Sender Arduino** reads input data from the user (via form app).
2. It generates a sequence of ON/OFF light pulses with an LED.
3. **Receiver Arduino** uses an LDR/photodiode to detect changes in light intensity.
4. The receiver decodes the sequence into meaningful data.
5. A desktop application shows the received text in real-time.

This process is a simplified real-world demonstration of **visible light communication (VLC)** — the core idea behind Li-Fi systems. ([GeeksforGeeks][2])

---

## 🚀 Getting Started

### 🧠 Setup

#### 1. Clone the Repository

```bash
git clone https://github.com/jaygupta12300/LiFiDemo.git
cd LiFiDemo
```

---

### 2. Upload Arduino Sketch

1. Open **Arduino IDE**
2. Load `SenderSideArduino/*.ino` to Arduino connected as **Transmitter**
3. Load `ReceiverSideArduino/*.ino` to Arduino connected as **Receiver**
4. Connect hardware (LED to TX board, LDR to RX board)

---

### 3. Run Desktop Applications

#### 📤 Sender (C#)

1. Open `SenderSideFormC#` in Visual Studio
2. Build & Run (supports .NET Framework)
3. Enter text to send
4. Click **Send**

#### 📥 Receiver (C#)

1. Open `ReciverSideFormC#` in Visual Studio
2. Build & Run
3. Receiver form starts listening
4. Received text appears in the UI

---

## 📁 Included Documentation

✔ **Final Content.pdf** – Detailed project report
✔ **visible light communication.pptx** – Presentation on LiFi concepts
✔ **WorkingVideo.mp4** – Demonstrates system working in real hardware

These resources help explain not only the implementation but also the basic theory behind Li-Fi technology and its applications. ([GitHub][1])

---

## 🧠 About Li-Fi (Light Fidelity)

Li-Fi is a wireless communication technology that uses **LED light for data transmission** — sending information faster than many RF systems by rapidly switching the light signal that is picked up by a photo detector. ([GeeksforGeeks][2])

**Advantages:**

* Higher data bandwidth potential
* Secure within line-of-sight (light doesn’t pass through walls)
* Can reuse existing light infrastructure

**Challenges:**

* Needs clear line of sight
* Affected by ambient light interference

---

## 🎯 Future Improvements

✔ Add error-checking and synchronization
✔ Improve transmission speed using optimized modulation
✔ Support for more complex data (images/audio)
✔ Mobile app integration

---

## 📜 License

*(Include license info here if applicable — MIT, GPL, etc. If you want, tell me and I can generate a proper license section.)*

---

## 🙌 Contributing

Contributions and improvements are welcome! To contribute:

1. Fork this repository
2. Create a new branch — `feature/xyz`
3. Commit your changes
4. Open a pull request

Let’s build better Li-Fi demos! 🚀

---

If you want, I can also generate **circuit diagrams**, **block diagrams**, or **upload-ready screenshots** to include in the README.

[1]: https://github.com/jaygupta12300/LiFiDemo?utm_source=chatgpt.com "jaygupta12300/LiFiDemo: LiFi This project is ..."
[2]: https://www.geeksforgeeks.org/computer-networks/lifi-the-path-to-a-new-way-of-communication/?utm_source=chatgpt.com "LiFi: The path to a new way of communication"
