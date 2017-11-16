#ifndef WIDGET_SLIDESWITCH_H_
#define WIDGET_SLIDESWITCH_H_

#include "application.h"

class WidgetSlideSwitch : public WidgetBaseClass
{
    public:
        WidgetSlideSwitch(uint8_t ucItem = 0);
        ~WidgetSlideSwitch();
        void begin(void (*UserCallBack)(void) = NULL);
        uint8_t getRate(void);

    private:
        char pCmdRateTopic[64];
        uint8_t _Item = 0;
        uint8_t _rateVal;

        void (*_EventCb)(void);
        void widgetBaseCallBack(uint8_t *payload, uint32_t len);
};

#endif
