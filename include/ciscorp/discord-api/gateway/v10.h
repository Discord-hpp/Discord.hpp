#pragma once

#include "../core.h"
#include "../globals.h"

using namespace js;

using RawGatewayPresenceUpdate = GatewayPresenceUpdate;
using RawGatewayThreadListSync = GatewayThreadListSync;
using RawGatewayThreadMembersUpdate = GatewayThreadMembersUpdate;

string GatewayVersion = STR("10");

typedef any GatewaySendPayload;

typedef any GatewayReceivePayload;

typedef any GatewayDispatchPayload;

typedef boolean GatewayInvalidSessionData;

typedef DataPayload<GatewayDispatchEvents::Ready, std::shared_ptr<GatewayReadyDispatchData>> GatewayReadyDispatch;

typedef DataPayload<GatewayDispatchEvents::Resumed, any> GatewayResumedDispatch;

typedef DataPayload<any, GatewayChannelModifyDispatchData> GatewayChannelModifyDispatch;

typedef APIChannel GatewayChannelModifyDispatchData;

typedef GatewayChannelModifyDispatch GatewayChannelCreateDispatch;

typedef GatewayChannelModifyDispatchData GatewayChannelCreateDispatchData;

typedef GatewayChannelModifyDispatch GatewayChannelUpdateDispatch;

typedef GatewayChannelModifyDispatchData GatewayChannelUpdateDispatchData;

typedef GatewayChannelModifyDispatch GatewayChannelDeleteDispatch;

typedef GatewayChannelModifyDispatchData GatewayChannelDeleteDispatchData;

typedef DataPayload<GatewayDispatchEvents::ChannelPinsUpdate, std::shared_ptr<GatewayChannelPinsUpdateDispatchData>> GatewayChannelPinsUpdateDispatch;

typedef DataPayload<GatewayDispatchEvents::GuildUpdate, GatewayGuildModifyDispatchData> GatewayGuildModifyDispatch;

typedef APIGuild GatewayGuildModifyDispatchData;

typedef DataPayload<GatewayDispatchEvents::GuildCreate, std::shared_ptr<GatewayGuildCreateDispatchData>> GatewayGuildCreateDispatch;

typedef GatewayGuildModifyDispatch GatewayGuildUpdateDispatch;

typedef GatewayGuildModifyDispatchData GatewayGuildUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::GuildDelete, GatewayGuildDeleteDispatchData> GatewayGuildDeleteDispatch;

typedef APIUnavailableGuild GatewayGuildDeleteDispatchData;

typedef DataPayload<any, std::shared_ptr<GatewayGuildBanModifyDispatchData>> GatewayGuildBanModifyDispatch;

typedef GatewayGuildBanModifyDispatch GatewayGuildBanAddDispatch;

typedef GatewayGuildBanModifyDispatchData GatewayGuildBanAddDispatchData;

typedef GatewayGuildBanModifyDispatch GatewayGuildBanRemoveDispatch;

typedef GatewayGuildBanModifyDispatchData GatewayGuildBanRemoveDispatchData;

typedef DataPayload<GatewayDispatchEvents::GuildEmojisUpdate, std::shared_ptr<GatewayGuildEmojisUpdateDispatchData>> GatewayGuildEmojisUpdateDispatch;

typedef DataPayload<GatewayDispatchEvents::GuildStickersUpdate, std::shared_ptr<GatewayGuildStickersUpdateDispatchData>> GatewayGuildStickersUpdateDispatch;

typedef DataPayload<GatewayDispatchEvents::GuildIntegrationsUpdate, std::shared_ptr<GatewayGuildIntegrationsUpdateDispatchData>> GatewayGuildIntegrationsUpdateDispatch;

typedef DataPayload<GatewayDispatchEvents::GuildMemberAdd, std::shared_ptr<GatewayGuildMemberAddDispatchData>> GatewayGuildMemberAddDispatch;

typedef DataPayload<GatewayDispatchEvents::GuildMemberRemove, std::shared_ptr<GatewayGuildMemberRemoveDispatchData>> GatewayGuildMemberRemoveDispatch;

typedef DataPayload<GatewayDispatchEvents::GuildMemberUpdate, GatewayGuildMemberUpdateDispatchData> GatewayGuildMemberUpdateDispatch;

typedef any GatewayGuildMemberUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::GuildMembersChunk, std::shared_ptr<GatewayGuildMembersChunkDispatchData>> GatewayGuildMembersChunkDispatch;

