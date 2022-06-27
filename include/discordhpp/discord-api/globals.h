#pragma once

#include <string>
#include <regex>

typedef std::string snowflake;
typedef std::string permissions;

struct FormattingPatterns
{
	std::regex user();						/* /<@(?<id>\d{17,20})>/ */
	std::regex UserWithNickname();			/* /<@!(?<id>\d{17,20})>/ */
	std::regex UserWithOptionalNickname();	/* /<@!?(?<id>\d{17,20})>/ */
	std::regex Channel();					/* /<#(?<id>\d{17,20})>/ */
	std::regex Role();						/* /<@&(?<id>\d{17,20})>/ */
	std::regex Emoji();						/* /<(?<animated>a)?:(?<name>\w{2,32}):(?<id>\d{17,20})>/ */
	std::regex AnimatedEmoji();				/* /<(?<animated>a):(?<name>\w{2,32}):(?<id>\d{17,20})>/ */
	std::regex StaticEmoji();				/* /<:(?<name>\w{2,32}):(?<id>\d{17,20})>/ */
	std::regex Timestamp();					/* /<t:(?<timestamp>-?\d{1,13})(:(?<style>[tTdDfFR]))?>/ */
	std::regex DefaultStyledTimestamp();	/* /<t:(?<timestamp>-?\d{1,13})>/ */
	std::regex StyledTimestamp();			/* /<t:(?<timestamp>-?\d{1,13}):(?<style>[tTdDfFR])>/ */
};