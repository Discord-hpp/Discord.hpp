#pragma once

#include <string>

#include "permissions.h"
#include "user.h"
#include "../globals.h"

struct APIPartialEmoji
{
	/**
	 * Emoji id
	 */
	Snowflake id;
	/**
	 * Emoji name (can be null only in reaction emoji objects)
	 */
	std::string name;
	/**
	 * Whether this emoji is animated
	 */
	bool animated;
};
