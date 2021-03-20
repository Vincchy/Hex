project "Sandbox"
	kind "ConsoleApp"
	language "C++"

	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

	targetdir ("%{wks.location}/bin/"..outputdir.."/%{prj.name}")
	objdir ("%{wks.location}/bin-int/"..outputdir.."/%{prj.name}")

	-- sets the building order
	dependson {
		"Hex"
	}

	includedirs {
		"../Hex",
		"../Hex/vendor/spdlog/include"
	}

	-- sets references
	links {
		"Hex"
	}

	files {
		"src/**.h",
		"src/**.cpp"
	}

	filter "system:windows"
		systemversion "latest"
		cppdialect "C++17"
		defines {
			"HEX_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"

		optimize "Debug"

	filter "configurations:Release"

		optimize "On"
		flags "NoRuntimeChecks"
