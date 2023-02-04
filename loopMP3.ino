#include "SerialMP3Player.h"// 使用MP3版的編碼庫library
#define TX 11 //to MP3 board RX //定義ARDUINO TX到MP3 RX引腳連接
#define RX 10 //to MP3 board TX //定義ARDUINO RX到MP3 TX引腳連接

SerialMP3Player mp3(RX, TX);// 起動MP3相關的TX， RX

void setup() {
  Serial.begin(9600);     // 起動serial介面
  mp3.begin(9600);        // 開始MP3版的連接
  delay(500);             // 等待起動
  mp3.sendCommand(CMD_SEL_DEV, 0, 2);   //選取 sd-card
  delay(500);             // 等待起動
  mp3.setVol(10);// 設定音量
}
//迴圈: 處理器不停執行的程序

void loop() {
mp3.play(1);//歌曲於SD CARD內的次序
delay();//歌曲的時間/中斷時間 1000=1秒
}