typedef DataPayload<any, std::shared_ptr<GatewayGuildRoleModifyDispatchData>> GatewayGuildRoleModifyDispatch;

typedef GatewayGuildRoleModifyDispatch GatewayGuildRoleCreateDispatch;

typedef GatewayGuildRoleModifyDispatchData GatewayGuildRoleCreateDispatchData;

typedef GatewayGuildRoleModifyDispatch GatewayGuildRoleUpdateDispatch;

typedef GatewayGuildRoleModifyDispatchData GatewayGuildRoleUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::GuildRoleDelete, std::shared_ptr<GatewayGuildRoleDeleteDispatchData>> GatewayGuildRoleDeleteDispatch;

typedef DataPayload<GatewayDispatchEvents::GuildScheduledEventCreate, GatewayGuildScheduledEventCreateDispatchData> GatewayGuildScheduledEventCreateDispatch;

typedef APIGuildScheduledEvent GatewayGuildScheduledEventCreateDispatchData;

typedef DataPayload<GatewayDispatchEvents::GuildScheduledEventUpdate, GatewayGuildScheduledEventUpdateDispatchData> GatewayGuildScheduledEventUpdateDispatch;

typedef APIGuildScheduledEvent GatewayGuildScheduledEventUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::GuildScheduledEventDelete, GatewayGuildScheduledEventDeleteDispatchData> GatewayGuildScheduledEventDeleteDispatch;

typedef APIGuildScheduledEvent GatewayGuildScheduledEventDeleteDispatchData;

typedef DataPayload<GatewayDispatchEvents::GuildScheduledEventUserAdd, std::shared_ptr<GatewayGuildScheduledEventUserAddDispatchData>> GatewayGuildScheduledEventUserAddDispatch;

typedef DataPayload<GatewayDispatchEvents::GuildScheduledEventUserRemove, std::shared_ptr<GatewayGuildScheduledEventUserAddDispatchData>> GatewayGuildScheduledEventUserRemoveDispatch;

typedef DataPayload<GatewayDispatchEvents::IntegrationCreate, GatewayIntegrationCreateDispatchData> GatewayIntegrationCreateDispatch;

typedef any GatewayIntegrationCreateDispatchData;

typedef DataPayload<GatewayDispatchEvents::IntegrationUpdate, GatewayIntegrationUpdateDispatchData> GatewayIntegrationUpdateDispatch;

typedef any GatewayIntegrationUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::IntegrationDelete, std::shared_ptr<GatewayIntegrationDeleteDispatchData>> GatewayIntegrationDeleteDispatch;

typedef DataPayload<GatewayDispatchEvents::InteractionCreate, GatewayInteractionCreateDispatchData> GatewayInteractionCreateDispatch;

typedef APIInteraction GatewayInteractionCreateDispatchData;

typedef DataPayload<GatewayDispatchEvents::InviteCreate, std::shared_ptr<GatewayInviteCreateDispatchData>> GatewayInviteCreateDispatch;

typedef DataPayload<GatewayDispatchEvents::InviteDelete, std::shared_ptr<GatewayInviteDeleteDispatchData>> GatewayInviteDeleteDispatch;

typedef DataPayload<GatewayDispatchEvents::MessageCreate, GatewayMessageCreateDispatchData> GatewayMessageCreateDispatch;

typedef any GatewayMessageCreateDispatchData;

typedef DataPayload<GatewayDispatchEvents::MessageUpdate, GatewayMessageUpdateDispatchData> GatewayMessageUpdateDispatch;

typedef any GatewayMessageUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::MessageDelete, std::shared_ptr<GatewayMessageDeleteDispatchData>> GatewayMessageDeleteDispatch;

typedef DataPayload<GatewayDispatchEvents::MessageDeleteBulk, std::shared_ptr<GatewayMessageDeleteBulkDispatchData>> GatewayMessageDeleteBulkDispatch;

typedef ReactionData<GatewayDispatchEvents::MessageReactionAdd> GatewayMessageReactionAddDispatch;

typedef any GatewayMessageReactionAddDispatchData;

typedef ReactionData<GatewayDispatchEvents::MessageReactionRemove, string> GatewayMessageReactionRemoveDispatch;

typedef any GatewayMessageReactionRemoveDispatchData;

typedef DataPayload<GatewayDispatchEvents::MessageReactionRemoveAll, GatewayMessageReactionRemoveAllDispatchData> GatewayMessageReactionRemoveAllDispatch;

