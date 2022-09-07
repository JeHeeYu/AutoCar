# OpenCV Line Tracing Project
## 개요
OpenCV를 이용한 Line Tracing 및 자율 주행 프로젝트 예제
## Hardware
||||||
|:---:|:---:|:---:|:---:|:---:|
|<img src="https://user-images.githubusercontent.com/87363461/162557259-ebb2372b-73f4-4538-87d6-1b5e95a1b73a.jpg" width="160" height="200">|<img src="https://user-images.githubusercontent.com/87363461/162557284-99760ac0-82c7-40ea-a3c3-a6fdfc4fb87c.jpg" width="160" height="200">|<img src="https://user-images.githubusercontent.com/87363461/162557325-11bd7d58-6cc6-470f-8a29-ba30501f3b12.jpg" width="160" height="200">|<img src="https://user-images.githubusercontent.com/87363461/188588049-3e25e439-de0a-44f1-9687-4f56adb65df0.JPG" width="160" height="200">|<img src="https://user-images.githubusercontent.com/87363461/188588655-e12cce69-aad6-4d57-a252-01bbd71b43ce.JPG" width="160" height="200">
|[Jetson Xavier AGX]|[Nucleo F401RE]|[L298N]|[Logitech C920]|[Car Frame]
## Develpment Tool
<b>Language</b> : C, Python
<br>
<b>Vision</b> : OpenCV
<br>
<b>Firmware</b> : STM32CUBEIDE
## Description
Detection Part인 Xavier와 Control Part인 STM32 를 분리하여 감지, 구동을 나눔
### 동작 순서
<pre>
1. 영상 취득
2. Gray Scale 변환
3. ROI 설정
4. HSV 변환 검출
5. Line Detection
</pre>
<br>
Detection에서 Line을 검출하여 각도 계산 후 각도에 맞는 직진, 좌회전, 우회전 구동
<br>
Detection Part와 Control Part는 Serial 통신을 이용하여 통신
<pre>
STRAGIHT = 'A'
STOP = 'B'
RIGHT = 'C'
LEFT = 'D'
</pre>
<br>
