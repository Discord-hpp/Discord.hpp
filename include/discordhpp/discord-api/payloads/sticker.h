#pragma once

#include <string>
#include <optional>

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
	std::optional<Snowflake> pack_id;
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
	std::optional<char> asset;
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
	std::optional<bool> available;
	/**
	 * ID of the guild that owns this sticker
	 */
	std::optional<Snowflake> guild_id;
	/**
	 * The user that uploaded the guild sticker
	 */
	std::optional<APIUser> user;
	/**
	 * The standard sticker's sort order within its pack
	 */
	std::optional<unsigned int> sort_value;
};

/**
 * https://discord.com/developers/docs/resources/sticker#sticker-pack-object
 */
struct APIStickerPack 
{
	/**
	 * ID of the sticker pack
	 */
	Snowflake id;
	/**
	 * The stickers in the pack
	 */
	std::vector<APISticker> stickers;
	/**
	 * Name of the sticker pack
	 */
	std::string name;
	/**
	 * ID of the pack's SKU
	 */
	Snowflake sku_id;
	/**
	 * ID of a sticker in the pack which is shown as the pack's icon
	 */
	std::optional<Snowflake> cover_sticker_id;
	/**
	 * Description of the sticker pack
	 */
	std::string description;
	/**
	 * ID of the sticker pack's banner image
	 */
	std::optional<Snowflake> banner_asset_id;
};
