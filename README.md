---

# Smart Shoes for Obstacle Detection for Visually Impaired

**Prototype based on Arduino and Ultrasonic Sensors**  
*Computer Architecture Course Project - Universidad Nacional del Altiplano, Perú*

## 🔍 Overview
Prototype of intelligent footwear that detects vertical obstacles (steps, uneven surfaces) using an **Arduino Uno** and **HC-SR04 ultrasonic sensor**. Provides haptic feedback via a buzzer to alert users about elevation changes in real-time.

## ⚙️ Key Features
- **Obstacle Detection**: Measures distances (2-400 cm range) with 92% accuracy in controlled tests
- **Haptic Feedback**: Buzzer generates variable-frequency alerts based on proximity
- **Data Visualization**: Python script for real-time distance monitoring via USB
- **Tested Environment**: Validated on stairs with 120ms average response time

## 🛠️ Technical Implementation
| **Hardware**               | **Software**                  |
|----------------------------|-------------------------------|
| • Arduino Uno R3           | • Arduino C++ firmware        |
| • HC-SR04 Ultrasonic Sensor| • Python data logger (serial) |
| • Buzzer (haptic feedback) | • CSV data collection         |
| • LiPo 3.7V Battery        |                               |

## 📈 Key Results
- 92% accuracy in step-edge detection
- Effective detection range: 5-200 cm
- Data collection success rate: 98.5%
- Clear distance patterns identified during ascent/descent

## 🚀 Future Improvements
1. Wireless communication (NRF24L01+ modules)
2. Frontal obstacle sensor integration
3. Apriori algorithm for object classification
4. Ergonomic 3D-printed housing
5. Testing with visually impaired users

## 👏 Acknowledgments  
Prof. Juarez Ruedas Jose Luis (UNA Puno)

---

**Repositories & Resources**  
📁 [Google Drive](https://drive.google.com/drive/folders/1rfPBGRQ2CNKHTFsHoCeSXkb8AUtrNZ1b)  
💻 [GitHub Repo](https://github.com/Snowprix/EyesShoes.git)  

---
