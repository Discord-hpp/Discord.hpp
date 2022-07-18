#pragma once

#include <string>
#include <optional>
#include "../global.hpp"
#include "guild.hpp"

class APIUser 
{
public:
	Snowflake id;
	std::string username;
	std::string discriminator;
	std::string avatar;
	std::optional<bool> bot;
	std::optional<bool> system;
	std::optional<bool> mfa_enabled;
	std::optional<std::string> banner;
	std::optional<int> accent_color;
	std::optional<std::string> locale;
	std::optional<bool> verified;
	std::optional<std::string> email;
	std::optional<UserFlags> flags;
	std::optional<UserPremiumType> premium_type;
	std::optional<UserFlags> public_flags;
};

enum class UserFlags 
{
	Staff = 1 << 0,
	Partner = 1 << 1,
	Hypesquad = 1 << 2,
	BugHunterLevel1 = 1 << 3,
	HypeSquadOnlineHouse1 = 1 << 6,
	HypeSquadOnlineHouse2 = 1 << 7,
	HypeSquadOnlineHouse3 = 1 << 8,
	PremiumEarlySupporter = 1 << 9,
	TeamPseudoUser = 1 << 10,
	BugHunterLevel2 = 1 << 14,
	VerifiedBot = 1 << 16,
	VerifiedDeveloper = 1 << 17,
	CertifiedModerator = 1 << 18,
	BotHTTPInteractions = 1 << 19,
	Spammer = 1 << 20,
};

enum class UserPremiumType {
	None,
	NitroClassic,
	Nitro,
};

class APIConnection 
{
public:
	std::string id;
	std::string name;
	ConnectionService type;
	std::optional<bool> revoked;
	std::optional<APIGuildIntegration> integrations; // it should be like this: Partial<APIGuildIntegration>[]
	bool verified;
	bool friend_sync;
	bool show_activity;
	ConnectionVisibility visibility;
};

struct ConnectionService 
{
	std::string BattleNet = "battlenet";
	std::string EpicGames = "epicgames";
	std::string Facebook = "facebook";
	std::string GitHub = "github";
	std::string LeagueOfLegends = "leagueoflegends";
	std::string PlayStationNetwork = "playstation";
	std::string Reddit = "reddit";
	std::string SamsungGalaxy = "samsunggalaxy";
	std::string Spotify = "spotify";
	std::string Skype = "skype";
	std::string Steam = "steam";
	std::string Twitch = "twitch";
	std::string Twitter = "twitter";
	std::string Xbox = "xbox";
	std::string YouTube = "youtube";
};

enum class ConnectionVisibility 
{
	None,
	Everyone,
};
