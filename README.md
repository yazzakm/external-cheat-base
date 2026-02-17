# External Cheat Base for CS2

**Author:** yazz.akm  
**Memory class base:** Originally by stackz → modified to use `NtReadVirtualMemory`

This is a lightweight **external** cheat base written in C++ designed for Counter-Strike 2.  
It uses direct system calls (`NtReadVirtualMemory`) instead of regular `ReadProcessMemory` for memory reading.

Perfect starting point if you're building your own external cheat : aimbot / ESP / radar / etc.

### Features (current base)
- Clean external memory reading via NtReadVirtualMemory
- Process / module handling
- Basic offset / pattern scanning support (expandable)
- Minimal dependencies

### Coming soon...
I'm starting a **YouTube series** where I'll build a **full CS2 cheat step-by-step** using exactly this base!

Expect topics like:
- Player / entity list
- World-to-screen
- ESP / boxes / health / names
- Aimbot / triggerbot basics
- And more...

### 📺 Watch the series & subscribe!
🔗 **YouTube:** [youtube.com/@yazzakm](https://www.youtube.com/@yazzakm)

### 💬 Join the community
🔗 **Discord:** [discord.gg/dopamina](https://discord.gg/dopamina)

Feel free to use this base — just give credit if you release something public 😄  
Pull requests / improvements are welcome!

Happy cheating (ethically, in your single-player games of course… 👀)

— yazz.akm