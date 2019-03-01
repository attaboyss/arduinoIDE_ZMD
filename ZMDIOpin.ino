/*
本程序示例提供了芝麻豆主控所有端口和arduino UNO的管脚对应关系
示例程序中提供了常用的一些函数示例供参考学习
芝麻豆主控的每个数字端口含有一个主IO引脚和一个辅助IO引脚
大多数模块只使用了端口的主IO引脚/*
本程序示例提供了芝麻豆主控所有端口和arduino UNO的管脚对应关系
示例程序中提供了常用的一些函数示例供参考学习
芝麻豆主控的每个数字端口含有一个主IO引脚和一个辅助IO引脚
大多数模块只使用了端口的主IO引脚
只有少数模块如超声波。数码管模块使用了端口中的主辅IO引脚
*/
int D1=6;//端口D1主IO引脚
int D1f=5;//端口D1辅助IO引脚
int D2=10;//端口D2主IO引脚
int D2f=9;//端口D2辅助IO引脚
int D3=11;//端口D3主IO引脚
int D3f=3;//端口D3辅助IO引脚
int D4=13;//端口D4主IO引脚
int D4f=12;//端口D4辅助IO引脚
int D5=2;//端口D5主IO引脚
只有少数模块如超声波。数码管模块使用了端口中的主辅IO引脚
*/
int D1=6;//端口D1主IO引脚
int D1f=5;//端口D1辅助IO引脚
int D2=10;//端口D2主IO引脚
int D2f=9;//端口D2辅助IO引脚
int D3=11;//端口D3主IO引脚
int D3f=3;//端口D3辅助IO引脚
int D4=13;//端口D4主IO引脚
int D4f=12;//端口D4辅助IO引脚
int D5=2;//端口D5主IO引脚
int D5f=8;//端口D5辅助IO引脚
int D6=1;//端口D6主IO引脚
int D6f=0;//端口D6辅助IO引脚
int D7=4;//端口D7主IO引脚
int D7f=7;//端口D7辅助IO引脚
int D8=A5;//端口D8主IO引脚
int D8f=A4;//端口D8辅助IO引脚
int ZMDA1=A0;//端口A1IO引脚
int ZMDA2=A1;//端口A2IO引脚
int ZMDA3=A2;//端口A3IO引脚
int ZMDA4=A3;//端口A4IO引脚
//以上声明的变量为芝麻豆主控端口和管脚对应关系

void setup() {
pinMode(D1,OUTPUT);//设置D1端口管脚模式为输出
pinMode(D4,INPUT);//设置D4端口管脚模式为输入
}

void loop() {
digitalWrite(D1,HIGH);//D1端口输出高电平
analogWrite(D2,255);//D2端口PWM输出255
digitalRead(D4);//D4端口接数字传感器
analogRead(ZMDA1);//A1端口接模拟传感器（如旋钮电位器）
delay(500);//延时500毫秒
delayMicroseconds(1000);//延时1000微妙
}