typedef MessageReactionRemoveData GatewayMessageReactionRemoveAllDispatchData;

typedef DataPayload<GatewayDispatchEvents::MessageReactionRemoveEmoji, std::shared_ptr<GatewayMessageReactionRemoveEmojiDispatchData>> GatewayMessageReactionRemoveEmojiDispatch;

typedef DataPayload<GatewayDispatchEvents::PresenceUpdate, GatewayPresenceUpdateDispatchData> GatewayPresenceUpdateDispatch;

typedef RawGatewayPresenceUpdate GatewayPresenceUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::StageInstanceCreate, GatewayStageInstanceCreateDispatchData> GatewayStageInstanceCreateDispatch;

typedef APIStageInstance GatewayStageInstanceCreateDispatchData;

typedef DataPayload<GatewayDispatchEvents::StageInstanceDelete, GatewayStageInstanceDeleteDispatchData> GatewayStageInstanceDeleteDispatch;

typedef APIStageInstance GatewayStageInstanceDeleteDispatchData;

typedef DataPayload<GatewayDispatchEvents::StageInstanceUpdate, GatewayStageInstanceUpdateDispatchData> GatewayStageInstanceUpdateDispatch;

typedef APIStageInstance GatewayStageInstanceUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::ThreadListSync, GatewayThreadListSyncDispatchData> GatewayThreadListSyncDispatch;

typedef RawGatewayThreadListSync GatewayThreadListSyncDispatchData;

typedef DataPayload<GatewayDispatchEvents::ThreadMembersUpdate, GatewayThreadMembersUpdateDispatchData> GatewayThreadMembersUpdateDispatch;

typedef RawGatewayThreadMembersUpdate GatewayThreadMembersUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::ThreadMemberUpdate, GatewayThreadMemberUpdateDispatchData> GatewayThreadMemberUpdateDispatch;

typedef any GatewayThreadMemberUpdateDispatchData;

typedef DataPayload<any, GatewayChannelModifyDispatchData> GatewayThreadModifyDispatch;

typedef GatewayChannelModifyDispatch GatewayThreadCreateDispatch;

typedef GatewayChannelModifyDispatch GatewayThreadUpdateDispatch;

typedef GatewayChannelModifyDispatchData GatewayThreadUpdateDispatchData;

typedef GatewayChannelModifyDispatch GatewayThreadDeleteDispatch;

typedef GatewayChannelModifyDispatchData GatewayThreadDeleteDispatchData;

typedef DataPayload<GatewayDispatchEvents::TypingStart, std::shared_ptr<GatewayTypingStartDispatchData>> GatewayTypingStartDispatch;

typedef DataPayload<GatewayDispatchEvents::UserUpdate, GatewayUserUpdateDispatchData> GatewayUserUpdateDispatch;

typedef APIUser GatewayUserUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::VoiceStateUpdate, GatewayVoiceStateUpdateDispatchData> GatewayVoiceStateUpdateDispatch;

typedef GatewayVoiceState GatewayVoiceStateUpdateDispatchData;

typedef DataPayload<GatewayDispatchEvents::VoiceServerUpdate, std::shared_ptr<GatewayVoiceServerUpdateDispatchData>> GatewayVoiceServerUpdateDispatch;

typedef DataPayload<GatewayDispatchEvents::WebhooksUpdate, std::shared_ptr<GatewayWebhooksUpdateDispatchData>> GatewayWebhooksUpdateDispatch;

typedef js::number GatewayHeartbeatData;

typedef Pick<std::shared_ptr<GatewayActivity>, any> GatewayActivityUpdateData;

typedef any NonDispatchPayload;

template <typename E, typename O>
using ReactionData = DataPayload<E, Omit<object, O>>;

