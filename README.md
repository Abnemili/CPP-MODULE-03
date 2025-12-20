# 🤖 CP03 – ClapTrap Chronicles

```
   _____ _             _______                 
  / ____| |           |__   __|                
 | |    | | __ _ _ __    | |_ __ __ _ _ __    
 | |    | |/ _` | '_ \   | | '__/ _` | '_ \   
 | |____| | (_| | |_) |  | | | | (_| | |_) |  
  \_____|_|\__,_| .__/   |_|_|  \__,_| .__/   
                | |                  | |      
                |_|                  |_|      
```

> *"Minion! Your replica is ready for combat!"*  
> A journey through C++ inheritance with everyone's favorite misunderstood robot.

---

## 🎭 The Story

Welcome to the **ClapTrap Factory**, where we build progressively more advanced (and slightly more stable) robots through the power of **inheritance**. This project is part of **42 School's C++ Module 03**, where we explore how derived classes inherit and extend the capabilities of their ancestors.

Starting with the humble `ClapTrap`, we evolve our robot army into specialized units: the gate-guarding `ScavTrap` and the high-five-enthusiastic `FragTrap`.

---

## 🏗️ The Robot Lineup

### 🔧 ClapTrap (ex00) - The Foundation
**Status:** Base Class  
**Threat Level:** Minimal

The original model. Scrappy, enthusiastic, but prone to existential crises.

**Core Systems:**
- **Health Points:** 10 HP
- **Energy Points:** 10 EP  
- **Attack Damage:** 0 AD *(yes, zero)*

**Capabilities:**
```cpp
void attack(const std::string& target);  // Attempts to sound threatening
void takeDamage(unsigned int amount);    // Falls apart dramatically  
void beRepaired(unsigned int amount);    // Duct tape fixes everything
```

**Features:**
- ✅ Canonical Orthodox Form (constructor, copy, assignment, destructor)
- ✅ Overly verbose constructor/destructor messages
- ✅ Energy depletion system (each action costs 1 EP)

---

### 🛡️ ScavTrap (ex01) - The Guardian
**Status:** Derived from ClapTrap  
**Threat Level:** Moderate

A beefed-up version designed for perimeter defense. Still annoyingly talkative.

**Enhanced Systems:**
- **Health Points:** 100 HP *(10x upgrade!)*
- **Energy Points:** 50 EP
- **Attack Damage:** 20 AD

**Special Ability:**
```cpp
void guardGate();  // Enters Gate Keeper mode
```

**Inheritance Benefits:**
- Retains all ClapTrap methods
- Overrides attack messages with ScavTrap-specific dialogue
- Custom constructor/destructor announcements

---

### 💥 FragTrap (ex02) - The Showstopper
**Status:** Derived from ClapTrap  
**Threat Level:** High (to furniture)

The party animal of the robot world. Built for maximum chaos and camaraderie.

**Premium Systems:**
- **Health Points:** 100 HP
- **Energy Points:** 100 EP *(double battery life)*
- **Attack Damage:** 30 AD *(most powerful unit)*

**Signature Move:**
```cpp
void highFivesGuys();  // Requests positive vibes
```

**Distinguishing Features:**
- Most enthusiastic constructor messages
- Unique FragTrap attack dialogue
- Optimized for team morale operations

---

## 🌳 Class Hierarchy

```
                    ┌─────────────┐
                    │  ClapTrap   │
                    │   (ex00)    │
                    └──────┬──────┘
                           │
              ┌────────────┴────────────┐
              │                         │
       ┌──────▼──────┐           ┌─────▼──────┐
       │  ScavTrap   │           │  FragTrap  │
       │   (ex01)    │           │   (ex02)   │
       └─────────────┘           └────────────┘
```

**Key Relationships:**
- `ScavTrap` and `FragTrap` are **siblings** (not parent/child)
- Both inherit from `ClapTrap` and extend its functionality
- Demonstrates **polymorphism** and **specialization**

---

## 🚀 Quick Start

### Compilation
```bash
# Compile all exercises
c++ -Wall -Wextra -Werror -std=c++98 main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp -o claptrap_army

# Or use the Makefile (if provided)
make
```

### Run the Simulation
```bash
./claptrap_army
```

---

## 🎮 Example Combat Scenario

```cpp
int main() {
    std::cout << "=== ROBOT DEPLOYMENT ===" << std::endl;
    
    ClapTrap rick("Rick-C137");
    ScavTrap morty("Morty-Prime");
    FragTrap abdo("Abdo-9000");
    
    std::cout << "\n=== COMBAT PHASE ===" << std::endl;
    
    // Rick attempts an attack (with his 0 damage)
    rick.attack("Morty-Prime");
    morty.takeDamage(rick.getAttackDamage());
    
    // Morty activates special defense
    morty.guardGate();
    
    // Abdo tries to lighten the mood
    abdo.highFivesGuys();
    
    // Abdo retaliates (30 damage!)
    abdo.attack("Rick-C137");
    rick.takeDamage(abdo.getAttackDamage());
    
    // Rick attempts emergency repairs
    rick.beRepaired(5);
    
    std::cout << "\n=== SHUTDOWN SEQUENCE ===" << std::endl;
    return 0;
}
```

