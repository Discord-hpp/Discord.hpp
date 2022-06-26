/**
 * Discord.hpp - A fast and lightweight Discord API library, written in C++
 * Copyright 2022 (c) - the Discord.hpp contributors
 * 
 * WARNING: this code is generated from TypeScript.
 * Please check the error before use it
 */
#pragma once

#include <string>
#include "core.h"

using namespace js;

typedef std::string Snowflake;
typedef std::string Permissions;

extern object FormattingPatterns;

object FormattingPatterns = as<std::shared_ptr<const>>(object{
	object::pair{STR("User"), (new RegExp(STR("<@(?<id>\d{17,20})")))},
	object::pair{STR("UserWithNickname"), (new RegExp(STR("<@!(?<id>\d{17,20})")))},
	object::pair{STR("UserWithOptionalNickname"), (new RegExp(STR("<@!?(?<id>\d{17,20})")))},
	object::pair{STR("Channel"), (new RegExp(STR("<#(?<id>\d{17,20})")))},
	object::pair{STR("Role"), (new RegExp(STR("<@&(?<id>\d{17,20})")))},
	object::pair{STR("Emoji"), (new RegExp(STR("<(?<animated>a)?:(?<name>\w{2,32}):(?<id>\d{17,20})")))},
	object::pair{STR("AnimatedEmoji"), (new RegExp(STR("<(?<animated>a):(?<name>\w{2,32}):(?<id>\d{17,20})")))},
	object::pair{STR("StaticEmoji"), (new RegExp(STR("<:(?<name>\w{2,32}):(?<id>\d{17,20})")))},
	object::pair{STR("Timestamp"), (new RegExp(STR("<t:(?<timestamp>-?\d{1,13})(:(?<style>[tTdDfFR]))?")))},
	object::pair{STR("DefaultStyledTimestamp"), (new RegExp(STR("<t:(?<timestamp>-?\d{1,13})")))},
	object::pair{STR("StyledTimestamp"), (new RegExp(STR("<t:(?<timestamp>-?\d{1,13}):(?<style>[tTdDfFR])")))}
	});