enum struct GatewayOpcodes;
enum struct GatewayCloseCodes;
enum struct GatewayIntentBits;
enum struct GatewayDispatchEvents;
class GatewayHello;
class GatewayHelloData;
class GatewayHeartbeatRequest;
class GatewayHeartbeatAck;
class GatewayInvalidSession;
class GatewayReconnect;
class GatewayReadyDispatchData;
class GatewayChannelPinsUpdateDispatchData;
class GatewayGuildCreateDispatchData;
class GatewayGuildBanModifyDispatchData;
class GatewayGuildEmojisUpdateDispatchData;
class GatewayGuildStickersUpdateDispatchData;
class GatewayGuildIntegrationsUpdateDispatchData;
class GatewayGuildMemberAddDispatchData;
class GatewayGuildMemberRemoveDispatchData;
class GatewayGuildMembersChunkDispatchData;
class GatewayGuildRoleModifyDispatchData;
class GatewayGuildRoleDeleteDispatchData;
class GatewayGuildScheduledEventUserAddDispatchData;
class GatewayGuildScheduledEventUserRemoveDispatchData;
class GatewayIntegrationDeleteDispatchData;
class GatewayInviteCreateDispatchData;
class GatewayInviteDeleteDispatchData;
class GatewayMessageEventExtraFields;
class GatewayMessageDeleteDispatchData;
class GatewayMessageDeleteBulkDispatchData;
class GatewayMessageReactionRemoveEmojiDispatchData;
class GatewayThreadCreateDispatchData;
class GatewayTypingStartDispatchData;
class GatewayVoiceServerUpdateDispatchData;
class GatewayWebhooksUpdateDispatchData;
class GatewayHeartbeat;
class GatewayIdentify;
class GatewayIdentifyData;
class GatewayIdentifyProperties;
class GatewayResume;
class GatewayResumeData;
class GatewayRequestGuildMembers;
class GatewayRequestGuildMembersData;
class GatewayVoiceStateUpdate;
class GatewayVoiceStateUpdateData;
class GatewayUpdatePresence;
class GatewayPresenceUpdateData;
class BasePayload;
template <typename Event, typename D>
class DataPayload;
class MessageReactionRemoveData;

extern string GatewayVersion;
enum struct GatewayOpcodes {
	Dispatch, Heartbeat, Identify, PresenceUpdate, VoiceStateUpdate, Resume = 6, Reconnect, RequestGuildMembers, InvalidSession, Hello, HeartbeatAck
};
enum struct GatewayCloseCodes {
	UnknownError = 4000, UnknownOpcode, DecodeError, NotAuthenticated, AuthenticationFailed, AlreadyAuthenticated, InvalidSeq = 4007, RateLimited, SessionTimedOut, InvalidShard, ShardingRequired, InvalidAPIVersion, InvalidIntents, DisallowedIntents
};
enum struct GatewayIntentBits {
	Guilds = bitwise::lshift(1, 0), GuildMembers = bitwise::lshift(1, 1), GuildBans = bitwise::lshift(1, 2), GuildEmojisAndStickers = bitwise::lshift(1, 3), GuildIntegrations = bitwise::lshift(1, 4), GuildWebhooks = bitwise::lshift(1, 5), GuildInvites = bitwise::lshift(1, 6), GuildVoiceStates = bitwise::lshift(1, 7), GuildPresences = bitwise::lshift(1, 8), GuildMessages = bitwise::lshift(1, 9), GuildMessageReactions = bitwise::lshift(1, 10), GuildMessageTyping = bitwise::lshift(1, 11), DirectMessages = bitwise::lshift(1, 12), DirectMessageReactions = bitwise::lshift(1, 13), DirectMessageTyping = bitwise::lshift(1, 14), MessageContent = bitwise::lshift(1, 15), GuildScheduledEvents = bitwise::lshift(1, 16)
};
enum struct GatewayDispatchEvents {
	ApplicationCommandPermissionsUpdate = STR("APPLICATION_COMMAND_PERMISSIONS_UPDATE"), ChannelCreate = STR("CHANNEL_CREATE"), ChannelDelete = STR("CHANNEL_DELETE"), ChannelPinsUpdate = STR("CHANNEL_PINS_UPDATE"), ChannelUpdate = STR("CHANNEL_UPDATE"), GuildBanAdd = STR("GUILD_BAN_ADD"), GuildBanRemove = STR("GUILD_BAN_REMOVE"), GuildCreate = STR("GUILD_CREATE"), GuildDelete = STR("GUILD_DELETE"), GuildEmojisUpdate = STR("GUILD_EMOJIS_UPDATE"), GuildIntegrationsUpdate = STR("GUILD_INTEGRATIONS_UPDATE"), GuildMemberAdd = STR("GUILD_MEMBER_ADD"), GuildMemberRemove = STR("GUILD_MEMBER_REMOVE"), GuildMembersChunk = STR("GUILD_MEMBERS_CHUNK"), GuildMemberUpdate = STR("GUILD_MEMBER_UPDATE"), GuildRoleCreate = STR("GUILD_ROLE_CREATE"), GuildRoleDelete = STR("GUILD_ROLE_DELETE"), GuildRoleUpdate = STR("GUILD_ROLE_UPDATE"), GuildStickersUpdate = STR("GUILD_STICKERS_UPDATE"), GuildUpdate = STR("GUILD_UPDATE"), IntegrationCreate = STR("INTEGRATION_CREATE"), IntegrationDelete = STR("INTEGRATION_DELETE"), IntegrationUpdate = STR("INTEGRATION_UPDATE"), InteractionCreate = STR("INTERACTION_CREATE"), InviteCreate = STR("INVITE_CREATE"), InviteDelete = STR("INVITE_DELETE"), MessageCreate = STR("MESSAGE_CREATE"), MessageDelete = STR("MESSAGE_DELETE"), MessageDeleteBulk = STR("MESSAGE_DELETE_BULK"), MessageReactionAdd = STR("MESSAGE_REACTION_ADD"), MessageReactionRemove = STR("MESSAGE_REACTION_REMOVE"), MessageReactionRemoveAll = STR("MESSAGE_REACTION_REMOVE_ALL"), MessageReactionRemoveEmoji = STR("MESSAGE_REACTION_REMOVE_EMOJI"), MessageUpdate = STR("MESSAGE_UPDATE"), PresenceUpdate = STR("PRESENCE_UPDATE"), StageInstanceCreate = STR("STAGE_INSTANCE_CREATE"), StageInstanceDelete = STR("STAGE_INSTANCE_DELETE"), StageInstanceUpdate = STR("STAGE_INSTANCE_UPDATE"), Ready = STR("READY"), Resumed = STR("RESUMED"), ThreadCreate = STR("THREAD_CREATE"), ThreadDelete = STR("THREAD_DELETE"), ThreadListSync = STR("THREAD_LIST_SYNC"), ThreadMembersUpdate = STR("THREAD_MEMBERS_UPDATE"), ThreadMemberUpdate = STR("THREAD_MEMBER_UPDATE"), ThreadUpdate = STR("THREAD_UPDATE"), TypingStart = STR("TYPING_START"), UserUpdate = STR("USER_UPDATE"), VoiceServerUpdate = STR("VOICE_SERVER_UPDATE"), VoiceStateUpdate = STR("VOICE_STATE_UPDATE"), WebhooksUpdate = STR("WEBHOOKS_UPDATE"), GuildScheduledEventCreate = STR("GUILD_SCHEDULED_EVENT_CREATE"), GuildScheduledEventUpdate = STR("GUILD_SCHEDULED_EVENT_UPDATE"), GuildScheduledEventDelete = STR("GUILD_SCHEDULED_EVENT_DELETE"), GuildScheduledEventUserAdd = STR("GUILD_SCHEDULED_EVENT_USER_ADD"), GuildScheduledEventUserRemove = STR("GUILD_SCHEDULED_EVENT_USER_REMOVE")
};
class GatewayHello : public NonDispatchPayload, public std::enable_shared_from_this<GatewayHello> {
public:
	using std::enable_shared_from_this<GatewayHello>::shared_from_this;
	GatewayOpcodes::Hello op;

