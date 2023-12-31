workspace "6502"
   configurations { "Debug", "Release" }

project "6502-Emulator"
   kind "ConsoleApp"
   language "C"
   targetdir "bin/%{cfg.buildcfg}"

   files { "src/main.c", "src/instructions.c", "src/io.c", "src/memory.c", "src/cpu.c", "src/computer.c" }
   links {  }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

project "6502-Assembler"
   kind "ConsoleApp"
   language "C"
   targetdir "bin/%{cfg.buildcfg}"

   files { "tools/assembler/assembler.c" }
   links {  }

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"