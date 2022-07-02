#pragma once

#include <string>
#include <vector>
#include <algorithm>
#include <optional>

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
	std::optional<bool> animated;
};

/**
 * https://discord.com/developers/docs/resources/emoji#emoji-object-emoji-structure
 */
struct APIEmoji : APIPartialEmoji
{
	/**
	 * Roles this emoji is whitelisted to
	 */
	// We need to test this if we can make an array of roles and put the id in here
	std::optional<std::vector<Snowflake>> roles;
	/**
	 * User that created this emoji
	 */
	std::optional<APIUser> user;
	/**
	 * Whether this emoji must be wrapped in colons
	 */
	std::optional<bool> require_colons;
	/**
	 * Whether this emoji is managed
	 */
	std::optional<bool> managed;
	/**
	 * Whether this emoji can be used, may be false due to loss of Server Boosts
	 */
	std::optional<bool> available;
};