	std::shared_ptr<GatewayHelloData> d;
};

class GatewayHelloData : public object, public std::enable_shared_from_this<GatewayHelloData> {
public:
	using std::enable_shared_from_this<GatewayHelloData>::shared_from_this;
	js::number heartbeat_interval;
};

class GatewayHeartbeatRequest : public NonDispatchPayload, public std::enable_shared_from_this<GatewayHeartbeatRequest> {
public:
	using std::enable_shared_from_this<GatewayHeartbeatRequest>::shared_from_this;
	GatewayOpcodes::Heartbeat op;

	any d;
};

class GatewayHeartbeatAck : public NonDispatchPayload, public std::enable_shared_from_this<GatewayHeartbeatAck> {
public:
	using std::enable_shared_from_this<GatewayHeartbeatAck>::shared_from_this;
	GatewayOpcodes::HeartbeatAck op;

	any d;
};

class GatewayInvalidSession : public NonDispatchPayload, public std::enable_shared_from_this<GatewayInvalidSession> {
public:
	using std::enable_shared_from_this<GatewayInvalidSession>::shared_from_this;
	GatewayOpcodes::InvalidSession op;

	GatewayInvalidSessionData d;
};

class GatewayReconnect : public NonDispatchPayload, public std::enable_shared_from_this<GatewayReconnect> {
public:
	using std::enable_shared_from_this<GatewayReconnect>::shared_from_this;
	GatewayOpcodes::Reconnect op;

