#pragma once

#include <string>

#include "channel.h"
#include "emoji.h"
#include "user.h"
#include "../globals.h"

struct APIGatewayInfo
{
	/**
	 * The WSS URL that can be used for connecting to the gateway
	 */
	std::string url;
};

struct APIGatewaySessionStartLimit
{
	/**
	 * The total number of session starts the current user is allowed
	 */
	unsigned int total;
	/**
	 * The remaining number of session starts the current user is allowed
	 */
	unsigned int remaining;
	/**
	 * The number of milliseconds after which the limit resets
	 */
	unsigned int reset_after;
	/**
	 * The number of identify requests allowed per 5 seconds
	 */
	unsigned int max_concurrency;
};

struct APIGatewayBotInfo : APIGatewayInfo
{
	/**
	 * The recommended number of shards to use when connecting
	 *
	 * See https://discord.com/developers/docs/topics/gateway#sharding
	 */
	unsigned int shards;
	/**
	 * Information on the current session start limit
	 *
	 * See https://discord.com/developers/docs/topics/gateway#session-start-limit-object
	 */
	APIGatewaySessionStartLimit session_start_limit;
};

struct PresenceUpdateStatus
{
	std::string Online = "online";
	std::string DoNotDisturb = "dnd";
	std::string Idle = "idle";
	/**
	 * Invisible and shown as offline
	 */
	std::string Invisible = "invisible";
	std::string Offline = "offline";
};

/**
 * @unstable This struct is currently not documented by Discord but has known values which we will try to keep up to date.
 * Values might be added or removed without a major version bump.
 */
struct ActivityPlatform
{
	std::string Desktop = "desktop";
	std::string Xbox = "xbox";
	std::string Samsung = "samsung";
	std::string IOS = "ios";
	std::string Android = "android";
	std::string Embedded = "embedded";
	std::string PS4 = "ps4";
	std::string PS5 = "ps5";
};

/**
 * https://discord.com/developers/docs/topics/gateway#activity-object-activity-types
 */
enum ActivityType
{
	/**
	 * Playing {game}
	 */
	Playing,
	/**
	 * Streaming {details}
	 */
	Streaming,
	/**
	 * Listening to {name}
	 */
	Listening,
	/**
	 * Watching {details}
	 */
	Watching,
	/**
	 * {emoji} {details}
	 */
	Custom,
	/**
	 * Competing in {name}
	 */
	Competing,
};

/**
 * https://discord.com/developers/docs/topics/gateway#activity-object-activity-timestamps
 */
struct GatewayActivityTimestamps 
{
	/**
	 * Unix time (in milliseconds) of when the activity started
	 */
	std::optional<unsigned int> start;
	/**
	 * Unix time (in milliseconds) of when the activity ends
	 */
	std::optional<unsigned int> end;
};

/**
 * https://discord.com/developers/docs/topics/gateway#activity-object-activity-flags
 */
enum ActivityFlags
{
	Instance = 1 << 0,
	Join = 1 << 1,
	Spectate = 1 << 2,
	JoinRequest = 1 << 3,
	Sync = 1 << 4,
	Play = 1 << 5,
	PartyPrivacyFriends = 1 << 6,
	PartyPrivacyVoiceChannel = 1 << 7,
	Embedded = 1 << 8,
};

struct GatewayActivityButton
{
	/**
	 * The text shown on the button (1-32 characters)
	 */
	std::string label;
	/**
	 * The url opened when clicking the button (1-512 characters)
	 */
	std::string url;
};
