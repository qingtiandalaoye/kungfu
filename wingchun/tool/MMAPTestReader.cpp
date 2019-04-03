#include "MMAPTestReader.h"

#include <iostream>


MMAPTestReader::MMAPTestReader()
{
}


MMAPTestReader::~MMAPTestReader()
{
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    std::string dir = "/tmp";
    std::string path = "qingtiandalaoye_test_perference";

    int64_t startNano = kungfu::yijinjing::NanoTimer::getInstance()->getNano();
    kungfu::yijinjing::JournalReaderPtr reader = kungfu::yijinjing::JournalReader::create(dir, path, startNano);

    kungfu::yijinjing::FramePtr frame;
    int total_number = 0;

    while (true)
    {
        frame = reader->getNextFrame();
        if (frame.get() != nullptr)
        {
            total_number++;

            void *data = frame->getData();
            FrameTestData001 * testMd = (FrameTestData001 *)data;
            if (total_number % 1000000 == 0) {
                std::cout << "read 1000000,  " << total_number << ", " << testMd->AskPrice1 << std::endl;
            }
        }
    }

    return 0;
}