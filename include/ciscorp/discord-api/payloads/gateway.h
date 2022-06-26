#pragma once

#include "../core.h"
#include "../globals.h"

using namespace js;

typedef any GatewayActivityEmoji;

typedef Partial<Record<any, string>> GatewayActivityAssets;

typedef Partial<Record<any, string>> GatewayActivitySecrets;

class APIGatewayInfo;
class APIGatewayBotInfo;
class APIGatewaySessionStartLimit;
class GatewayPresenceUpdate;
enum struct PresenceUpdateStatus;
class GatewayPresenceClientStatus;
class GatewayActivity;
enum struct ActivityPlatform;
enum struct ActivityType;
class GatewayActivityTimestamps;
class GatewayActivityParty;
enum struct ActivityFlags;
class GatewayActivityButton;
class GatewayThreadListSync;
class GatewayThreadMembersUpdate;

class APIGatewayInfo : public object, public std::enable_shared_from_this<APIGatewayInfo> {
public:
	using std::enable_shared_from_this<APIGatewayInfo>::shared_from_this;
	string url;
};

class APIGatewayBotInfo : public APIGatewayInfo, public std::enable_shared_from_this<APIGatewayBotInfo> {
public:
	using std::enable_shared_from_this<APIGatewayBotInfo>::shared_from_this;
	js::number shards;

	std::shared_ptr<APIGatewaySessionStartLimit> session_start_limit;
};

class APIGatewaySessionStartLimit : public object, public std::enable_shared_from_this<APIGatewaySessionStartLimit> {
public:
	using std::enable_shared_from_this<APIGatewaySessionStartLimit>::shared_from_this;
	js::number total;

	js::number remaining;

	js::number reset_after;

	js::number max_concurrency;
};

class GatewayPresenceUpdate : public object, public std::enable_shared_from_this<GatewayPresenceUpdate> {
public:
	using std::enable_shared_from_this<GatewayPresenceUpdate>::shared_from_this;
	any user;

	std::shared_ptr<Snowflake> guild_id;

	PresenceUpdateStatus status;

	array<std::shared_ptr<GatewayActivity>> activities;

	std::shared_ptr<GatewayPresenceClientStatus> client_status;
};

enum struct PresenceUpdateStatus {
	Online = STR("online"), DoNotDisturb = STR("dnd"), Idle = STR("idle"), Invisible = STR("invisible"), Offline = STR("offline")
};
class GatewayPresenceClientStatus : public object, public std::enable_shared_from_this<GatewayPresenceClientStatus> {
public:
	using std::enable_shared_from_this<GatewayPresenceClientStatus>::shared_from_this;
	PresenceUpdateStatus desktop;

	PresenceUpdateStatus mobile;

	PresenceUpdateStatus web;
};

class GatewayActivity : public object, public std::enable_shared_from_this<GatewayActivity> {
public:
	using std::enable_shared_from_this<GatewayActivity>::shared_from_this;
	string id;

	string name;

	ActivityType type;

	any url;

	js::number created_at;

	std::shared_ptr<GatewayActivityTimestamps> timestamps;

	string sync_id;

	string platform;

	std::shared_ptr<Snowflake> application_id;

	any details;

	any state;

	GatewayActivityEmoji emoji;

	string session_id;

	std::shared_ptr<GatewayActivityParty> party;

	GatewayActivityAssets assets;

	GatewayActivitySecrets secrets;

	boolean instance;

	ActivityFlags flags;

	any buttons;
};

enum struct ActivityPlatform {
	Desktop = STR("desktop"), Xbox = STR("xbox"), Samsung = STR("samsung"), IOS = STR("ios"), Android = STR("android"), Embedded = STR("embedded"), PS4 = STR("ps4"), PS5 = STR("ps5")
};
enum struct ActivityType {
	Playing, Streaming, Listening, Watching, Custom, Competing
};
class GatewayActivityTimestamps : public object, public std::enable_shared_from_this<GatewayActivityTimestamps> {
public:
	using std::enable_shared_from_this<GatewayActivityTimestamps>::shared_from_this;
	js::number start;

	js::number end;
};

class GatewayActivityParty : public object, public std::enable_shared_from_this<GatewayActivityParty> {
public:
	using std::enable_shared_from_this<GatewayActivityParty>::shared_from_this;
	string id;

	std::tuple<std::shared_ptr<current_size>, js::number, std::shared_ptr<max_size>, js::number> size;
};

enum struct ActivityFlags {
	Instance = bitwise::lshift(1, 0), Join = bitwise::lshift(1, 1), Spectate = bitwise::lshift(1, 2), JoinRequest = bitwise::lshift(1, 3), Sync = bitwise::lshift(1, 4), Play = bitwise::lshift(1, 5), PartyPrivacyFriends = bitwise::lshift(1, 6), PartyPrivacyVoiceChannel = bitwise::lshift(1, 7), Embedded = bitwise::lshift(1, 8)
};
class GatewayActivityButton : public object, public std::enable_shared_from_this<GatewayActivityButton> {
public:
	using std::enable_shared_from_this<GatewayActivityButton>::shared_from_this;
	string label;

	string url;
};

class GatewayThreadListSync : public object, public std::enable_shared_from_this<GatewayThreadListSync> {
public:
	using std::enable_shared_from_this<GatewayThreadListSync>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	array<std::shared_ptr<Snowflake>> channel_ids;

	array<std::shared_ptr<APIChannel>> threads;

	array<std::shared_ptr<APIThreadMember>> members;
};

class GatewayThreadMembersUpdate : public object, public std::enable_shared_from_this<GatewayThreadMembersUpdate> {
public:
	using std::enable_shared_from_this<GatewayThreadMembersUpdate>::shared_from_this;
	std::shared_ptr<Snowflake> id;

	std::shared_ptr<Snowflake> guild_id;

	js::number member_count;

	array<std::shared_ptr<APIThreadMember>> added_members;

	array<std::shared_ptr<Snowflake>> removed_member_ids;
};
