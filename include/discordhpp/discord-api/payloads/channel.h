#pragma once

#include <string>
#include <optional>

#include "emoji.h"
#include "user.h"
#include "../globals.h"

/**
 * https://discord.com/developers/docs/resources/channel#channel-object-channel-types
 */
enum ChannelType 
{
	/**
	 * A text channel within a guild
	 */
	GuildText,
	/**
	 * A direct message between users
	 */
	DM,
	/**
	 * A voice channel within a guild
	 */
	GuildVoice,
	/**
	 * A direct message between multiple users
	 */
	GroupDM,
	/**
	 * An organizational category that contains up to 50 channels
	 *
	 * See https://support.discord.com/hc/en-us/articles/115001580171-Channel-Categories-101
	 */
	GuildCategory,
	/**
	 * A channel that users can follow and crosspost into their own guild
	 *
	 * See https://support.discord.com/hc/en-us/articles/360032008192
	 */
	GuildNews,
	/**
	 * A thread channel (public) within a Guild News channel
	 */
	GuildNewsThread = 10,
	/**
	 * A public thread channel within a Guild Text channel
	 */
	GuildPublicThread,
	/**
	 * A private thread channel within a Guild Text channel
	 */
	GuildPrivateThread,
	/**
	 * A voice channel for hosting events with an audience
	 *
	 * See https://support.discord.com/hc/en-us/articles/1500005513722
	 */
	GuildStageVoice,
	/**
	 * The channel in a Student Hub containing the listed servers
	 *
	 * See https://support.discord.com/hc/en-us/articles/4406046651927-Discord-Student-Hubs-FAQ
	 */
	GuildDirectory,
	/**
	 * A channel that can only contain threads
	 */
	GuildForum,
};

int TextChannelType = {
	DM 
	| GroupDM 
	| GuildNews
	| GuildPublicThread
	| GuildPrivateThread
	| GuildNewsThread
	| GuildText
	| GuildForum
};

enum ChannelFlags
{
	Pinned = 1 << 1,
};

/**
 * This struct is used to allow easy extension for other channel types. While
 * also allowing `APIPartialChannel` to be used without breaking.
 */
template<ChannelType value>
struct APIChannelBase : APIPartialChannel
{
	ChannelType type;
	std::optional<ChannelFlags> flags;
};

int GuildChannelType = {
	GuildText 
	| GuildForum
	| GuildVoice 
	| GuildNews 
	| GuildNewsThread 
	| GuildPublicThread 
	| GuildPrivateThread 
	| GuildStageVoice 
};

/**
 * Not documented, but partial only includes id, name, and type
 */
struct APIPartialChannel
{
	/**
	 * The id of the channel
	 */
	Snowflake id;
	/**
	 * The type of the channel
	 *
	 * See https://discord.com/developers/docs/resources/channel#channel-object-channel-types
	 */
	ChannelType type;
	/**
	 * The name of the channel (2-100 characters)
	 */
	std::optional<std::string> name;
};

enum VideoQualityMode 
{
	/**
	 * Discord chooses the quality for optimal performance
	 */
	Auto = 1,
	/**
	 * 720p
	 */
	Full,
};

/**
 * https://discord.com/developers/docs/interactions/message-components#button-object-button-styles
 */
enum ButtonStyle
{
	Primary = 1,
	Secondary,
	Success,
	Danger,
	Link,
};

/**
 * https://discord.com/developers/docs/interactions/message-components#text-inputs-text-input-styles
 */
enum TextInputStyle 
{
	Short = 1,
	Paragraph,
};
