#pragma once

#include <string>
#include <vector>

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

/**
 * https://discord.com/developers/docs/resources/emoji#emoji-object-emoji-structure
 */
struct APIEmoji : APIPartialEmoji
{
	/**
	 * Roles this emoji is whitelisted to
	 * 
	 * @note I think we will use JSON parse
	 */
	std::vector<Snowflake> roles;
	/**
	 * User that created this emoji
	 */
	APIUser user;
	/**
	 * Whether this emoji must be wrapped in colons
	 */
	bool require_colons;
	/**
	 * Whether this emoji is managed
	 */
	bool managed;
	/**
	 * Whether this emoji can be used, may be false due to loss of Server Boosts
	 */
	bool available;
};