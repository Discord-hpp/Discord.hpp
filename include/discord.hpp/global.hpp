#pragma once

#include <string>
#include <regex>

typedef std::string Snowflake;
typedef std::string Permissions;

struct FormattingPatterns
{
	std::regex User(const char*                     = R"(<@(?<id>\d{17,20})>)");
	std::regex UserWithNickname(const char*         = R"(<@!(?<id>\d{17,20})>)");
	std::regex UserWithOptionalNickname(const char* = R"(<@!?(?<id>\d{17,20})>)");
	std::regex Channel(const char*                  = R"(<#(?<id>\d{17,20})>)");
	std::regex Role(const char*                     = R"(<@&(?<id>\d{17,20})>)");
	std::regex Emoji(const char*                    = R"(<(?<animated>a)?:(?<name>\w{2,32}):(?<id>\d{17,20})>)");
	std::regex AnimatedEmoji(const char*            = R"(<(?<animated>a):(?<name>\w{2,32}):(?<id>\d{17,20})>)");
	std::regex StaticEmoji(const char*              = R"(<:(?<name>\w{2,32}):(?<id>\d{17,20})>)");
	std::regex Timestamp(const char*                = R"(<t:(?<timestamp>-?\d{1,13})(:(?<style>[tTdDfFR]))?>)");
	std::regex DefaultStyledTimestamp(const char*   = R"(<t:(?<timestamp>-?\d{1,13})>)");
	std::regex StyledTimestamp(const char*          = R"(<t:(?<timestamp>-?\d{1,13}):(?<style>[tTdDfFR])>)");
};
