#pragma once

#include <string>

class OAuth2Scopes 
{
public:
	std::string Bot = "bot";
	std::string Connections = "connections";
	std::string DMChannelsRead = "dm_channels.read";
	std::string Email = "email";
	std::string Identify = "identify";
	std::string Guilds = "guilds";
	std::string GuildsJoin = "guilds.join";
	std::string GuildsMembersRead = "guilds.members.read";
	std::string GroupDMJoins = "gdm.join";
	std::string MessagesRead = "messages.read";
	std::string RPC = "rpc";
	std::string RPCNotificationsRead = "rpc.notifications.read";
	std::string WebhookIncoming = "webhook.incoming";
	std::string Voice = "voice";
	std::string ApplicationsBuildsUpload = "applications.builds.upload";
	std::string ApplicationsBuildsRead = "applications.builds.read";
	std::string ApplicationsStoreUpdate = "applications.store.update";
	std::string ApplicationsEntitlements = "applications.entitlements";
	std::string RelationshipsRead = "relationships.read";
	std::string ActivitiesRead = "activities.read";
	std::string ActivitiesWrite = "activities.write";
	std::string ApplicationsCommands = "applications.commands";
	std::string ApplicationsCommandsUpdate = "applications.commands.update";
	std::string ApplicationCommandsPermissionsUpdate = "applications.commands.permissions.update";
};
