#pragma once
#ifndef MMAPTESTREADER_H
#define MMAPTESTREADER_H

#include "Timer.h"
#include "JournalReader.h"

//@Author  github.com/qingtiandalaoye

typedef char char_19[19];
typedef char char_21[21];
typedef char char_64[64];
typedef char char_7[7];
typedef char char_9[9];
typedef char char_30[30];
typedef char char_31[31];
typedef char char_16[16];
typedef char char_13[13];
typedef char char_2[2];
typedef char char_11[11];

struct FrameTestData001
{
    char_13  	TradingDay;            //交易日
    char_31  	InstrumentID;          //合约代码
    char_9   	ExchangeID;            //交易所代码
    char_64  	ExchangeInstID;        //合约在交易所的代码
    double   	LastPrice;             //最新价
    double   	PreSettlementPrice;    //上次结算价
    double   	PreClosePrice;         //昨收盘
    double   	PreOpenInterest;       //昨持仓量
    double   	OpenPrice;             //今开盘
    double   	HighestPrice;          //最高价
    double   	LowestPrice;           //最低价
    int      	Volume;                //数量
    double   	Turnover;              //成交金额
    double   	OpenInterest;          //持仓量
    double   	ClosePrice;            //今收盘
    double   	SettlementPrice;       //本次结算价
    double   	UpperLimitPrice;       //涨停板价
    double   	LowerLimitPrice;       //跌停板价
    double   	PreDelta;              //昨虚实度
    double   	CurrDelta;             //今虚实度
    char_13  	UpdateTime;            //最后修改时间
    int      	UpdateMillisec;        //最后修改毫秒
    double   	BidPrice1;             //申买价一
    int      	BidVolume1;            //申买量一
    double   	AskPrice1;             //申卖价一
    int      	AskVolume1;            //申卖量一
    double   	BidPrice2;             //申买价二
    int      	BidVolume2;            //申买量二
    double   	AskPrice2;             //申卖价二
    int      	AskVolume2;            //申卖量二
    double   	BidPrice3;             //申买价三
    int      	BidVolume3;            //申买量三
    double   	AskPrice3;             //申卖价三
    int      	AskVolume3;            //申卖量三
    double   	BidPrice4;             //申买价四
    int      	BidVolume4;            //申买量四
    double   	AskPrice4;             //申卖价四
    int      	AskVolume4;            //申卖量四
    double   	BidPrice5;             //申买价五
    int      	BidVolume5;            //申买量五
    double   	AskPrice5;             //申卖价五
    int      	AskVolume5;            //申卖量五
};

class MMAPTestReader
{
public:
    MMAPTestReader();
    ~MMAPTestReader();
};

#endif