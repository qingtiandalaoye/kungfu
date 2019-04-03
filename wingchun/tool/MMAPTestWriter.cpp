#include "MMAPTestWriter.h"
#include <iostream>


MMAPTestWriter::MMAPTestWriter()
{
}


MMAPTestWriter::~MMAPTestWriter()
{
}



int main() {

    std::cout << "Hello, World!" << std::endl;
    std::string dir = "/tmp";
    std::string path = "qingtiandalaoye_test_perference";
    kungfu::yijinjing::JournalWriterPtr writer = kungfu::yijinjing::JournalWriter::create(dir, path);

    FrameTestData001 testMd;
    memcpy(testMd.TradingDay, "2019-04-03", 13);
    memcpy(testMd.InstrumentID, "rb1905", 31);
    memcpy(testMd.ExchangeID, "SHFE", 9);
    memcpy(testMd.ExchangeInstID, "rb1905", 64);
    testMd.LastPrice = 3567;
    testMd.PreSettlementPrice = 3400;
    testMd.PreClosePrice = 3456;
    testMd.PreOpenInterest = 1234;
    testMd.OpenPrice = 3567;
    testMd.HighestPrice = 1234;
    testMd.LowestPrice = 1234;
    testMd.Volume = 1234;
    testMd.Turnover = 12345;
    testMd.OpenInterest = 123456;
    testMd.ClosePrice = 3434;
    testMd.SettlementPrice = 123;
    testMd.UpperLimitPrice = 5555;
    testMd.LowerLimitPrice = 3333;
    testMd.PreDelta = 12;
    testMd.CurrDelta = 12;
    memcpy(testMd.UpdateTime, "18:18:18", 13);
    testMd.UpdateMillisec = 500;
    testMd.BidPrice1 = 3456;
    testMd.BidVolume1 = 3456;
    testMd.AskPrice1 = 3456;
    testMd.AskVolume1 = 3456;
    testMd.BidPrice2 = 1;
    testMd.BidVolume2 = 2;
    testMd.AskPrice2 = 3;
    testMd.AskVolume2 = 4;
    testMd.BidPrice3 = 5;
    testMd.BidVolume3 = 6;
    testMd.AskPrice3 = 7;
    testMd.AskVolume3 = 8;
    testMd.BidPrice4 = 9;
    testMd.BidVolume4 = 10;
    testMd.AskPrice4 = 11;
    testMd.AskVolume4 = 12;
    testMd.BidPrice5 = 13;
    testMd.BidVolume5 = 14;
    testMd.AskPrice5 = 15;
    testMd.AskVolume5 = 16;

    int total_number = 1;

    while(true)
    {
        testMd.AskPrice1 = testMd.AskPrice1 + 1;
        testMd.BidPrice1 = testMd.BidPrice1 + 1;
        writer->write_frame(&testMd, sizeof(FrameTestData001), 1, MSG_TYPE_LF_MD, true, total_number);
        
        if (total_number % 1000000 == 0) {
            std::cout << "write 1000000,  " << total_number << ", " << testMd.AskPrice1 << std::endl;
        }
        total_number++;
    }

    return 0;
}