#include "mgos_arduino_adafruit_tsl25721.h"


TSL25721 *mgos_tsl25721_create(uint8_t addr = TSL25721_ADDR_FLOAT) {
    return new TSL25721(addr);
}

int mgos_tsl25721_begin(TSL25721 *tsl) {
    if (tsl == nullptr) return 0;
	//LOG(LL_INFO, ("test1"));
    return tsl->begin();
}

void mgos_tsl25721_enable(TSL25721 *tsl) {
    if (tsl != nullptr) {
        tsl->enable();
    }
}

void mgos_tsl25721_disable(TSL25721 *tsl) {
    if (tsl != nullptr) {
        tsl->disable();
    }
}

int mgos_tsl25721_getLuminosity(TSL25721 *tsl, int channel) {
    return (tsl == nullptr) ? -1 : tsl->getLuminosity(channel);
}

int mgos_tsl25721_getFullLuminosity(TSL25721 *tsl) {
    return (tsl == nullptr) ? -1 : tsl->getFullLuminosity();
}

void mgos_tsl25721_setIntegrationTime(TSL25721 *tsl, int time) {
    if (tsl != nullptr) {
        tsl->setTiming((tsl25721IntegrationTime_t) time);
    }
}

void mgos_tsl25721_getStatus(TSL25721 *tsl) {
    if (tsl != nullptr) {
        tsl->getStatus();
    }
}



void mgos_tsl25721_setGain(TSL25721 *tsl, int gain) {
    if (tsl != nullptr) {
        tsl->setGain((tsl25721Gain_t) gain);
    }
}

uint32_t mgos_tsl25721_calculateLux(TSL25721 *tsl, uint16_t ch0, uint16_t ch1) {
    return (tsl == nullptr) ? -1 : tsl->calculateLux(ch0, ch1);
}

void mgos_tsl25721_close(TSL25721 *tsl) {
    if (tsl != nullptr) {
        delete tsl;
        tsl = nullptr;
    }
}

