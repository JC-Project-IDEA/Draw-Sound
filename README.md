<a name="readme-top"></a>

<h1 align="center">🎵 DrawSound ｜電・紙樂器 🎵</h1>
<p align="center">🎨💻 用導電墨水將畫作變成電子樂器（聲音藝術互動裝置）</p>
<p align="center">👨‍🏫 導師: Andio Lai</p>



  <summary>📖 目錄</summary>
  <ol>
    <li> 
      <a href="#課程介紹"> 課程介紹</a>
    </li>
    <li>
      <a href="#課前準備"> 課前準備</a>
      <ul>
        <li><a href="#下載軟件">下載軟件</a></li>
        <li><a href="#認識硬件包">認識硬件包</a></li>
      </ul>
    </li>
    <li><a href="#lesson-1">Lesson 1</a></li>
    <li><a href="#lesson-2">Lesson 2</a></li>
    <li><a href="#lesson-3">Lesson 3</a></li>
    <li><a href="#常見問題集">常見問題集</a></li>
   
  </ol>


## 課程介紹
🧠
由聲音、新媒體藝術家 黎仲民Andio Lai 帶領學生學習不同 Software、Hardware的操作，將畫作變成電子樂器，從中學習到：
1. 電子聲音創作平台 Ableton Learning Synths、Audacity和Arduino 軟硬件的運用；
2. 繪畫互動介面：利用導電媒體（如conductive ink），創作出觸控式畫作；
3. 結合以上技巧，創作出獨一無二的視覺＋聲音藝術作品，並探索利用導電媒體創作共融藝術的可能性。

<img src="images/andiowork.jpg" alt="work" >

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## 課前準備
我們需要Software、Hardware的結合，才能完成本課程的藝術創作。在開始創作前，我們需要下載軟件和準備好電子零件和工具。

### 下載軟件
1. 前往Arduino官網下載Arduino IDE (建議使用Legacy IDE (1.8.X) 1.8.19版本): https://www.arduino.cc/en/software 

   ❓什麼是Arduino：

    Arduino是一款便捷靈活、方便上手的開源電子原型平台。包含硬件（各種型號的Arduino板）和軟件（ArduinoIDE）。由一個歐洲開發團隊於2005年冬季開發。

2. 下一步，我們去Audacity官網下載最新版本的Audacity: https://www.audacityteam.org/download/

    ❓什麼是Audacity：

     Audacity是一款跨平台的音頻編輯軟件，用於錄音和編輯音訊，是自由、開放原始碼的軟體。這個程式可用於剪輯音樂、合併音樂、錄音、去除人聲、去除雜音等。

### 認識硬件包
我們團隊準備好了創作本作品所需要的工具和電子元件，我們一起來認識一下吧！

<img src="images/toolkit.jpg" alt="toolkit" >

<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Lesson 1
下面我們開始真正的課程學習！

在本課程中，你將學習到關於合成器（Synthesizer或Synth）的基礎知識，並使用Audacity設計自己的聲音。

1. 打開下面的網址，開始音樂創作： 網絡App Web App - 合成器音樂 Synth Music -Ableton Learn Synth: https://learningsynths.ableton.com/en/playground

<img src="images/playground.jpg" alt="playground" >

2. 將製作好的聲音下載到本地文件夾裡，再使用Audacity編輯音訊，如果你不清楚如何使用Audacity，可以先觀看下面的教學視頻：

   Audacity Tutorial For Beginners by Mike Russell
   https://www.youtube.com/watch?v=vlzOb4OLj94


3. 聲音創作完成後，記得將聲音儲存為wav格式，改名為 001（如果你有多於1首歌，那就按照順序改名：001、002、003......），並將這些文件儲存在一個新的文件夾裡，文件夾的名字是 01。在工具包裡找到micro sd卡和讀卡器，將這個01文件夾儲存到micro sd卡裏。


<img src="images/rename-file.jpg" alt="rename" >


<p align="right">(<a href="#readme-top">back to top</a>)</p>

## Lesson 2

1. 聲音製作完成後，我們開始製作繪畫互動介面：利用導電媒體（如導電墨水、導電膠帶），創作出觸控式畫作。

