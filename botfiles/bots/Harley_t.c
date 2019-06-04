//===========================================================================
//
// Name:		Harley_c.c
// Function:		chat lines for Harley Quinn
// Programmer:		MrElusive (MrElusive@idsoftware.com)
// Author:		Wrath and Rouge13
// Editor:		
// Last update:		12-8-1999
// Tab Size:		3 (real tabs)
//===========================================================================

chat "Harley"
{
	//the teamplay.h file is included for all kinds of teamplay chats
	#include "teamplay.h"

	//======================================================
	//======================================================

	type "game_enter" //initiated when the bot enters the game
	{
		"Hiya!";
		"Time ta whup some ass!";
		"Let the games begin.";
		"Hey! Where the heck are we?";
		"Heya, ", 1, ", Ready for sum butt-whupping?";
		"Harley Quinn, pleased ta meetcha!";
		// 0 = bot name
	} //end type

	type "game_exit" //initiated when the bot exits the game
	{
		"Well, that was fun.  Cya around", 0,".";
		"This stinks!  I'm going back to Gotham where the real party's at.";
		"Oooooo...nice one.";
		"Whups, gotta go.  Mr. J's back.";
		"That's it!  I'm outta here!";
		// 0 = bot name
	} //end type

	type "level_start" //initiated when a new level starts
	{
		"YUK! This place is even worse than the last one.";
		"Someone gonna say 'GO'?";
		"Dibs on the BFG";
		"Okay, new rule...no one shoots me.";	
		// 0 = bot name
	} //end type

	type "level_end" //initiated when a level ends and the bot is not first and not last in the rankings
	{
		"Ah well...coulda been worse I guess.";
		"I'll getcha next time.";
		"Hey, no fair! I shoulda been first.";
		"Ah well.  We all know who's the cutest.";
		"I was SO close.";
		"I feel kinda dizzy.";
		// 0 = bot name
	} //end type

	type "level_end_victory" //initiated when a level ends and the bot is first in the rankings
	{
		"And here you thought I was just another bubble headed blonde.  Well the jokes on you...I'm not even a real blonde.";
		"Just goes ta show ya, I'm the best.  But you already knew that, didn't ya?";
		"I'll be sending you the dry cleaning bill.";
		"Hey, who's eye is this?";
		"I warned ya, but you wouldn't listen to me would ya?";
		// 0 = bot name
	} //end type

	type "level_end_lose" //initiated when a level ends and the bot is last in the rankings
	{
		"Rats!  And I was doing so well to start.";
		"Laugh it up! Next time your butt's mine!";
		"Okay, I'm warmed up now.";
		"Okay...someone crank up my skill level.";
		"Geez, I can't hit shit!";
		// 0 = bot name
	} //end type

	//======================================================
	//======================================================

	type "hit_talking" //bot is hit while chat balloon is visible; lecture attacker on poor sportsmanship
	{
		"HEY!  I'm talkin here!";
		"Oh sure, ",0 ,"!  Shoot the chatty bitch.";
		"How rude!";
		"Ya just can't trust some people";
		"You enjoy that", 0,"?  Yeah, that's what I thought.";
		//0 = shooter
	} //end type

	type "hit_nodeath" //bot is hit by an opponent's weapon attack; either praise or insult
	{
		"OUCHIE!";
		"Izzat a love tap? ;)";
		"I am too cute to die.";
		"HEY, ", 0, "! You getting fresh with me?";
		"Watch it,", 0,"!";
		//0 = shooter
	} //end type

	type "hit_nokill" //bot hits an opponent but does not kill it
	{
		"Come back, ", 0, "! I got some more where that came from.";
		"Whoops, I thought you was someone else.";
		"My bad!";
		"*giggle* Hurts, don't it?";
		"Awwwww. I messed up your pretty clothes.";
		"Wow!  Look at the blood fly.";
		//0 = opponent
	} //end type

	//======================================================
	//======================================================

	type "death_telefrag" //initiated when the bot is killed by a telefrag
	{
		"HEY!  Could've at least knocked first.";
		"Watch it", 0, "!  Getting a little too friendly for my tastes.";
		"Oh no, we can't do that!";
		// 0 = enemy name
	} //end type

	type "death_cratered" //initiated when the bot is killed by taking "normal" falling damage
	{
		"I thought I could make it.";
		"Geez!  They don't make ground like they used to.";
		"HEY,", 0, "! You were supposed to catch me!";
		"It's gotta be the shoes.";
		"KER-SPLAT!";
		"Look out below!";
		"BOOOONNNNNNZZZZAAAAAIIII!";
		// 0 = enemy name
	} //end type

	type "death_lava" //initiated when the bot dies in lava
	{
		"YIKES! That's hot!";
		"Well, it LOOKED okay to stand it.";
		"Who ordered a cup of Harley soup?";
		"Hey,", 0,"You should try that too!";
		"I know I'm hot, but this is ridiculous.";
		// 0 = enemy name
	} //end type

	type "death_slime" //initiated when the bot dies in slime
	{
		"Ewwwwww!";
		"What is this stuff?  Corrosive snot?";
		"I've had worse stuff from Mr.J.";
		"I'll NEVER get this stuff outta my costume.";
		// 0 = enemy name
	} //end type

	type "death_drown" //initiated when the bot drowns
	{
		"glub glub glub.";
		"No wisecracks about swallowing!";
		"Geez, it's hard to swim while holding this thing!";
		"Look on the bright side, I found a quarter. = )";
		"At least I don't stink no more.";
		"I HATE baths!";
		"At least I got ", 0,"'s blood off my costume.";
		// 0 = enemy name
	} //end type

	type "death_suicide" //initiated when bot blows self up with a weapon or craters
	{
		"Uhm, just ignore that.";
		"Goodbye cruel world.";
		"Probably not my best move.";
		"At least ", 0," didn't kill me.";
		"Looks like the joke's on me.";
		// 0 = enemy name
	} //end type

	type "death_gauntlet" //initiated when the bot is killed by a gauntlet attack
	{
		"How rude!";
		"Way ta go", 0, ".";
		"I was blinded by the pretty light.";
		"Where'd you pull that thing out of?  Nevermind, I don't wanna know.";
		"Now THAT hurt!";
		// 0 = enemy name
	} //end type

	type "death_rail" //initiated when the bot is killed by a rail gun shot
	{
		"Pitch a tent, why doncha?";
		"HA! You fell right into my clever trap!";
		"HEY!  Who put this hole in me!";
		// 0 = enemy name
	} //end type

	type "death_bfg" //initiated when the bot died by a BFG
	{
		"WHAT DA HECK WAS THAT?";
		"Oh wow! That thing gave me the whim-whams something fierce!";
		"Need a little more help?  I could turn around and crouch if it would make it easier for you.";
		"I coulda dodged that one.";
		// 0 = enemy name
	} //end type

	type "death_insult" //insult initiated when the bot died
	{
		"Ya, laugh it up!  While you can.";
		"That's it!  No more Ms. Nice Harley!";
		"Didn't even feel it.";
		"Alright, where are you?";
		"I've got something for you.";
		// 0 = enemy name
	} //end type

	type "death_praise" //praise initiated when the bot died
	{
		"My lawyer will be talking to you in the morning, ", 0, ".";
		"Hey, ",0,"...how bout a truce?";
		"Not bad kiddo.";
		"I haven't been spanked that hard since... well never.";
		"If you're done with my ass, can I have it back?";
		"Just try that again bucko!";
		// 0 = enemy name
	} //end type

	//======================================================
	//======================================================

	type "kill_rail" //initiated when the bot kills someone with rail gun
	{
		"MMMM, gotta hate that.";
		"That one went right through your spleen.";
		"Gee, another 'impressive' pulled from ", 0, "'s ass. I'll throw it on the pile.";
		"WOO HOO! Bullseye!";
		"YAHOO!";
		// 0 = enemy name
	} //end type

	type "kill_gauntlet" //initiated when the bot kills someone with gauntlet
	{
		"Tag! You're it.";
		"Ewww, you got brains on my gauntlet";
		"Let's make this clear, ", 0, ". I am just hitting you. Not ON you.";
		"You are so cute when you kiss my glove like that.";
		"BONZAI! Sucker";
		"Ow!  Did that hurt?  That looked like it hurt.  I'll bet it hurt, didn't it?";
		// 0 = enemy name
	} //end type

	type "kill_telefrag" //initiated when the bot telefragged someone
	{
		"Oppsie.";
		"Look out, hot dish coming through.";
		"How bout a little elbow room here?";
		"Oh sorry, was that you,", 0,"?";
		"For a second there, I was trapped in,", 0,"'s head, and boy was I lonely.";
		// 0 = enemy name
	} //end type

	type "kill_suicide" //initiated when the player kills self with a weapon of craters
	{
		"HAHAHAHAHA.";
		"You might wanna read the manual on how to play.";
		"Nice one. I'm sure Momma ", 0, " would be proud.";
		"Way ta go,", 0, "!";
		"Ya dunce!";
		"Couldn't have done it better myself,", 0,".";
		// 0 = enemy name
	} //end type

	type "kill_insult" //insult initiated when the bot killed someone
	{

		"How'd ya like them apples?";
		"Just lay there. It's easier that way.";
		"Wow, you go boom good.";
		"I guess you're not actually planning on winning.";
		"HAHAHAHAHAHA.";
		"Ya know, ", 0, ", I'm not sure if you blow or just suck.";
		"Now THAT's the way it's done.  You taking notes?";
		// 0 = enemy name
	} //end type

	type "kill_praise" //praise initiated when the bot killed someone
	{
		"Whew! That was a close one, ", 0, ". You almost had me.";
		"I did that because I love you.";
		"I'm sorry, ", 0, ". You were just too sexy to live.";
		0, ", one day you might make a living at this.  But not today.";
		"Normally, I'd call you a wuss, but I'm feeling nice so I won't.";
		// 0 = enemy name
	} //end type

	//======================================================
	//======================================================

	type "random_insult" //insult initiated randomly (just when the bot feels like it)
	{
		"I think somebody's been messing with ", 1, "'s bot script.";
		"You ain't real good at this whole killing thing are you?";
		"What's the matter, ", 0, "? Can't cha hit a girl?";
		":p";
		"First, I'm gonna find ya, and then, I'm gonna kill ya.";
		"You stand still better than anyone else I've faced.";
		"This is gonna be too easy.";
		// 0 = name of randomly chosen player
		// 1 = bot name
	} //end type

	type "random_misc" //miscellanous chats initiated randomly
	{
		"It's murder getting blood out of this costume.";
		"Sheesh, this place is a dump.";
		"It's not so bad in here. At least I get to kill things.";
		"Care ta dance?";
		"Boy, I'm chatting my brains out over here.";
		"Why don't you ever talk to me, ", 0, "? Don't you love me?";
		"Who want's to guess where my zipper is?";
		"First one to find me gets to see me naked.";
		// 0 = name of randomly chosen player
		// 1 = bot name
	} //end type
} //end Harley chat







