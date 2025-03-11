#ifndef CHANNEL_HPP
#define CHANNEL_HPP

class Channel{

enum channelMode{
    vulos,          // ANALOG | VHF/UHF AM/FM | UNSECURED 
    repeater,       // ANALOG 
    comsat,         // DIGITAL | VHF/UHF | SATELLITE (SECURED)
    comsec          // DIGITAL | VHF/UHF | UNSECURED / SECURED
};

public:
Channel();

float frequency;


};

#endif // CHANNEL_HPP  