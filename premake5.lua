workspace "Hex"
	architecture "x64"

	configurations {
		"Debug",
		"Release"
	}

	startproject "Sandbox"

	includedirs {
		"Hex/src/Core",
		"Hex"
	}

	include "Sandbox"
	include "Hex"