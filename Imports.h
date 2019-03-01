#pragma once

#if defined(THREE_WIN_EXPORTS)
#define THREEDLL __declspec(dllexport)
#else
#define THREEDLL __declspec(dllimport)
#endif