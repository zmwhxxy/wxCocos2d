#ifndef __TOOLSET_H__
#define __TOOLSET_H__

#include "cocos2d.h"
#include "FairyGUI.h"

NS_FGUI_BEGIN

class ToolSet
{
public:
    static cocos2d::Color4B hexToColor(const char* str);
    static cocos2d::Color3B intToColor(unsigned int rgb);
    static unsigned int colorToInt(const cocos2d::Color3B& color);

    static cocos2d::Rect intersection(const cocos2d::Rect& rect1, const cocos2d::Rect& rect2);
    static int findInStringArray(const std::vector<std::string>& arr, const std::string& str);

    static bool isFileExist(const std::string& fileName);
};

class FastSplitter
{
public:
    FastSplitter();
    void start(const char* data, unsigned long dataLength, char delimiter);
    bool next();
    const char* getText();
    unsigned long getTextLength();
    void getKeyValuePair(char* keyBuf, unsigned long keyBufSize, char* valueBuf, unsigned long valueBufSize);

private:
    const char* data;
    unsigned long dataLength;
    unsigned long textLength;
    char delimiter;
};

NS_FGUI_END

#endif