### 📺 Expected Output
```
=== ROBOT DEPLOYMENT ===
ClapTrap Rick-C137 constructed
ScavTrap Morty-Prime constructed
FragTrap Abdo-9000 constructed

=== COMBAT PHASE ===
ClapTrap Rick-C137 attacks Morty-Prime, causing 0 points of damage!
ScavTrap Morty-Prime takes 0 damage! (100 HP remaining)
ScavTrap Morty-Prime is now in Gate Keeper mode!
FragTrap Abdo-9000 requests high fives all around! ✋
FragTrap Abdo-9000 attacks Rick-C137, causing 30 points of damage!
ClapTrap Rick-C137 takes 30 damage! (0 HP remaining) [CRITICAL]
ClapTrap Rick-C137 cannot be repaired - insufficient hit points!

=== SHUTDOWN SEQUENCE ===
FragTrap Abdo-9000 destructed
ScavTrap Morty-Prime destructed
ClapTrap Rick-C137 destructed
```

---

## 🎯 Learning Objectives

This project teaches fundamental C++ OOP concepts:

| Concept | Implementation |
|---------|----------------|
| **Inheritance** | ScavTrap/FragTrap extend ClapTrap |
| **Constructor Chaining** | Derived classes call base constructor |
| **Method Overriding** | Custom attack messages per class |
| **Encapsulation** | Private/protected member management |
| **Canonical Form** | Copy constructors & assignment operators |
| **Memory Management** | Proper destructor sequencing |

---

## 📚 Project Structure

```
cp03/
├── ex00/                    # Base ClapTrap
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   └── main.cpp
│
├── ex01/                    # ScavTrap introduction
│   ├── ClapTrap.hpp
│   ├── ClapTrap.cpp
│   ├── ScavTrap.hpp
│   ├── ScavTrap.cpp
│   └── main.cpp
│
└── ex02/                    # FragTrap finale
    ├── ClapTrap.hpp
    ├── ClapTrap.cpp
    ├── ScavTrap.hpp
    ├── ScavTrap.cpp
    ├── FragTrap.hpp
    ├── FragTrap.cpp
    └── main.cpp
```

---

## 💡 Key Implementation Notes

### Constructor Chain Example
```cpp
// When creating a ScavTrap:
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    // ClapTrap constructor runs first
    // Then ScavTrap constructor continues
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}
```

### Virtual Destructors?
**Not yet!** Virtual functions are introduced in Module 04. For now:
- Destructors are called in reverse order (derived → base)
- No polymorphic deletion needed in this module

### Energy System
Every action (attack/repair) costs **1 energy point**:
```cpp
if (energyPoints == 0) {
    std::cout << "Out of energy!" << std::endl;
    return;
}
energyPoints--;
```

---

## 🐛 Common Pitfalls

1. **Forgetting Base Constructor Call**
   ```cpp
   // ❌ Wrong
   ScavTrap::ScavTrap(std::string name) { ... }
   
   // ✅ Correct
   ScavTrap::ScavTrap(std::string name) : ClapTrap(name) { ... }
   ```

2. **Not Overriding Attack Messages**
   - Each class should have unique attack dialogue

3. **Copy Constructor Issues**
   ```cpp
   // Must call base copy constructor
   ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) { ... }
   ```

---

## 🏆 Bonus Challenges

Want to extend your learning?

- Add a **status()** method to display current HP/EP/AD
- Implement **operator<<** for easy debugging
- Create a **battle simulator** with turn-based combat
- Add **critical hit** mechanics (random damage multiplier)

---

## 📖 References

- [C++ Inheritance Documentation](https://cplusplus.com/doc/tutorial/inheritance/)
- [Orthodox Canonical Form](https://www.geeksforgeeks.org/cc-canonical-class-form/)
- 42 School C++ Subject (Module 03)

---

## 🤝 Contributing

Found a bug in the robot army? Improvements welcome!

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/LaserCannons`)
3. Commit your changes (`git commit -m 'Add laser cannon upgrade'`)
4. Push to the branch (`git push origin feature/LaserCannons`)
5. Open a Pull Request

---

## 📜 License

This project is part of the 42 School curriculum.  
Feel free to learn from it, but remember the **42 honor code** - your learning is your own!

---

## 🙏 Acknowledgments

- **Gearbox Software** - For creating the original ClapTrap character
- **42 School** - For the excellent C++ curriculum
- **Coffee** - The real MVP of late-night debugging sessions

---

<div align="center">

**Made with 🔧 and plenty of segfaults**

*"I'm over here, hey, I'm over here, no I'm over here!"* - ClapTrap, probably

⭐ Star this repo if ClapTrap made you smile!

</div>