	any d;
};

class GatewayReadyDispatchData : public object, public std::enable_shared_from_this<GatewayReadyDispatchData> {
public:
	using std::enable_shared_from_this<GatewayReadyDispatchData>::shared_from_this;
	js::number v;

	std::shared_ptr<APIUser> user;

	array<std::shared_ptr<APIUnavailableGuild>> guilds;

	string session_id;

	std::tuple<std::shared_ptr<shard_id>, js::number, std::shared_ptr<shard_count>, js::number> shard;

	Pick<std::shared_ptr<APIApplication>, any> application;
};

class GatewayChannelPinsUpdateDispatchData : public object, public std::enable_shared_from_this<GatewayChannelPinsUpdateDispatchData> {
public:
	using std::enable_shared_from_this<GatewayChannelPinsUpdateDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	std::shared_ptr<Snowflake> channel_id;

	any last_pin_timestamp;
};

class GatewayGuildCreateDispatchData : public APIGuild, public std::enable_shared_from_this<GatewayGuildCreateDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildCreateDispatchData>::shared_from_this;
	string joined_at;

	boolean large;

	js::number member_count;

	array<Omit<std::shared_ptr<GatewayVoiceState>, string>> voice_states;

	array<std::shared_ptr<APIGuildMember>> members;

	array<std::shared_ptr<APIChannel>> channels;

	array<std::shared_ptr<APIChannel>> threads;

	array<std::shared_ptr<GatewayPresenceUpdate>> presences;

	array<std::shared_ptr<APIStageInstance>> stage_instances;

	array<std::shared_ptr<APIGuildScheduledEvent>> guild_scheduled_events;
};

class GatewayGuildBanModifyDispatchData : public object, public std::enable_shared_from_this<GatewayGuildBanModifyDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildBanModifyDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	std::shared_ptr<APIUser> user;
};

class GatewayGuildEmojisUpdateDispatchData : public object, public std::enable_shared_from_this<GatewayGuildEmojisUpdateDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildEmojisUpdateDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	array<std::shared_ptr<APIEmoji>> emojis;
};

class GatewayGuildStickersUpdateDispatchData : public object, public std::enable_shared_from_this<GatewayGuildStickersUpdateDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildStickersUpdateDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	array<std::shared_ptr<APISticker>> stickers;
};

class GatewayGuildIntegrationsUpdateDispatchData : public object, public std::enable_shared_from_this<GatewayGuildIntegrationsUpdateDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildIntegrationsUpdateDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;
};

class GatewayGuildMemberAddDispatchData : public APIGuildMember, public std::enable_shared_from_this<GatewayGuildMemberAddDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildMemberAddDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;
};

class GatewayGuildMemberRemoveDispatchData : public object, public std::enable_shared_from_this<GatewayGuildMemberRemoveDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildMemberRemoveDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	std::shared_ptr<APIUser> user;
};

class GatewayGuildMembersChunkDispatchData : public object, public std::enable_shared_from_this<GatewayGuildMembersChunkDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildMembersChunkDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	array<std::shared_ptr<APIGuildMember>> members;

	js::number chunk_index;

	js::number chunk_count;

	array<any> not_found;

	array<std::shared_ptr<RawGatewayPresenceUpdate>> presences;

	string nonce;
};

class GatewayGuildRoleModifyDispatchData : public object, public std::enable_shared_from_this<GatewayGuildRoleModifyDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildRoleModifyDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	std::shared_ptr<APIRole> role;
};

class GatewayGuildRoleDeleteDispatchData : public object, public std::enable_shared_from_this<GatewayGuildRoleDeleteDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildRoleDeleteDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	std::shared_ptr<Snowflake> role_id;
};

class GatewayGuildScheduledEventUserAddDispatchData : public object, public std::enable_shared_from_this<GatewayGuildScheduledEventUserAddDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildScheduledEventUserAddDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_scheduled_event_id;

	std::shared_ptr<Snowflake> user_id;

	std::shared_ptr<Snowflake> guild_id;
};

class GatewayGuildScheduledEventUserRemoveDispatchData : public object, public std::enable_shared_from_this<GatewayGuildScheduledEventUserRemoveDispatchData> {
public:
	using std::enable_shared_from_this<GatewayGuildScheduledEventUserRemoveDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_scheduled_event_id;

	std::shared_ptr<Snowflake> user_id;

	std::shared_ptr<Snowflake> guild_id;
};

