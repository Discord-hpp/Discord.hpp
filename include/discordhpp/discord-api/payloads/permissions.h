#pragma once

/**
 * Resource: https://discord.com/developers/docs/topics/permissions
 */
#include <string>
#include <optional>

#include "../globals.h"

/**
 * https://discord.com/developers/docs/topics/permissions#role-object-role-tags-structure
 */
struct APIRoleTags
{
	/**
	 * The id of the bot this role belongs to
	 */
	std::optional<Snowflake> bot_id;
	/**
	 * Whether this is the guild's premium subscriber role
	 */
	std::optional<bool> premium_subscriber;
	/**
	 * The id of the integration this role belongs to
	 */
	std::optional<Snowflake> integration_id;
};

/**
 * https://discord.com/developers/docs/topics/permissions#role-object
 */
struct APIRole
{
	/**
	 * Role id
	 */
	Snowflake id;
	/**
	 * Role name
	 */
	std::string name;
	/**
	 * Integer representation of hexadecimal color code
	 */
	unsigned int color;
	/**
	 * If this role is pinned in the user listing
	 */
	bool hoist;
	/**
	 * The role icon hash
	 */
	std::optional<std::string> icon;
	/**
	 * The role unicode emoji as a standard emoji
	 */
	std::optional<std::string> unicode_emoji;
	/**
	 * Position of this role
	 */
	unsigned int position;
	/**
	 * Permission bit set
	 *
	 * See https://en.wikipedia.org/wiki/Bit_field
	 */
	Permissions permissions;
	/**
	 * Whether this role is managed by an integration
	 */
	bool managed;
	/**
	 * Whether this role is mentionable
	 */
	bool mentionable;
	/**
	 * The tags this role has
	 */
	std::optional<APIRoleTags> tags;
};
