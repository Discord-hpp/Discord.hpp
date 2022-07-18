#include <string>
#include <optional>
#include "../global.hpp"

class APIRoleTags 
{
public:
	std::optional<Snowflake> bot_id;
	int premium_subscriber = NULL; // whether this is the guild's premium subscriber role
	std::optional<Snowflake> integration_id;
};

class APIRole 
{
public:
	Snowflake id;
	std::string name;
	int color;
	bool hoist;
	std::optional<std::string> icon;
	std::optional<std::string> unicode_emoji;
	int position;
	Permissions permissions;
	bool managed;
	bool mentionable;
	APIRoleTags tags;
};