class GatewayIntegrationDeleteDispatchData : public object, public std::enable_shared_from_this<GatewayIntegrationDeleteDispatchData> {
public:
	using std::enable_shared_from_this<GatewayIntegrationDeleteDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> id;

	std::shared_ptr<Snowflake> guild_id;

	std::shared_ptr<Snowflake> application_id;
};

class GatewayInviteCreateDispatchData : public object, public std::enable_shared_from_this<GatewayInviteCreateDispatchData> {
public:
	using std::enable_shared_from_this<GatewayInviteCreateDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> channel_id;

	string code;

	js::number created_at;

	std::shared_ptr<Snowflake> guild_id;

	std::shared_ptr<APIUser> inviter;

	js::number max_age;

	js::number max_uses;

	std::shared_ptr<InviteTargetType> target_type;

	std::shared_ptr<APIUser> target_user;

	Partial<std::shared_ptr<APIApplication>> target_application;

	boolean temporary;

	js::number uses;
};

class GatewayInviteDeleteDispatchData : public object, public std::enable_shared_from_this<GatewayInviteDeleteDispatchData> {
public:
	using std::enable_shared_from_this<GatewayInviteDeleteDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> channel_id;

	std::shared_ptr<Snowflake> guild_id;

	string code;
};

class GatewayMessageEventExtraFields : public object, public std::enable_shared_from_this<GatewayMessageEventExtraFields> {
public:
	using std::enable_shared_from_this<GatewayMessageEventExtraFields>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	std::shared_ptr<APIGuildMember> member;

	array<any> mentions;
};

class GatewayMessageDeleteDispatchData : public object, public std::enable_shared_from_this<GatewayMessageDeleteDispatchData> {
public:
	using std::enable_shared_from_this<GatewayMessageDeleteDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> id;

	std::shared_ptr<Snowflake> channel_id;

	std::shared_ptr<Snowflake> guild_id;
};

class GatewayMessageDeleteBulkDispatchData : public object, public std::enable_shared_from_this<GatewayMessageDeleteBulkDispatchData> {
public:
	using std::enable_shared_from_this<GatewayMessageDeleteBulkDispatchData>::shared_from_this;
	array<std::shared_ptr<Snowflake>> ids;

	std::shared_ptr<Snowflake> channel_id;

	std::shared_ptr<Snowflake> guild_id;
};

class GatewayMessageReactionRemoveEmojiDispatchData : public MessageReactionRemoveData, public std::enable_shared_from_this<GatewayMessageReactionRemoveEmojiDispatchData> {
public:
	using std::enable_shared_from_this<GatewayMessageReactionRemoveEmojiDispatchData>::shared_from_this;
	std::shared_ptr<APIEmoji> emoji;
};

class GatewayThreadCreateDispatchData : public APIThreadChannel, public std::enable_shared_from_this<GatewayThreadCreateDispatchData> {
public:
	using std::enable_shared_from_this<GatewayThreadCreateDispatchData>::shared_from_this;
	boolean newly_created;
};

class GatewayTypingStartDispatchData : public object, public std::enable_shared_from_this<GatewayTypingStartDispatchData> {
public:
	using std::enable_shared_from_this<GatewayTypingStartDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> channel_id;

	std::shared_ptr<Snowflake> guild_id;

	std::shared_ptr<Snowflake> user_id;

	js::number timestamp;

	std::shared_ptr<APIGuildMember> member;
};

class GatewayVoiceServerUpdateDispatchData : public object, public std::enable_shared_from_this<GatewayVoiceServerUpdateDispatchData> {
public:
	using std::enable_shared_from_this<GatewayVoiceServerUpdateDispatchData>::shared_from_this;
	string token;

	std::shared_ptr<Snowflake> guild_id;

	any endpoint;
};

class GatewayWebhooksUpdateDispatchData : public object, public std::enable_shared_from_this<GatewayWebhooksUpdateDispatchData> {
public:
	using std::enable_shared_from_this<GatewayWebhooksUpdateDispatchData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	std::shared_ptr<Snowflake> channel_id;
};

class GatewayHeartbeat : public object, public std::enable_shared_from_this<GatewayHeartbeat> {
public:
	using std::enable_shared_from_this<GatewayHeartbeat>::shared_from_this;
	GatewayOpcodes::Heartbeat op;

	GatewayHeartbeatData d;
};

class GatewayIdentify : public object, public std::enable_shared_from_this<GatewayIdentify> {
public:
	using std::enable_shared_from_this<GatewayIdentify>::shared_from_this;
	GatewayOpcodes::Identify op;

