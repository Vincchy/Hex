project "Hex"
	kind "SharedLib"
	language "C++"

	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

	targetdir ("%{wks.location}/bin/"..outputdir.."/%{prj.name}")
	objdir ("%{wks.location}/bin-int/"..outputdir.."/%{prj.name}")

	-- adds files to the project
	files {
		"**.h",
		"**.cpp",
		"src/**.h",
		"src/**.cpp"
	}

	includedirs {
		"vendor/spdlog/include",
		"src"
	}

	filter "system:windows"
		systemversion "latest"
		cppdialect "C++17"
		defines {
			"HEX_PLATFORM_WINDOWS",
			"HEX_BUILD_DLL"
		}

	filter "configurations:Debug"
		
		optimize "Debug"

	filter "configurations:Release"

		optimize "On"
		flags "NoRunTimeChecks"
	
	filter {}
		postbuildcommands {
			("{COPY} %{wks.location}/bin/" ..outputdir.. "/%{prj.name} %{wks.location}/bin/" ..outputdir.. "/Sandbox")
		}