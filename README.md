# 🌙SPOTNIGHT💡

# Spotlight Night
>1️⃣ 운전자의 시야를 확보하여 교통사고를 예방 <br/>
>2️⃣ 넛지(nudge)효과를 통한 무단횡단 방지


# System Architecture
>![image](https://user-images.githubusercontent.com/86959644/206612841-89565577-4675-4a49-9b2a-9f7e37a039aa.png)

# HOW TO USE
>## detectPerson.ipynb<br/>
> 📌사람을 detect하기 위해 yolo darknet model을 사용함 <br/>
> ⚙개발환경 : Google colab <br/>
> 사전작업: src파일에 있는 night.mp4 파일을 Google drive에 올려야함<br/>

`!./darknet detector demo cfg/coco.data cfg/yolov4.cfg yolov4.weights -dont_show /content/drive/MyDrive/night.mp4 -out_filename result.mp4 -ext_output` <br/>
/content/drive/MyDrive/night.mp4 : 동영상 파일저장 위치<br/>
result.mp4 : 분석 결과 영상 파일<br/>
### 🎞결과화면
분석 전 (night.mp4)<br/>
![image](https://user-images.githubusercontent.com/86959644/206639563-7bf309f0-5098-4a7a-8804-d9b471e75dc1.png) <br/>
분석 후 (result.mp4)<br/>
![image](https://user-images.githubusercontent.com/86959644/206639672-2dc525d4-306c-41c2-a177-7e7f6f13257b.png)

>## test.ino<br/>
> 📌서보모터와 레이저 모듈을 이용한 정확한 객체 포인팅 가능성에 대해 확인함<br/>
> ⚙개발환경 : Arduino IDE 2.0.2 <br/>
> 사전작업: 서보모터 SG-90과 레이저 모듈 그리고 Arduino UNO준비<br/>

![image](https://user-images.githubusercontent.com/86959644/206669879-d5889dd2-ebeb-4c31-9d0c-4bd632f281ee.png)