	std::shared_ptr<GatewayIdentifyData> d;
};

class GatewayIdentifyData : public object, public std::enable_shared_from_this<GatewayIdentifyData> {
public:
	using std::enable_shared_from_this<GatewayIdentifyData>::shared_from_this;
	string token;

	std::shared_ptr<GatewayIdentifyProperties> properties;

	boolean compress;

	js::number large_threshold;

	std::tuple<std::shared_ptr<shard_id>, js::number, std::shared_ptr<shard_count>, js::number> shard;

	std::shared_ptr<GatewayPresenceUpdateData> presence;

	js::number intents;
};

class GatewayIdentifyProperties : public object, public std::enable_shared_from_this<GatewayIdentifyProperties> {
public:
	using std::enable_shared_from_this<GatewayIdentifyProperties>::shared_from_this;
	string os;

	string browser;

	string device;
};

class GatewayResume : public object, public std::enable_shared_from_this<GatewayResume> {
public:
	using std::enable_shared_from_this<GatewayResume>::shared_from_this;
	GatewayOpcodes::Resume op;

	std::shared_ptr<GatewayResumeData> d;
};

class GatewayResumeData : public object, public std::enable_shared_from_this<GatewayResumeData> {
public:
	using std::enable_shared_from_this<GatewayResumeData>::shared_from_this;
	string token;

	string session_id;

	js::number seq;
};

class GatewayRequestGuildMembers : public object, public std::enable_shared_from_this<GatewayRequestGuildMembers> {
public:
	using std::enable_shared_from_this<GatewayRequestGuildMembers>::shared_from_this;
	GatewayOpcodes::RequestGuildMembers op;

	std::shared_ptr<GatewayRequestGuildMembersData> d;
};

class GatewayRequestGuildMembersData : public object, public std::enable_shared_from_this<GatewayRequestGuildMembersData> {
public:
	using std::enable_shared_from_this<GatewayRequestGuildMembersData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	string query;

	js::number limit;

	boolean presences;

	any user_ids;

	string nonce;
};

class GatewayVoiceStateUpdate : public object, public std::enable_shared_from_this<GatewayVoiceStateUpdate> {
public:
	using std::enable_shared_from_this<GatewayVoiceStateUpdate>::shared_from_this;
	GatewayOpcodes::VoiceStateUpdate op;

	std::shared_ptr<GatewayVoiceStateUpdateData> d;
};

class GatewayVoiceStateUpdateData : public object, public std::enable_shared_from_this<GatewayVoiceStateUpdateData> {
public:
	using std::enable_shared_from_this<GatewayVoiceStateUpdateData>::shared_from_this;
	std::shared_ptr<Snowflake> guild_id;

	any channel_id;

	boolean self_mute;

	boolean self_deaf;
};

class GatewayUpdatePresence : public object, public std::enable_shared_from_this<GatewayUpdatePresence> {
public:
	using std::enable_shared_from_this<GatewayUpdatePresence>::shared_from_this;
	GatewayOpcodes::PresenceUpdate op;

	std::shared_ptr<GatewayPresenceUpdateData> d;
};

class GatewayPresenceUpdateData : public object, public std::enable_shared_from_this<GatewayPresenceUpdateData> {
public:
	using std::enable_shared_from_this<GatewayPresenceUpdateData>::shared_from_this;
	any since;

	array<GatewayActivityUpdateData> activities;

	std::shared_ptr<PresenceUpdateStatus> status;

	boolean afk;
};

class BasePayload : public object, public std::enable_shared_from_this<BasePayload> {
public:
	using std::enable_shared_from_this<BasePayload>::shared_from_this;
	GatewayOpcodes op;

	any d;

	js::number s;

	string t;
};

template <typename Event, typename D>
class DataPayload : public BasePayload, public std::enable_shared_from_this<DataPayload<Event, D>> {
public:
	using std::enable_shared_from_this<DataPayload<Event, D>>::shared_from_this;
	GatewayOpcodes::Dispatch op;

	Event t;

	D d;
};

class MessageReactionRemoveData : public object, public std::enable_shared_from_this<MessageReactionRemoveData> {
public:
	using std::enable_shared_from_this<MessageReactionRemoveData>::shared_from_this;
	std::shared_ptr<Snowflake> channel_id;

	std::shared_ptr<Snowflake> message_id;

	std::shared_ptr<Snowflake> guild_id;
};