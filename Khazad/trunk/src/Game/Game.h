#ifndef GAME__HEADER
#define GAME__HEADER

#include <stdafx.h>

#include <Singleton.h>

class Actor;
class Pawn;
class MapCoordinates;

class Game
{
DECLARE_SINGLETON_CLASS(Game)

public:

	~Game();
	bool Init();
	bool Run();


	bool RemovePawn(Uint32 ID);
    Pawn* SpawnPawn(MapCoordinates SpawnCoordinates);

	//std::vector<Pawn*> PawnList;

	bool setActorCooldown(Actor* TargetActor, int CoolDown);
    std::vector<Actor*>* Game::getCarosel(int CoolDown);
    bool UpdateActors();
    bool AddActor(Actor* NewActor, int CoolDown);

    void changeTickRate(int32_t RateChange);
    void setTickRate(int32_t NewRate);

    int32_t getTickCount()      { return TickCounter; }
    int32_t getTickRate()       { return TickRate; }

    void togglePause()              { Pause = !Pause; }
    void setPause(bool NewState)    { Pause = NewState; }

protected:

    int32_t TickCounter;  // Simulation time units
    int32_t TickRate;     // Simulation Rate;
    bool Pause;

    std::map< uint32_t, std::vector< Actor* >* > ActorUpdateGroups;

    std::vector<Actor*> ReIndexedActorBuffer;
    std::vector<int> ReIndexedActorCoolDown;
};

#define GAME (Game::GetInstance())

#endif // GAME__HEADER
