#pragma once

namespace Heroes
{


    class HeroDefenceStats
    {
    public:
        int Health; // when it ends dies. 
        int Armour; //if you have it first damage removes from this
        int AbilityResist; // like armour but includes ability
        int AbilityDodge; // it has a percentage change
    };

    class HeroAttackStats
    {
    public:
        int MinAttack; // minimum random number applying damage
        int MaxAttack; // maximum //
        int Attack; // just for match time
        int ArmourDebuff; // dont have it ignore
        int AbilityDamage; // damage applied by the enmy
        int CriticalStrike; //with a change applied strongert damage
        int LifeSteal; // a little adds to health of attacking enemey
        int AttackSpeed; // steps count between attaks
        float AttackRange; // distance to apply attack
    };


    class HeroSkillStats
    {
    public:
        int CoolDown; // how much it takes to use ability again
        int Duration; // how long you can use ability
        int TotalDamage; // all damage applied  by ability.
        int AbilityScenario; // ignore it. dont know
    };


    class GeneralStats
    {
    public:
        float Speed; // moving distance in single step
    };


    class HeroStats
    {
    public:
        HeroDefenceStats DefenceStats;
        HeroAttackStats AttackStats;
        HeroSkillStats SkillStats;
        GeneralStats GeneralStats;
    };

}
