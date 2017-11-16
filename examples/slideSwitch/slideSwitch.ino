/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
滑动开关比例值

所需器件:

*/

/*该头文件引用由IntoRobot自动添加.*/
#include <WidgetSlideSwitch.h>

WidgetSlideSwitch slide;

void setup() 
{
// put your setup code here, to run once.
    slide.begin();
    Serial.begin(115200);
}

void loop() 
{
// put your main code here, to run repeatedly.
    Serial.print(slide.getRate());//获取开关比例
    delay(2000);
}