2. 依照電路連接手冊連接電子元件, 電路連接手冊PDF下載 Connection Manual：[connection manual.pdf](https://github.com/nixhehehe/testing1/files/10908029/connection.manual.pdf)

<img src="images/connection.jpg" alt="connection" >


<p align="right">(<a href="#readme-top">back to top</a>)</p>


## Lesson 3

1. 組裝指南PDF下載 Assembly Guide：
[revised.guide.lesson3.pdf](https://github.com/nixhehehe/testing1/files/10908037/revised.guide.lesson3.pdf)

<img src="images/assembly1.jpg" alt="ass" >
<img src="images/assembly2.jpg" alt="ass" >




2. 現在我們打開已經下載好的Arduino IDE (1.8.19)軟件，為軟件安裝兩個編碼庫：SerialMP3、CapacitiveSensor; 下載路徑：Sketch --> Include Library --> Manage Libraries 

<img src="images/library.jpg" alt="lib" >


3. 安裝完編碼庫後，我們把鼠標放到下面的代碼欄，點擊右上角的複製按鈕，就可以直接複製下面的代碼啦，然後再把代碼粘貼到Arduino IDE內。（記得刪除Arduino IDE初始自帶的代碼）


```sh
#include "SerialMP3Player.h"// 使用MP3版的編碼庫library

#include <CapacitiveSensor.h>// 使用可感應導電墨水的CAP SENSE編碼庫library

#define TX 11 //to MP3 board RX //定義ARDUINO TX到MP3 RX引腳連接
#define RX 10 //to MP3 board TX //定義ARDUINO RX到MP3 TX引腳連接

SerialMP3Player mp3(RX, TX);// 定義起動MP3相關的TX， RX

CapacitiveSensor sensor1 = CapacitiveSensor(4, 2); 
//定義CAP SENSE導電感應引腳連接，兩者使用ARDUINO的DIGITAL引腳，並配合電阻達到感應運作 
//前者為SEND PIN,後者為RECIEVE PIN要連接到紙上


//設定：有電源起動時執行一次的程序
void setup() {
  Serial.begin(9600);     // 起動serial介面
  mp3.begin(9600);        // 開始MP3版的連接
  delay(500);             // 等待起動
  mp3.sendCommand(CMD_SEL_DEV, 0, 2);   //選取 sd-card
  delay(500);             // 等待起動
  mp3.setVol(15);// 設定音量
}

//迴圈: 處理器不停執行的程序

void loop() {

  long measurement =  sensor1.capacitiveSensor(10);//讀取SENSOR的數值

  Serial.print(measurement);//SERIAL PRINT SENSOR的數值以方便MAPPING
  Serial.println("\t");

if (measurement >= 400){//決定觸發起動歌曲的條件(值)
    mp3.play(1);     //歌曲於SD CARD內的次序
  }
  
  delay(50);//迴圈再執行的中間位
}
   ```

4. 在工具包裡找到USB線，讓一段連接Arduino Uno，另一端連接電腦的USB Type A端口，如果連接成果，你會看到自己的Arduino Uno已經通電，板上的LED燈會亮起來;
<p>
<img src="images/usba.jpg" alt="usba" width="400">
</p>

5. 在Arduino IDE軟件中選擇合適的Board (Tools --> Board) 和Port (Tools --> Port)。本課程使用的board是Arduino Uno。

<img src="images/board.jpg" alt="board" >
6. 在Arduino IDE軟件界面的左上角點擊“verify",之後再"upload"即可; 稍作等待後，如果你在屏幕下端看到“Done Compiling”的提示，說明已經將程式燒錄到Arduino板子上。


7.把sd card 放進MP3板的SD卡卡位
<p>
<img src="images/sd card.jpg" alt="sdcard" width="400">
</p>

8. 把耳機或者喇叭（需要連接aux音頻線）連接到mp3板的3.5mm插口，然後觸摸你的畫作，就能夠聽到音樂了～
(連接 3.5mm 線到 MP3 board)
<p>
<img src="images/audio port.jpg" alt="audio"  width="400">
  </p>

9. <a href="#常見問題集">遇到問題？點擊這裡查看解決辦法</a>



<p align="right">(<a href="#readme-top">back to top</a>)</p>

## 常見問題集



🤔️

1. 遇到問題時，我們可以在網上尋找解決辦法，Arduino官網的help center列舉了各種常見的問題：https://support.arduino.cc/hc/en-us ，你也可以在官網先觀看tutorials，對軟件、硬件進行更深入的學習。
2. 如果你是在運行Arduino IDE中遇到了問題，比如介面下方亮起紅色顯示error,你可以直接點擊“Copy error messages”，然後將error放到網上，就能找到解決辦法。有時候可能只是很小的問題，比如少打了一個標點符號或者打錯了一個字母、忘記安裝編碼庫等等。
3. 如果程式在燒錄後沒有顯示紅色的error，但是依然無法聽到聲音，那可以考慮是否是音頻本身或者電路連接的問題。打開Arduino IDE中的Serial Monitor (Tools --> Serial Monitor)，手指捏住萬字夾，如果看到Serial Monitor中的數值發生變動（一般會大於400），說明有可能是音頻本身的問題，如果捏住萬字夾，Serial Monitor中的數值沒有變化，則需要重新檢查電路連接。
4. 音頻問題：重新回顧 <a href="#lesson-1">Lesson 1</a></li> ， 確保按照每一個步驟將聲音儲存到了micro sd卡裡。你可以在電腦裡先聽一遍自己的聲音，確保聲音能夠正常播放的，micro sd卡需要用力按進mp3板的卡槽裡，燒錄過程中如果見到mp3板的led燈閃爍，說明燒錄成功。
5. 電路連接問題：重新回顧 <a href="#lesson-2">Lesson 2</a></li>的電路連接手冊，確保每條線路都依照手冊所示緊密連接，其中電阻和杜邦線都需要用力按進麵包版的孔裡才能通電；萬字夾需要夾緊導電墨水，墨水的面積需要足夠大，而且確保2號RECIEVE PIN是連接到紙上的（4號是SEND PIN，不能連接到紙上）。硬件的問題多種多樣，需要耐心排除各種問題，有時候可以嘗試更換新的麵包版、杜邦線、電阻，也可以嘗試把線插進麵包版不同的空位裡。



<p align="right">(<a href="#readme-top">back to top</a>)</p>


