#include "WidgetSlideSwitch.h"


WidgetSlideSwitch::WidgetSlideSwitch(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pCmdRateTopic,0,sizeof(pCmdRateTopic));
    sprintf(pCmdRateTopic,"channel/slideSwitch_%d/cmd/rate",_Item);
}

WidgetSlideSwitch::~WidgetSlideSwitch()
{
    
}

void WidgetSlideSwitch::begin(void (*UserCallBack)(void))
{
    IntoRobot.subscribe(pCmdRateTopic,NULL,this);
}


uint8_t WidgetSlideSwitch::getRate(void)
{
    return _rateVal;
}


void WidgetSlideSwitch::widgetBaseCallBack(uint8_t *payload, uint32_t len)
{
    _rateVal = atoi((char *)payload);
}

