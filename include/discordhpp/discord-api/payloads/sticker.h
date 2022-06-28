#pragma once

#include <string>

#include "user.h"
#include "../globals.h"

/**
 * https://discord.com/developers/docs/resources/sticker#sticker-object-sticker-types
 */
enum StickerType
{
	/**
	 * An official sticker in a pack, part of Nitro or in a removed purchasable pack
	 */
	Standard = 1,
	/**
	 * A sticker uploaded to a Boosted guild for the guild's members
	 */
	 Guild,
};

/**
 * https://discord.com/developers/docs/resources/sticker#sticker-object-sticker-format-types
 */
enum StickerFormatType
{
	PNG = 1,
	APNG,
	Lottie,
};

/**
 * https://discord.com/developers/docs/resources/sticker#sticker-object
 */
struct APISticker 
{
	/**
	 * ID of the sticker
	 */
	Snowflake id;
	/**
	 * For standard stickers, ID of the pack the sticker is from
	 */
	Snowflake pack_id;
	/**
	 * Name of the sticker
	 */
	std::string name;
	/**
	 * Description of the sticker
	 */
	std::string description;
	/**
	 * For guild stickers, the Discord name of a unicode emoji representing the sticker's expression. for standard stickers, a comma-separated list of related expressions.
	 */
	std::string tags;
	/**
	 * Previously the sticker asset hash, now an empty string
	 * @deprecated
	 */
	char asset;
	/**
	 * Type of sticker
	 *
	 * See https://discord.com/developers/docs/resources/sticker#sticker-object-sticker-types
	 */
	StickerType type;
	/**
	 * Type of sticker format
	 *
	 * See https://discord.com/developers/docs/resources/sticker#sticker-object-sticker-format-types
	 */
	StickerFormatType format_type;
	/**
	 * Whether this guild sticker can be used, may be false due to loss of Server Boosts
	 */
	bool available;
	/**
	 * ID of the guild that owns this sticker
	 */
	Snowflake guild_id;
	/**
	 * The user that uploaded the guild sticker
	 */
	APIUser user;
	/**
	 * The standard sticker's sort order within its pack
	 */
	unsigned int sort_value;
};
