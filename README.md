# ๐SPOTNIGHT๐ก

# Spotlight Night
>1๏ธโฃ ์ด์ ์์ ์์ผ๋ฅผ ํ๋ณดํ์ฌ ๊ตํต์ฌ๊ณ ๋ฅผ ์๋ฐฉ <br/>
>2๏ธโฃ ๋์ง(nudge)ํจ๊ณผ๋ฅผ ํตํ ๋ฌด๋จํก๋จ ๋ฐฉ์ง


# System Architecture
>![image](https://user-images.githubusercontent.com/86959644/206612841-89565577-4675-4a49-9b2a-9f7e37a039aa.png)

# HOW TO USE
>## detectPerson.ipynb<br/>
> ๐์ฌ๋์ detectํ๊ธฐ ์ํด yolo darknet model์ ์ฌ์ฉํจ <br/>
> โ๊ฐ๋ฐํ๊ฒฝ : Google colab <br/>
> ์ฌ์ ์์: srcํ์ผ์ ์๋ night.mp4 ํ์ผ์ Google drive์ ์ฌ๋ ค์ผํจ<br/>

`!./darknet detector demo cfg/coco.data cfg/yolov4.cfg yolov4.weights -dont_show /content/drive/MyDrive/night.mp4 -out_filename result.mp4 -ext_output` <br/>
/content/drive/MyDrive/night.mp4 : ๋์์ ํ์ผ์ ์ฅ ์์น<br/>
result.mp4 : ๋ถ์ ๊ฒฐ๊ณผ ์์ ํ์ผ<br/>
### ๐๊ฒฐ๊ณผํ๋ฉด
๋ถ์ ์  (night.mp4)<br/>
![image](https://user-images.githubusercontent.com/86959644/206639563-7bf309f0-5098-4a7a-8804-d9b471e75dc1.png) <br/>
๋ถ์ ํ (result.mp4)<br/>
![image](https://user-images.githubusercontent.com/86959644/206639672-2dc525d4-306c-41c2-a177-7e7f6f13257b.png)

>## test.ino<br/>
> ๐์๋ณด๋ชจํฐ์ ๋ ์ด์  ๋ชจ๋์ ์ด์ฉํ ์ ํํ ๊ฐ์ฒด ํฌ์ธํ ๊ฐ๋ฅ์ฑ์ ๋ํด ํ์ธํจ<br/>
> โ๊ฐ๋ฐํ๊ฒฝ : Arduino IDE 2.0.2 <br/>
> ์ฌ์ ์์: ์๋ณด๋ชจํฐ SG-90๊ณผ ๋ ์ด์  ๋ชจ๋ ๊ทธ๋ฆฌ๊ณ  Arduino UNO์ค๋น<br/>

![image](https://user-images.githubusercontent.com/86959644/206669879-d5889dd2-ebeb-4c31-9d0c-4bd632f281ee.png)
