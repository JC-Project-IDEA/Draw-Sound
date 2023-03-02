//Draw2

//** 有可能要先再install library**

#include "SerialMP3Player.h"// 使用MP3版的編碼庫library
#include <CapacitiveSensor.h>// 使用可感應導電墨水的CAP SENSE編碼庫library

#define TX 11 //to MP3 board RX //定義ARDUINO TX到MP3 RX引腳連接
#define RX 10 //to MP3 board TX //定義ARDUINO RX到MP3 TX引腳連接

SerialMP3Player mp3(RX, TX);// 定義起動MP3相關的TX， RX

CapacitiveSensor sensor1 = CapacitiveSensor(4, 2); 
//定義CAP SENSE導電感應引腳連接，兩者使用ARDUINO的DIGITAL引腳，並配合電阻達到感應運作 
//前者為SEND PIN,後者為RECIEVE PIN要連接到紙上

CapacitiveSensor sensor2 = CapacitiveSensor(6, 5); //sensor2

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

  long measurement =  sensor1.capacitiveSensor(10);//讀取SENSOR1的數值
  long measurement2 =  sensor2.capacitiveSensor(10);//讀取SENSOR2的數值


  Serial.print(measurement);//SERIAL PRINT SENSOR1的數值以方便MAPPING
  Serial.print("\t");
  Serial.print(measurement2);//SERIAL PRINT SENSOR2的數值以方便MAPPING
  Serial.println("\t");



//每個也應先用SERIAL MONITOR幫忙下調節
if (measurement >= 400){//決定觸發起動歌曲的條件(值)
    mp3.play(1);     //歌曲於SD CARD內的次序
  }
  if (measurement2 >= 400){//決定觸發起動歌曲的條件(值)
    mp3.play(2);     //歌曲於SD CARD內的次序
  }

  
  delay(50);//迴圈再執行的中間位
}
