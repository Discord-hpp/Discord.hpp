#include <string>
#include "../global.hpp"

const int GatewayVersion = 10;

enum class GatewayOpcodes
{
    Dispatch,
    Heartbeat,
	Identify,
	PresenceUpdate,
	VoiceStateUpdate,
	Resume = 6,
	Reconnect,
	RequestGuildMembers,
	InvalidSession,
	Hello,
	HeartbeatAck,
};

enum class GatewayCloseCodes
{
	UnknownError = 4000,
    Opcode,
	DecodeError,
	NotAuthenticated,
	AuthenticationFailed,
	AlreadyAuthenticated,
	InvalidSeq = 4007,
	RateLimited,
	SessionTimedOut,
	InvalidShard,
	ShardingRequired,
	InvalidAPIVersion,
	InvalidIntents,
	DisallowedIntents,
};

enum class GatewayIntentBits 
{
	Guilds = 1 << 0,
	GuildMembers = 1 << 1,
	GuildBans = 1 << 2,
	GuildEmojisAndStickers = 1 << 3,
	GuildIntegrations = 1 << 4,
	GuildWebhooks = 1 << 5,
	GuildInvites = 1 << 6,
	GuildVoiceStates = 1 << 7,
	GuildPresences = 1 << 8,
	GuildMessages = 1 << 9,
	GuildMessageReactions = 1 << 10,
	GuildMessageTyping = 1 << 11,
	DirectMessages = 1 << 12,
	DirectMessageReactions = 1 << 13,
	DirectMessageTyping = 1 << 14,
	MessageContent = 1 << 15,
	GuildScheduledEvents = 1 << 16,
};

struct GatewayDispatchEvents
{
    std::string ApplicationCommandPermissionsUpdate = "APPLICATION_COMMAND_PERMISSIONS_UPDATE";
	std::string ChannelCreate = "CHANNEL_CREATE";
	std::string ChannelDelete = "CHANNEL_DELETE";
	std::string ChannelPinsUpdate = "CHANNEL_PINS_UPDATE";
	std::string ChannelUpdate = "CHANNEL_UPDATE";
	std::string GuildBanAdd = "GUILD_BAN_ADD";
	std::string GuildBanRemove = "GUILD_BAN_REMOVE";
	std::string GuildCreate = "GUILD_CREATE";
	std::string GuildDelete = "GUILD_DELETE";
	std::string GuildEmojisUpdate = "GUILD_EMOJIS_UPDATE";
	std::string GuildIntegrationsUpdate = "GUILD_INTEGRATIONS_UPDATE";
	std::string GuildMemberAdd = "GUILD_MEMBER_ADD";
	std::string GuildMemberRemove = "GUILD_MEMBER_REMOVE";
	std::string GuildMembersChunk = "GUILD_MEMBERS_CHUNK";
	std::string GuildMemberUpdate = "GUILD_MEMBER_UPDATE";
	std::string GuildRoleCreate = "GUILD_ROLE_CREATE";
	std::string GuildRoleDelete = "GUILD_ROLE_DELETE";
	std::string GuildRoleUpdate = "GUILD_ROLE_UPDATE";
	std::string GuildStickersUpdate = "GUILD_STICKERS_UPDATE";
	std::string GuildUpdate = "GUILD_UPDATE";
	std::string IntegrationCreate = "INTEGRATION_CREATE";
	std::string IntegrationDelete = "INTEGRATION_DELETE";
	std::string IntegrationUpdate = "INTEGRATION_UPDATE";
	std::string InteractionCreate = "INTERACTION_CREATE";
	std::string InviteCreate = "INVITE_CREATE";
	std::string InviteDelete = "INVITE_DELETE";
	std::string MessageCreate = "MESSAGE_CREATE";
	std::string MessageDelete = "MESSAGE_DELETE";
	std::string MessageDeleteBulk = "MESSAGE_DELETE_BULK";
	std::string MessageReactionAdd = "MESSAGE_REACTION_ADD";
	std::string MessageReactionRemove = "MESSAGE_REACTION_REMOVE";
	std::string MessageReactionRemoveAll = "MESSAGE_REACTION_REMOVE_ALL";
	std::string MessageReactionRemoveEmoji = "MESSAGE_REACTION_REMOVE_EMOJI";
	std::string MessageUpdate = "MESSAGE_UPDATE";
	std::string PresenceUpdate = "PRESENCE_UPDATE";
	std::string StageInstanceCreate = "STAGE_INSTANCE_CREATE";
	std::string StageInstanceDelete = "STAGE_INSTANCE_DELETE";
	std::string StageInstanceUpdate = "STAGE_INSTANCE_UPDATE";
	std::string Ready = "READY";
	std::string Resumed = "RESUMED";
	std::string ThreadCreate = "THREAD_CREATE";
	std::string ThreadDelete = "THREAD_DELETE";
	std::string ThreadListSync = "THREAD_LIST_SYNC";
	std::string ThreadMembersUpdate = "THREAD_MEMBERS_UPDATE";
	std::string ThreadMemberUpdate = "THREAD_MEMBER_UPDATE";
	std::string ThreadUpdate = "THREAD_UPDATE";
	std::string TypingStart = "TYPING_START";
	std::string UserUpdate = "USER_UPDATE";
	std::string VoiceServerUpdate = "VOICE_SERVER_UPDATE";
	std::string VoiceStateUpdate = "VOICE_STATE_UPDATE";
	std::string WebhooksUpdate = "WEBHOOKS_UPDATE";
	std::string GuildScheduledEventCreate = "GUILD_SCHEDULED_EVENT_CREATE";
	std::string GuildScheduledEventUpdate = "GUILD_SCHEDULED_EVENT_UPDATE";
	std::string GuildScheduledEventDelete = "GUILD_SCHEDULED_EVENT_DELETE";
	std::string GuildScheduledEventUserAdd = "GUILD_SCHEDULED_EVENT_USER_ADD";
	std::string GuildScheduledEventUserRemove = "GUILD_SCHEDULED_EVENT_USER_REMOVE";
};
