/*
 * Wazuh shared modules utils
 * Copyright (C) 2015, Wazuh Inc.
 * February 17, 2021.
 *
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation.
 */
#ifdef WIN32
#include "encodingWindows_test.h"
#include "encodingWindowsHelper.h"
#include "json.hpp"

void EncodingWindowsHelperTest::SetUp() {};

void EncodingWindowsHelperTest::TearDown() {};

TEST_F(EncodingWindowsHelperTest, NoExceptConversion)
{
    nlohmann::json test;
    std::wstring wideString = L"Eines de correcció del Microsoft Office 2016: català";
    std::string multibyteString;
    multibyteString.assign(wideString.begin(), wideString.end());
    test["correct"] = Utils::EncodingWindowsHelper::stringAnsiToStringUTF8(multibyteString);
    EXPECT_NO_THROW(test.dump());
}

TEST_F(EncodingWindowsHelperTest, ExceptWithoutConversion)
{
    nlohmann::json test;
    std::wstring wideString = L"Eines de correcció del Microsoft Office 2016: català";
    std::string multibyteString;
    multibyteString.assign(wideString.begin(), wideString.end());
    test["incorrect"] = multibyteString;
    EXPECT_ANY_THROW(test.dump());
}

TEST_F(EncodingWindowsHelperTest, ReturnValueEmptyConversion)
{
    EXPECT_EQ(Utils::EncodingWindowsHelper::stringAnsiToStringUTF8(""), "");
}

TEST_F(EncodingWindowsHelperTest, WStringToStringAnsiEmptyInput)
{
    EXPECT_EQ(Utils::EncodingWindowsHelper::wstringToStringAnsi(L""), "");
}

TEST_F(EncodingWindowsHelperTest, WStringToStringAnsiConversion)
{
    std::wstring input = L"Cami de l'àvia";

    std::string ansiResult = Utils::EncodingWindowsHelper::wstringToStringAnsi(input);

    std::wstring reconverted = Utils::EncodingWindowsHelper::stringToWStringAnsi(ansiResult);

    EXPECT_EQ(input, reconverted);
}

TEST_F(EncodingWindowsHelperTest, StringToWStringUTF8EmptyInput)
{
    EXPECT_EQ(Utils::EncodingWindowsHelper::stringToWStringUTF8(""), L"");
}

TEST_F(EncodingWindowsHelperTest, StringToWStringUTF8Conversion)
{
    std::string utf8Input = u8"Cami de l'àvia";

    std::wstring wideResult = Utils::EncodingWindowsHelper::stringToWStringUTF8(utf8Input);

    std::string reconverted = Utils::EncodingWindowsHelper::wstringToStringUTF8(wideResult);

    EXPECT_EQ(utf8Input, reconverted);
}

TEST_F(EncodingWindowsHelperTest, StringUTF8ToStringAnsiEmptyInput)
{
    EXPECT_EQ(Utils::EncodingWindowsHelper::stringUTF8ToStringAnsi(""), "");
}

TEST_F(EncodingWindowsHelperTest, StringUTF8ToStringAnsiConversion)
{
    std::string utf8Input = u8"Cami de l'àvia";

    std::string ansiResult = Utils::EncodingWindowsHelper::stringUTF8ToStringAnsi(utf8Input);

    std::wstring wide = Utils::EncodingWindowsHelper::stringToWStringAnsi(ansiResult);
    std::string roundTrip = Utils::EncodingWindowsHelper::wstringToStringUTF8(wide);

    EXPECT_EQ(roundTrip, utf8Input);
}

#endif
