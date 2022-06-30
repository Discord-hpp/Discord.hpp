#pragma once

#include <string>
#include <regex>

/**
 * https://discord.com/developers/docs/reference#snowflakes
 */
typedef std::string Snowflake;
/**
 * https://discord.com/developers/docs/topics/permissions
 */
typedef std::string Permissions;

/**
 * https://discord.com/developers/docs/reference#message-formatting-formats
 */
struct FormattingPatterns
{
	/**
	 * Regular expression for matching a user mention, strictly without a nickname
	 *
	 * The `id` group property is present on the `exec` result of this expression
	 */
	std::regex User(const char* =                     R"(<@(?<id>\d{17,20})>)");
	/**
	 * Regular expression for matching a user mention, strictly with a nickname
	 *
	 * The `id` group property is present on the `exec` result of this expression
	 * @deprecated Passing `!` in user mentions is no longer necessary / supported, and future message contents won't have it
	 */
	std::regex UserWithNickname(const char* =         R"(<@!(?<id>\d{17,20})>)");
	/**
	 * Regular expression for matching a user mention, with or without a nickname
	 *
	 * The `id` group property is present on the `exec` result of this expression
	 * @deprecated Passing `!` in user mentions is no longer necessary / supported, and future message contents won't have it
	 */
	std::regex UserWithOptionalNickname(const char* = R"(<@!?(?<id>\d{17,20})>)");
	/**
	 * Regular expression for matching a channel mention
	 *
	 * The `id` group property is present on the `exec` result of this expression
	 */
	std::regex Channel(const char* =                  R"(<#(?<id>\d{17,20})>)");
	/**
	 * Regular expression for matching a role mention
	 *
	 * The `id` group property is present on the `exec` result of this expression
	 */
	std::regex Role(const char* =                     R"(<@&(?<id>\d{17,20})>)");
	/**
	 * Regular expression for matching a custom emoji, either static or animated
	 *
	 * The `animated`, `name` and `id` group properties are present on the `exec` result of this expression
	 */
	std::regex Emoji(const char* =                    R"(<(?<animated>a)?:(?<name>\w{2,32}):(?<id>\d{17,20})>)");
	/**
	 * Regular expression for matching strictly an animated custom emoji
	 *
	 * The `animated`, `name` and `id` group properties are present on the `exec` result of this expression
	 */
	std::regex AnimatedEmoji(const char* =            R"(<(?<animated>a):(?<name>\w{2,32}):(?<id>\d{17,20})>)");
	/**
	 * Regular expression for matching strictly a static custom emoji
	 *
	 * The `name` and `id` group properties are present on the `exec` result of this expression
	 */
	std::regex StaticEmoji(const char* =              R"(<:(?<name>\w{2,32}):(?<id>\d{17,20})>)");
	/**
	 * Regular expression for matching a timestamp, either default or custom styled
	 *
	 * The `timestamp` and `style` group properties are present on the `exec` result of this expression
	 */
	std::regex Timestamp(const char* =                R"(<t:(?<timestamp>-?\d{1,13})(:(?<style>[tTdDfFR]))?>)");
	/**
	 * Regular expression for matching strictly default styled timestamps
	 *
	 * The `timestamp` group property is present on the `exec` result of this expression
	 */
	std::regex DefaultStyledTimestamp(const char* =   R"(<t:(?<timestamp>-?\d{1,13})>)");
	/**
	 * Regular expression for matching strictly custom styled timestamps
	 *
	 * The `timestamp` and `style` group properties are present on the `exec` result of this expression
	 */
	std::regex StyledTimestamp(const char* =          R"(<t:(?<timestamp>-?\d{1,13}):(?<style>[tTdDfFR])>)");
};
