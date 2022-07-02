#pragma once

#include <string>

#include "emoji.h"
#include "gateway.h"
#include "permissions.h"
#include "sticker.h"
#include "user.h"
#include "../globals.h"

/**
 * https://discord.com/developers/docs/resources/guild#unavailable-guild-object
 */
struct APIUnavailableGuild 
{
	/**
	 * Guild id
	 */
	Snowflake id;
	/**
	 * `true` if this guild is unavailable due to an outage
	 */
	bool unavailable;
};

/**
 * https://discord.com/developers/docs/resources/guild#guild-object-default-message-notification-level
 */
enum GuildDefaultMessageNotifications 
{
	AllMessages,
	OnlyMentions,
};

/**
 * https://discord.com/developers/docs/resources/guild#guild-object-explicit-content-filter-level
 */
enum GuildExplicitContentFilter 
{
	Disabled,
	MembersWithoutRoles,
	AllMembers,
};

/**
 * https://discord.com/developers/docs/resources/guild#guild-object-mfa-level
 */
enum GuildMFALevel 
{
	None,
	Elevated,
};

/**
 * https://discord.com/developers/docs/resources/guild#guild-object-guild-nsfw-level
 */
enum GuildNSFWLevel 
{
	Default,
	Explicit,
	Safe,
	AgeRestricted,
};

/**
 * https://discord.com/developers/docs/resources/guild#guild-object-verification-level
 */
enum GuildVerificationLevel 
{
	/**
	 * Unrestricted
	 */
	None,
	/**
	 * Must have verified email on account
	 */
	Low,
	/**
	 * Must be registered on Discord for longer than 5 minutes
	 */
	Medium,
	/**
	 * Must be a member of the guild for longer than 10 minutes
	 */
	High,
	/**
	 * Must have a verified phone number
	 */
	VeryHigh,
};

/**
 * https://discord.com/developers/docs/resources/guild#guild-object-premium-tier
 */
enum GuildPremiumTier 
{
	None,
	Tier1,
	Tier2,
	Tier3,
};

enum GuildHubType 
{
	Default,
	HighSchool,
	College,
};

/**
 * https://discord.com/developers/docs/resources/guild#guild-object-system-channel-flags
 */
enum GuildSystemChannelFlags 
{
	/**
	 * Suppress member join notifications
	 */
	SuppressJoinNotifications = 1 << 0,
	/**
	 * Suppress server boost notifications
	 */
	SuppressPremiumSubscriptions = 1 << 1,
	/**
	 * Suppress server setup tips
	 */
	SuppressGuildReminderNotifications = 1 << 2,
	/**
	 * Hide member join sticker reply buttons
	 */
	SuppressJoinNotificationReplies = 1 << 3,
};

/**
 * https://discord.com/developers/docs/resources/guild#guild-object-guild-features
 */
struct GuildFeature 
{
	/**
	 * Guild has access to set an animated guild banner image
	 */
	std::string AnimatedBanner = "ANIMATED_BANNER";
	/**
	 * Guild has access to set an animated guild icon
	 */
	std::string AnimatedIcon = "ANIMATED_ICON";
	/**
	 * Guild has access to set a guild banner image
	 */
	std::string Banner = "BANNER";
	/**
	 * Guild has access to use commerce features (i.e. create store channels)
	 */
	std::string Commerce = "COMMERCE";
	/**
	 * Guild can enable welcome screen, Membership Screening and discovery, and receives community updates
	 */
	std::string Community = "COMMUNITY";
	/**
	 * Guild is able to be discovered in the directory
	 */
	std::string Discoverable = "DISCOVERABLE";
	/**
	 * Guild is able to be featured in the directory
	 */
	std::string Featurable = "FEATURABLE";
	/**
	 * Guild is listed in a directory channel
	 */
	std::string HasDirectoryEntry = "HAS_DIRECTORY_ENTRY";
	/**
	 * Guild is a Student Hub
	 *
	 * See https://support.discord.com/hc/en-us/articles/4406046651927-Discord-Student-Hubs-FAQ
	 */
	std::string Hub = "HUB";
	/**
	 * Guild has access to set an invite splash background
	 */
	std::string InviteSplash = "INVITE_SPLASH";
	/**
	 * Guild is in a Student Hub
	 *
	 * See https://support.discord.com/hc/en-us/articles/4406046651927-Discord-Student-Hubs-FAQ
	 */
	std::string LinkedToHub = "LINKED_TO_HUB";
	/**
	 * Guild has enabled Membership Screening
	 */
	std::string MemberVerificationGateEnabled = "MEMBER_VERIFICATION_GATE_ENABLED";
	/**
	 * Guild has enabled monetization
	 */
	std::string MonetizationEnabled = "MONETIZATION_ENABLED";
	/**
	 * Guild has increased custom sticker slots
	 */
	std::string MoreStickers = "MORE_STICKERS";
	/**
	 * Guild has access to create news channels
	 */
	std::string News = "NEWS";
	/**
	 * Guild is partnered
	 */
	std::string Partnered = "PARTNERED";
	/**
	 * Guild can be previewed before joining via Membership Screening or the directory
	 */
	std::string PreviewEnabled = "PREVIEW_ENABLED";
	/**
	 * Guild has access to create private threads
	 */
	std::string PrivateThreads = "PRIVATE_THREADS";
	std::string RelayEnabled = "RELAY_ENABLED";
	/**
	 * Guild is able to set role icons
	 */
	std::string RoleIcons = "ROLE_ICONS";
	/**
	 * Guild has enabled ticketed events
	 */
	std::string TicketedEventsEnabled = "TICKETED_EVENTS_ENABLED";
	/**
	 * Guild has access to set a vanity URL
	 */
	std::string VanityURL = "VANITY_URL";
	/**
	 * Guild is verified
	 */
	std::string Verified = "VERIFIED";
	/**
	 * Guild has access to set 384kbps bitrate in voice (previously VIP voice servers)
	 */
	std::string VIPRegions = "VIP_REGIONS";
	/**
	 * Guild has enabled the welcome screen
	 */
	std::string WelcomeScreenEnabled = "WELCOME_SCREEN_ENABLED";
};
