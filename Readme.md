MM-ToF10 用 Arduinoライブラリ

-------------------------


## MM-ToF10とは

MM-ToF10とは、サンハヤト株式会社 から発売の Spresense向け ToFセンサー Add-onボードです。
詳細は、下記商品サイトをご覧ください。

![](https://shop.sunhayato.co.jp/cdn/shop/files/image-mm-tof10-is-01_8fbe3afe-b331-403e-b4d3-459751dc0205_606x606.jpg?v=1729473437)

MM-ToF10 : https://shop.sunhayato.co.jp/products/mm-tof10-is

サンハヤト株式会社 ：https://www.sunhayato.co.jp/


-------------------------

### API

#### begin

  引数： なし

  戻り値： なし
  
  説明：
        ライブラリを初期化を行います。。

#### end

  引数： なし

  戻り値： なし
  
  説明：
        ライブラリを破棄します。

#### wakeup

  引数： なし

  戻り値： なし
  
  説明：
        デバイスを起床します。
        
#### sleep

  引数： なし

  戻り値： なし
  
  説明：
        デバイスをスリープします。


#### sync

  引数： なし

  戻り値： なし
  
  説明：
        同期モードに遷移し、同期を行います。

#### nomal

  引数：
          MMToF10_Distance dist : 距離モードを指定します。
          MMToF10_Rate     rate : フレームレートモードを指定します。

  戻り値： なし
  
  説明：
        通常計測モードに遷移します。このモードでのみ測距が可能です。

#### skip

  引数：int cnt  : 破棄するバイト数を指定します。

  戻り値： なし
  
  説明：
        指定したバイト数だけデータを破棄します。データの同期のために使用します。
        引数を指定しない場合、受け取ったパケットで指定されたサイズだけ破棄します。

#### set

  引数：
          int cmd  : 設定したいコマンドコードを指定します。
          int val  : 設定したいデータを指定します。
          int cnt  : 

  戻り値： なし

  説明：
        MM-S50MV にコマンドと値を設定します。
        MM-S50MV のコマンドは、デバイス仕様書を参照してください。
        MM-S50MV : https://shop.sunhayato.co.jp/products/mm-s50mv

#### led

  引数：
          int r  : 赤色の値を指定します。
          int g  : 青色の値を指定します。
          int b  : 緑色の値を指定します。
  
  戻り値： なし

  説明：
        LEDを指定した色で点灯させます。


#### get1d

  引数：なし
  
  戻り値： float distance : 距離データ(mm)

  説明：
        1次元の距離データを取得します。(mm)


#### get3d

  引数：
         float* ptr : 取得したデータを格納する配列を指定します。uint32_tの4*8個のデータ（128バイト）が格納できるエリアが必要です。

  戻り値：

  説明：
        3次元の距離データを取得します。(mm)


### 使い方

    以下のサンプルコードを参考にしてください。
    
    examples/OneDMesure/OneDMesure.ino
    examples/ThreeDMesure/ThreeDMesure.ino

