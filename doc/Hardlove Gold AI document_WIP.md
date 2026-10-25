# Pokémon Hardlove Gold AI

## Contents

- [Brief summary](#brief-summary)
- [Switch AI](#switch-ai)
- [Diverting targets in Doubles](#diverting-targets-in-doubles)
- [Damaging moves](#damaging-moves)
- [Hazards](#hazards)
- [Protection and support moves](#protection-and-support-moves)
- [Field and weather moves](#field-and-weather-moves)
- [Substitute and Memento](#substitute-explosion-and-memento)
- [Status moves](#status-moves)
- [Setup moves](#setup-moves)
- [Other status moves](#other-status-moves)
- [Recovery moves](#recovery-moves)
- [Counter moves](#counter-moves)
- [Extra details](#extra-details)

---

## Brief summary

The AI will calculate a score for every move and choose the highest scoring move to click on any given turn. If multiple moves have the same score, it randomly selects between one of them. In Double battles, the AI will calculate a score for each of its moves on each possible target, and choose the highest scoring move + target. If multiple targets have the same highest move score, the AI will randomly roll the target first, before choosing the highest move score.

The AI knows your full team's stats, moves, items and Abilities at the start of the battle. It sees accurate damage and speed, including Mega Evolution: if an AI mon is **on the field** and can Mega Evolve, it already uses the Mega's stats, Ability and typing for any calculation. It also sees Sticky Webs, if Terrain Seeds and/or Unburden would proc, Libero STAB, guaranteed critical hits, any effect that prevents moves from being usable like Encore, Choice Lock, Taunt, Throat Chop, etc.

The AI does not read Player input. The only instance where the AI "cheats" is reading its sleep counter, so that the AI knows when it wakes up and can click a move or Sleep Talk/Snore.

The rest of this document will list out the possible scores for the relevant moves in the game, and the scenarios in which those scores are possible. As a general rule, the default score for non-attacking moves is **+6** (tied with the highest damage attacking move).

Lastly, the AI has a basic function to check if a move is useless. For example, if Stealth Rocks are already set, the AI will not try to click SR again. If you are paralyzed, it will not try to paralyze you again. It also never clicks moves that would fail or do nothing: moves without PP, disabled or Taunted moves, moves you are immune to (type, Ability, Levitate, Air Balloon, Grass/Overcoat/Safety Goggles against powder moves), priority moves into Psychic Terrain, Prankster status moves into Dark types, Nightmare on an awake target and so on.

### Common scores to be aware of

| Situation | Score |
|---|---|
| Highest damaging move | +6 (80%), +8 (20%) |
| Slow kill (AI kills but is slower than target) | +9 (80%), +11 (20%) |
| Fast kill (AI kills and is faster\* than target) | +12 (80%), +14 (20%) |

\*AI sees speed ties as them being faster than the Player. A kill with a priority move counts as a fast kill.

---

## Switch AI

The AI in this game usually does not hard switch in battle, but it is possible in Single Battles only. In Double Battles, the AI never switches. The AI calculates a Switch-In Score for each mon in the back. For a hard switch, it factors in the highest damage the Switch-In would receive on the switch.

### When the AI will not consider a switch

- AI is trapped or on its last mon
- AI has fast OHKO
- AI has slow OHKO and Player does not have OHKO
- AI has at least one boosted stat or is behind a Substitute
- AI has no pivot move (U-Turn, Volt Switch, Flip Turn, Parting Shot) and is below 67% HP
- AI has no pivot move and deals more damage than it receives (in % of current HP, both with the highest roll)

### Switch chance

If the best Switch-In Score is below +3, the AI never switches. Otherwise it checks if Perish Song is active.

**If Perish Song is active**, the AI has a chance to switch with:

```
30% * (Switch-In Score - 2)
```

i.e. with a +4 Switch-In Score, the AI has a 66% chance to switch.

**If Perish Song is not active** and the Switch-In Score is +4 or higher, the AI calculates the rate to switch according to the highest damage the Switch-In would receive:

```
MAX(0, (50% - damageInPercent) * 3 / 5)
```

With a +4 Switch-In Score only half of this rate is used. With +5 or higher it adds a flat 5% to the rate:

| Switch-In Score | Switch chance |
|---|---|
| +3 or lower | 0% |
| +4 | 0-15% |
| +5 or higher | 5-35% |

If the AI has a pivot move it can use, it will use the pivot move instead of hard switching, unless it would be KO'd before it moves.

### Switch-In Score

This score is also used to pick the next mon after a KO. It starts at +0, then **for each Player Mon on the field**:

- If the Switch-In is faster:
  - Can OHKO the Player Mon: **+5**
  - Else, deals at least as much % as it receives: **+3**
  - Else: **+1**
- If the Switch-In is slower:
  - Can OHKO the Player Mon and is not OHKO'd: **+4**
  - Else, deals more % than it receives: **+2**
  - Else, if it is OHKO'd: **-1**

Hard switch only:

- If the Switch-In is KO'd on the switch, or is slower and takes 50% or more: **-10**
- If the Switch-In holds a Mega Stone (the AI saves its Mega): **-10**
- If the Switch-In takes 25% or less: **+1**

After a KO only, once:

- Wobbuffet / Wynaut that is not OHKO'd: **+2**
- Ditto that is faster: **+2**
- Zoroark that is faster: **+0 to +2** (random)

Mons that are KO'd on the switch, or slower and 2HKO'd, are effectively never picked for a hard switch.

---

## Diverting targets in Doubles

![Diverting targets in Doubles][diverting_targets]

The AI will calculate the faster mon first (Mega speed included). If it sees a fast OHKO, the partner mon will completely ignore the Player's mon that will be a fast OHKO.

---

## Damaging moves

### All damaging moves

AI will roll a random damage roll for all of its attacking moves\*, and the highest damaging move gets the following score:

- **+6** (~80%), **+8** (~20%)

If multiple moves kill, then they are all considered the highest damaging move and all get this score. OHKO moves (Fissure etc.) can only get the +8 if the AI has No Guard.

- If a damaging move kills:
  - If AI mon is faster, or the move has priority and AI is slower: additional **+6**
  - If AI mon is slower: additional **+3**
  - If AI has Moxie, Beast Boost, Chilling Neigh, Grim Neigh, Eelevate: additional **+1**
- If a damaging move has a high crit chance and is Super Effective on the target: additional **+2** (50%), no score boost other 50%

> \***Note:** There are a few specific damaging moves that do not have their damage rolled normally and are thus never considered the "highest damaging move".
>
> These moves are Explosion, Self-Destruct, Misty Explosion, Final Gambit, Rollout, Ice Ball, Meteor Beam, Electro Shot, damaging trapping moves (e.g. Whirlpool), Future Sight and Doom Desire.
>
> All of these moves still have a check to see if they kill the target mon. If so, the above boosts for kills still apply. They will just never get the +6 or +8 boost from being the "highest damaging move". They all also have separate AI that is listed later in this file, which stacks additively with any score boosts from kills.

### Damaging priority moves

- If AI is dead to Player Mon and slower, all attacking moves with priority get an additional **+11**

### Explosion, Self Destruct, Misty Explosion

- If AI mon is at less than 10% HP: **+10**
- Else if AI mon is at less than 33% HP: **+8** (~70%), **+0** (~30%)
- Else if AI mon is at less than 66% HP: **+7** (50%), **+0** (50%)
- Else: **+7** (~5%), **+0** (~95%)

AI will not use a Boom move if the target is immune or any mon on the field has Damp (unless the AI has Mold Breaker).

### Damaging trapping moves

Whirlpool, Fire Spin, Sand Tomb, Bind, Wrap, Clamp, Infestation:

- **+6** (~80%), **+8** (~20%)
- Never used if the target is already trapped, a Ghost type or holds a Shed Shell (Sand Tomb only scores if the target is grounded)

### Damaging speed reduction moves with guaranteed effect

Icy Wind, Electroweb, Rock Tomb, Mud Shot, Low Sweep:

- If this is the highest damaging move, none of the below bonuses are applied, and the move gets the usual +6 (80%) / +8 (20%) for being the highest damaging move
- If target can have its stats lowered (not Contrary, Clear Body, White Smoke, Full Metal Body, Clear Amulet):
  - If AI is slower: **+6**
  - Else: **+5**
  - If it is a Double battle and the move is Icy Wind or Electroweb: additional **+1**

### Damaging Atk/SpAtk reduction moves with guaranteed effect

Trop Kick, Skitter Smack, etc.:

- If this is the highest damaging move, none of the below bonuses are applied, and the move gets the usual +6 (80%) / +8 (20%) for being the highest damaging move
- If target can have its stats lowered:
  - If target has a move of the corresponding split (e.g. special move if AI is considering Skitter Smack): **+6**
  - Else: **+5**
  - If it is a Double battle and the move is spread: additional **+1**

### Damaging -2 SpDef reduction moves with guaranteed effect

Acid Spray:

- If the target can have its stats lowered and does not have Bulletproof, Acid Spray receives an additional **+6** on top of any standard scoring for highest damage/kill etc., regardless of whether it is the highest damaging move.

### Damaging switching moves

U-Turn, Flip Turn, Volt Switch:

- If this is not the highest damaging move and the AI has another mon to switch to, it gets **+6**, unless there is an immunity (i.e. Ground).
  - If the AI wants to switch out (see [Switch AI](#switch-ai)): additional **+3**
  - If the AI has Regenerator and is below 67% HP: additional **+1**

### Future Sight, Doom Desire

- If AI is faster than target and is KO'd by target: **+8**
- Else: **+6**
- Never used if one is already hitting the target.

> **Note:** This stacks with bonuses for kills listed in the "All damaging moves" section.

### Sucker Punch

- If AI used Sucker Punch last turn: **-20** (50%), no score change other 50%

> **Note:** Whether the Sucker failed or not last turn does not affect its score in any way.

### Fake Out, First Impression

- If it's the AI mon's first turn out (and the target is not immune to flinching for Fake Out): **+9**
- Else: never used

### Pursuit

- If Pursuit can KO Player Mon: **+10**
- If Pursuit cannot KO Player Mon:
  - If Player Mon is below 20% HP: **+10**
  - If Player Mon is below 40% HP: **+8** (50%), no score boost other 50%
- Regardless of above conditions, if AI is faster: additional **+3**

> **Note:** The bonuses for kill and AI outspeeding stack with the bonus for kill listed in the "All damaging moves" section.

### Fell Stinger

- If AI isn't at max Atk stage and Fell Stinger KOs:
  - If AI is faster: **+12**
  - If AI is slower: **+6**
- Otherwise: treated as a normal damaging move

### Focus Punch

- If Player Mon is incapacitated or the AI is behind a Substitute: **+2**
- Else: never used

### Dragon Tail, Circle Throw

- If AI is faster: additional **-2**

### Rollout, Ice Ball

- Always **+7**

### Meteor Beam

- If AI is holding a Power Herb: **+9**
- Else: never used (**-20**)

### Electro Shot

- If AI is holding a Power Herb or it is raining: **+9**
- Else: never used (**-20**)

---

## Hazards

### Stealth Rock

- If first turn out: **+8** (25%), **+9** (75%)
- Else: **+6** (25%), **+7** (75%)

### Spikes, Toxic Spikes

- If first turn out: **+8** (25%), **+9** (75%)
- Else: **+6** (25%), **+7** (75%)

> **Note:** If at least 1 of the corresponding spikes is up already, score is lowered by 1 always.

### Sticky Web

- If first turn out: **+9** (25%), **+12** (75%)
- Else: **+6** (25%), **+9** (75%)

Hazards are never set if they are already maxed, the Player has only one mon left, or the Player Mon (or its partner) has Magic Bounce.

---

## Protection and support moves

### Protect, King's Shield, Obstruct etc

- Base: **+6**
- If AI is inflicted with any of the following: Poison, Burn, Paralysis, Cursed, Infatuated, Perish Songed, Leech Seeded, Yawned: additional **-1**
- If Player Mon is inflicted with any of the above: additional **+1**
- If it's AI mon's first turn out and it is a double battle: additional **-1**
- If it's AI mon's first turn out, it holds a Toxic Orb and has Poison Heal: additional **+1**

AI will not protect if they die of secondary damage afterwards (weather, status, etc.), if the Player Mon has Unseen Fist or Piercing Drill, or if the AI has Truant.

- If AI used protect last turn, 50% chance to never use protect this turn (**-20**).
- If AI used protect last 2 turns, it never uses protect this turn.

Other Protect-like moves like King's Shield have no unique AI, and are equivalent to Protect.

### Endure

- If Player Mon is faster and can KO the AI: **+6**
  - If AI holds a Berry: additional **+2**
  - If AI is inflicted with any of the statuses listed for Protect: additional **-1**
- Same rules as Protect for using it multiple turns in a row and for dying to secondary damage.

### Role Play

- If the AI's partner has Huge Power or Pure Power, and the AI mon doesn't: **+9** (75%), **+12** (25%)

### Skill Swap (on partner)

- For a few specific combos (e.g. giving Truant/Slow Start away, Prankster to Breloom, Technician/Flash Fire to Durant): **+6** (50%), **+9** (50%)

### Shadow Sneak, Aqua Jet, Ice Shard, Mach Punch, Bullet Punch, Vacuum Wave, Quick Attack

Special case for doubles here.

- If their partner has Weakness Policy and this move is super effective on the partner, these get **+6** (25%), **+9** (50%), **+12** (25%) when used on the partner.

### Magnitude, Earthquake

Special case for doubles here.

- If their partner isn't grounded or has Telepathy: additional **+2**
- Else if partner will be hit by EQ and it is super effective on it: additional **-10**
  - Note that this check doesn't happen if partner is immune to EQ, so Crobat for example never causes an EQ score reduction.
- Else if partner will be hit by EQ and it is neutral on it: additional **-3**
- Else (partner resists it): additional **+2**

### Imprison

- If Player Mon has at least one move in common with AI mon: **+9**
- If the Player Mon is already Imprisoned: never used (**-20**)

### Baton Pass

- If AI has a mon alive to BP into, and AI is either behind a Substitute or has a stat raised (or both): **+9**
- If AI mon is last mon out: never used (**-20**)
- If AI has a mon alive to BP into, but has no Substitute or stat increases: **+0**

### Tailwind

- If AI mon or its partner are slower than any Player Mon on the field: **+9**
- Else: **+5**
- If Tailwind is already up on the AI's side: **-20**

### Trick Room

- If AI mon or its partner are slower than any Player Mon on the field: **+10**
- Else: **+5**
- If Trick Room is already up: **-20**

### Gravity

- **+6**, never used if Gravity is already up

### Helping Hand

- **+6** (50%), **+8** (50%)
- AI will not use Helping Hand if its partner is also using Helping Hand, its partner is using a status move, or its partner is ignoring its target.

### Follow Me, Rage Powder

- In doubles, if the partner is alive: **+6** (~80%), **+8** (~20%)
- Never used in singles, or against a target with Stalwart or Propeller Tail.
- Rage Powder is also never used against a target that is immune to powder moves (Grass type, Overcoat, Safety Goggles).

### Heal Pulse, Pollen Puff, Milk Drink (on partner)

- If the AI isn't slower than the Player Mons and its partner is at 50% HP or lower: **+7**

### Decorate

- **+6** (50%), **+8** (50%)
- Additional **-2** if the partner's Attack or Sp. Atk is +2 or higher

### Coaching

Only used in Double battles:

- **+6** (50%), **+8** (50%)
- Additional **-1** if the partner's Attack is +2 or higher, another **-1** if its Defense is +2 or higher

### Acupressure (on partner)

- **+6** (50%), **+8** (50%)

### Final Gambit

- If AI mon is faster and has at least as much current HP as the Player Mon: **+8**
- If above is not true, and AI is faster and dies to Player Mon: **+7**
- Else: **+6**
- Never used if the target is immune.

---

## Field and weather moves

### Electric/Psychic/Grassy/Misty Terrain

- If AI holding Terrain Extender: **+9**
- Else: **+8**
- Never used if the same Terrain is already up.

### Rain Dance, Sunny Day, Sandstorm, Hail, Snowscape

- If the AI mon benefits from the weather: **+9**

  | Weather | Benefits |
  |---|---|
  | Rain | Swift Swim, Rain Dish, Hydration, Dry Skin |
  | Sun | Fire type, Solar Power, Chlorophyll |
  | Sand | Rock, Ground or Steel type, Sand Force, Sand Rush, Sand Veil |
  | Hail/Snow | Ice type, Ice Body, Snow Cloak, Slush Rush |

- If the AI holds the matching rock (Damp Rock etc.): additional **+1**
- Never used if the weather is already up.
- Like setup moves, these get no bonus if a Player Mon can KO the AI (see [General setup](#general-setup)).

### Light Screen, Reflect

- Starts at **+6**
- If Player Mon has a move that corresponds with the screen (e.g. physical move for Reflect):
  - If AI mon has Light Clay: additional **+1**
  - Another additional **+1** is applied 50% of the time
- In summary: +6 base, can be +7 or +8 depending on Player moves, Light Clay being held, and RNG
- Never used if the screen is already up.

### Aurora Veil

Only used in Snow, and not if Aurora Veil is already up.

- Starts at **+6**
- If AI mon has Light Clay: additional **+1**
- Additional **+2** is applied 50% of the time

---

## Substitute and Memento

### Substitute, Shed Tail

- Starts at **+6**
- If Player Mon is asleep: additional **+2**
- If Player Mon is Leech Seeded and AI mon is faster: additional **+2**
- Regardless of above conditions: additional **-1** (50%), no score change other 50%
- If Player Mon has a sound-based move that would hit the AI (the AI doesn't have Soundproof and the Player Mon isn't Throat Chopped): additional **-8**
- If AI is below 50% HP, already behind a Substitute, or the Player Mon has Infiltrator: never used (**-20**)

### Memento

- If AI mon is at less than 10% HP: **+16**
- Else if AI mon is at less than 33% HP: **+14** (~70%), **+6** (~30%)
- Else if AI mon is at less than 66% HP: **+13** (50%), **+6** (50%)
- Else: **+13** (~5%), **+6** (~95%)

AI will not use Memento if the AI is on its last mon.

---

## Status moves

### Thunder Wave, Stun Spore, Glare, Nuzzle

- If one of the following conditions are true: **+8**
  - Player Mon is faster than AI mon
  - AI mon has Hex or a move that flinches (and the target can be flinched)
  - Player Mon is infatuated or confused
- Else, none of the above conditions are met: **+7**
- Regardless of above conditions: additional **-1** (50%), no score change other 50%

### Will-o-Wisp

- Starts at **+6**
- ~33% of the time, the following conditions are checked:
  - If target has a physical attacking move: additional **+1**
  - If AI mon or its partner has Hex: additional **+1**
- The other ~67% of the time: no other bonuses, so just +6

### Trick, Switcheroo

- If AI is holding a Toxic Orb or Flame Orb and the target can get that status: **+6** (50%), **+7** (50%)
- If AI is holding one of the following: Iron Ball, Lagging Tail, Sticky Barb: **+7**
- Never used if neither mon holds an item, or the target has Sticky Hold.

### Yawn, Dark Void and all other non-damaging sleep moves (i.e. Grasswhistle, Sing)

- Starts at **+6**
- Sleep moves (not Yawn) get an additional **+2** if the AI has Prankster
- 25% of the time, AI considers the following conditions (assuming it sees no kill):
  - If Player Mon can be put to sleep (no sleep-preventing abilities, no pre-existing status, no terrain, etc.): additional **+1**
  - If AI has Dream Eater or Nightmare, and Player does not have Snore or Sleep Talk: additional **+1**
  - If AI or AI's partner has Hex: additional **+1**
- The other 75% of the time: no additional bonuses, so just +6

### Poisoning moves

- Starts at **+6**
- ~33% of the time, if the AI cannot KO the Player Mon, the following checks are applied:
  - If Player Mon can be poisoned and is above 20% HP:
    - If AI mon has Hex, Venom Drench, Venoshock or the ability Merciless and the AI takes less than 50% from the Player Mon: additional **+2**
- The other ~67% of the time: no additional bonus, so just the base +6

### Confusing moves (Confuse Ray, Swagger, Flatter, etc.)

- Starts at **+6**
- If Player Mon is paralyzed or infatuated: additional **+2**
- Never used if the target is already confused, has Own Tempo or is behind Safeguard.

### Attract

- Starts at **+6**
- If Player Mon is paralyzed or confused: additional **+2**
- Never used if the target is already infatuated, has Oblivious, or one of the Mons is genderless or both are the same gender.

### Leech Seed

- Starts at **+6**
- If Player Mon cannot KO the AI and is above 20% HP: additional **+1**, and another **+1** 50% of the time
- If Player Mon is infatuated or confused: additional **+1**
- If Player Mon is poisoned, burned or paralyzed: additional **+1**
- Never used if the target is already seeded, a Grass type or has Magic Guard.

### Sleep Talk, Snore

- If the AI mon is asleep and will still be asleep when it moves (the AI knows its sleep counter, including Early Bird and Uproar): **+24**
- Else: never used (**-20**)

---

## Setup moves

### General setup

Dragon Dance, Calm Mind, etc.\*

- If any Player Mon can KO AI, or the Player Mon can force a switch (Roar, Whirlwind, Dragon Tail, Circle Throw), the AI mon gets no bonus for setup moves at all.
- If Player Mon has Unaware, the AI mon still has a 25% chance to score setup normally.

\*Full list of moves that fall into this category:

> Swords Dance, Howl, Nasty Plot, Tail Glow, Growth, Work Up, Hone Claws, Dragon Dance, Shift Gear, Tidy Up, Victory Dance, Shell Smash, Clangorous Soul, Belly Drum, Bulk Up, Coil, Curse (non-Ghost), Calm Mind, Quiver Dance, Iron Defense, Acid Armor, Barrier, Cotton Guard, Harden, Amnesia, Cosmic Power, Defense Curl, Charge, Stuff Cheeks, Stockpile, Agility, Rock Polish, Autotomize, Focus Energy, Psych Up, evasion boosting moves, Ingrain, Aqua Ring, Geomancy, weather moves, and Power-Up Punch / Charge Beam / Trailblaze / Rapid Spin when they are not the highest damaging move.

### Offensive setup

Swords Dance, Howl, Nasty Plot, Tail Glow, Growth, Work Up, Hone Claws, Dragon Dance, Shift Gear, Tidy Up, Victory Dance, Power-Up Punch, Charge Beam:

- Starts at **+6**
- If AI is already at +2 or higher in Attack or Sp. Atk: additional **-2**, and another **-1** at +3 or higher
  - Dragon Dance, Shift Gear, Tidy Up, Victory Dance: the same -2/-1 also apply if the AI is already faster
- If Player Mon is incapacitated (frozen with no thawing move, asleep, recharging, loafing around due to Truant): additional **+3**
- If the Player Mon has no active Focus Sash/Sturdy:
  - If AI is faster, it is a single battle and no Player Mon can KO the AI: additional **+2**
  - If AI takes less than 1/3 of its HP from the Player Mon: additional **+3**, and another **+1** if AI is faster
- If AI is slower and is 2HKO'd by Player Mon: additional **-5**
- If AI is 2HKO'd by Player Mon: additional **-2** (50%)

### Defensive setup

Iron Defense, Acid Armor, Barrier, Cotton Guard, Harden, Amnesia, Cosmic Power, Defense Curl, Charge, Stuff Cheeks, Stockpile:

- Starts at **+6**
- Defense boosting moves are only used if the Player Mon has a physical move, Sp. Def boosting moves only if it has a special move.
- If AI is already at +2 or higher in Defense or Sp. Def: additional **-3**, and another **-1** at +3 or higher
- If Player Mon is incapacitated: additional **+2**
- If AI is slower and is 2HKO'd by Player Mon: additional **-5**
- If AI takes less than 1/3 of its HP from the Player Mon: additional **+3**, and another **+1** if AI is faster

### Coil, Bulk Up, Curse, Calm Mind, Quiver Dance

- Starts at **+6**
- Additional **-2** if already at +2 or higher in one of the boosted stats, another **-1** at +3 or higher

These moves are treated as "Defensive Setup" or "Offensive Setup" depending on the moves of the Player's mon on the field.

If the move boosts physical stats (Coil, Bulk Up, Curse), then the AI checks if the Player Mon has a physical attacking move and no special attacking moves. If this is true, then these moves are treated as "Defensive Setup". If the Player has no physical attacks or at least one special attack, then these moves are treated as "Offensive Setup".

Calm Mind and Quiver Dance are treated the same, except with special and physical swapped. So if the Player Mon has a special attacking move and no physical attacking moves, CM/QD are treated as "Defensive Setup". Otherwise, they are considered "Offensive Setup".

See the sections above for how the AI scores [Defensive](#defensive-setup) and [Offensive](#offensive-setup) setup.

### Agility, Rock Polish, Autotomize

Also Trailblaze and Rapid Spin when they are not the highest damaging move.

- If AI is slower than Player Mon: **+7**
- Else: never used (**-20**)

### Shell Smash, Clangorous Soul

- Starts at **+6**
- If Player Mon is incapacitated (frozen, asleep, recharging): additional **+3**
- If AI is faster:
  - If AI holds a White Herb or takes less than 50% from the Player Mon: additional **+2**
  - Else: additional **-2**
- If AI mon's Attack or Sp. Atk is +2 or higher: never used (**-20**)
- Clangorous Soul is never used below 1/3 HP.

### Belly Drum

- Starts at **+4**
- If Player Mon is incapacitated (frozen, asleep, recharging): additional **+5**
- If above is not true, AI is above 50% HP and Player Mon cannot KO AI mon after a Belly Drum\*: additional **+4**
- Never used at 50% HP or less, or if the AI is already at +6 Attack.

\*Note: AI sees if it is holding a Sitrus Berry and takes that into account.

### Focus Energy

- If AI has Super Luck/Sniper, or is holding Scope Lens: **+7**
- Else: **+5**
- AI will not use Focus Energy if the Player Mon has Shell Armor or Battle Armor, or if the AI already has Focus Energy.

### Laser Focus

- **+6**
- Never used while Laser Focus is still active on the AI, or if the target can't be critted (Shell Armor or Battle Armor unless the AI has Mold Breaker, Lucky Chant on the Player's side).
- While Laser Focus is active, the AI's damage calc counts its next attack as a critical hit.

### Double Team, Minimize and other evasion boosting moves

- Starts at **+6**
- If AI is already at +1 evasion or higher: additional **-1**
- Else, if AI takes less than 50% from the Player Mon: additional **+2**
- If Player Mon is incapacitated: additional **+2**
- Never used if the Player Mon has No Guard or AI is at max evasion.

### Psych Up

- If the Player Mon has any stat boosts: **+5**, plus the number of boosted stages if it is more than 1

### Ingrain, Aqua Ring

- **+6**, never used if already active

### Geomancy

- If AI is holding a Power Herb: **+9**
- Else: never used (**-20**)

### Note for Pokémon with Contrary

Attacking moves that lower the user's stats (Overheat, Leaf Storm, Superpower, Close Combat, etc.) are treated as setup moves when used by Pokémon with Contrary. This only applies if the move is not the highest damaging move. In this case:

- If Player Mon is incapacitated: additional **+3**
- If AI is faster: additional **+3**
- If AI takes less than 1/3 of its HP from the Player Mon: additional **+3**, and another **+1** if AI is faster

If the attacking move is the highest damaging move already, its score is not affected by Contrary and the move is simply treated as a normal damaging move.

These "setup" moves are a little unique and do not have the checks that normal setup moves have. Contrary Overheat, Leaf Storm, and Superpower can be used against Unaware mons, and can also be used even if the AI mon is threatened with an OHKO.

---

## Other status moves

### Destiny Bond, Curse (Ghost type)

- If AI is faster and dies to Player Mon: **+6** (~80%), **+7** (~20%)
- If AI is slower: **+5** (50%), **+6** (50%)

### Disable

- If the Player Mon is locked into a move by a Choice item: **+6**, and another **+3** if the AI is faster
- Else, if the Player Mon is faster and holds a Choice item: **+6**, and another **+3** if a Player Mon can KO the AI
- Never used if the Player Mon is already Disabled.

### Taunt

- If AI is faster and the Player Mon has one of these moves that would do something this turn: **+9**
  - Defog (and the Player's side has hazards)
  - Tailwind (and the Player has no Tailwind up)
  - Trick Room (and Trick Room is not up)
- Else, if the Player Mon has a status move it can use: **+6**
- Else: **+5**
- Never used if the target is already Taunted, has Oblivious or Aroma Veil, or its partner has Aroma Veil.

### Encore

- If AI is faster and Encore is encouraged\*: **+7**
- Else: **+6** (50%), **+5** (50%)
- Wobbuffet instead gets **+7** if Encore is not encouraged.
- AI will not Encore if target is already Encored, is locked by a Choice item, or if it is the target's first turn out (there is no move for the AI to Encore).

\*The AI looks at the target's last used move and checks if it is one that should be Encored. The list of moves that should be Encored is very long and I will not be listing them all here, but it mostly boils down to non-damaging moves.

### Parting Shot

- If the AI has another mon to switch to: **+6**
  - If the AI wants to switch out (see [Switch AI](#switch-ai)): additional **+3**
  - If the AI has Regenerator and is below 67% HP: additional **+1**
- Never used if the target can't have its stats lowered.

### Roar, Whirlwind

- If the Player has more than one mon left: **+6** (50%), **+7** (50%)
- Else: never used (**-20**)
- Never used if the target has Suction Cups or is Ingrained.

### Stat lowering status moves (Growl, Charm, Fake Tears, Screech, etc.)

Attack lowering moves are only used if the Player Mon has a physical move, Sp. Atk lowering moves only if it has a special move.

- Attack / Sp. Atk lowering: **+5**
  - If neither mon 2HKOs the other:
    - Additional **+1** if the target can have its stats lowered (and has no Hyper Cutter for Attack lowering moves)
    - Additional **-1** if the Player Mon is faster
- Defense / Sp. Def lowering:
  - If neither mon 2HKOs the other and the target can have its stats lowered: **+7**
- Accuracy / evasion lowering: **+5**
  - Additional **+1** if the target can have its stats lowered
  - Additional **-1** if the Player Mon is faster

### Venom Drench

Only used if the target is poisoned and has an attacking move that isn't already lowered:

- **+5**
- Additional **+1** if the target can have its stats lowered
- Additional **-1** if the Player Mon is faster

### Recycle

- **+6** if the AI has no item and its last used item was a Berry Juice, else never used

### Ion Deluge

- Only used in doubles: **+6**, never used if the target is a Ground type or has Volt Absorb

### Soak

- **+6**, never used if the target is already a Water type

---

## Recovery moves

### Recover, Slack Off, Heal Order, Soft-Boiled, Roost, Strength Sap, Wish

- If AI [decides it should recover](#should-ai-recover-function): **+7**
- Else: **+5**
- AI will not use Recovery moves if at full (**-20**), or at 85% or higher (**-6**)
- Wish is never used if a Wish is already pending.
- While the AI is under Heal Block, it never uses healing moves (**-20**).

### Weather-based recovery moves (Morning Sun, Synthesis, Moonlight, Shore Up)

- If boosting weather is active (sun, or sand for Shore Up): **+7** if AI decides it should recover, **+5** if not
- If no weather affects the move, it heals 50% and becomes identical to the Recovery Moves listed above: **+7** if AI decides it should recover, **+5** if not
- In weather that weakens the move (rain, sand, hail, snow): **+5**
- AI will not use Recovery moves if at full (**-20**), or at 85% or higher (**-6**)

### Rest

- If AI decides it should recover:
  - If one of the following conditions is true: **+8**
    - AI is holding an item that would cure Sleep (Lum Berry, Chesto Berry)
    - AI has Sleep Talk or Snore
    - AI has Shed Skin/Early Bird
    - AI has Hydration and it is raining
    - AI's partner has Healer
  - If none of the above conditions are true: **+7**
- If AI decides it should not recover: **+5**
- Never used if Rest would fail: AI is already asleep, Uproar is active, AI has Insomnia, Vital Spirit, Comatose, Sweet Veil (or its partner has it), Leaf Guard or Shields Down, or it is grounded in Electric or Misty Terrain.

---

## Counter moves

### Metal Burst

- Starts at **+6**
- If AI has an active Sturdy/Focus Sash: additional **+2**
- If AI is faster: additional **-1** (25%), no score change other 75%
- If Player has status moves it can use: additional **-1** (25%), no score change other 75%

### Counter, Mirror Coat

- Starts at **+6**
- If Player Mon can KO AI (and AI doesn't have Sturdy/Sash active): additional **-20**
- If target only has moves of the corresponding split (e.g. only physical moves for Counter scoring): additional **+2**
- If AI mon has an active Sturdy/Focus Sash: additional **+2**
- Regardless of above, if AI is faster: additional **-1** (25%), no score change other 75%
- Regardless of above, if Player has status moves it can use: additional **-1** (25%), no score change other 75%

---

## Extra details

### Should AI Recover function

Recovery %:

| Move | Recovery % |
|---|---|
| Standard recovery moves (Recover, Slack Off, Heal Order, Roost, Strength Sap, Wish) | 50% |
| Weather-based recovery moves (Morning Sun, Synthesis, Moonlight) | 67% in sun, 25% in rain, sand, hail or snow |
| Shore Up | 67% in sand |
| Rest | 100% |

- If AI mon is Toxic'd (not for Rest): returns **False**
- If Player Mon does more damage than would be healed off: returns **False**
  - Note that this calculation uses the Recovery % listed above.
- If AI is faster:
  - If Player Mon can kill AI mon, but cannot after AI mon uses recovery move: returns **True**
  - If Player Mon cannot kill AI mon:
    - If AI mon is below 66% and above 40%: returns **True** (50%), **False** (50%)
    - If AI mon is below 40%: returns **True**
- If AI is slower:
  - If AI is below 70% HP: returns **True** (75%), **False** (25%)
  - If AI is below 50% HP: returns **True**
- If none of the above cases are true, then this function defaults to return **False**.

[diverting_targets]: data:image/png;base64,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
