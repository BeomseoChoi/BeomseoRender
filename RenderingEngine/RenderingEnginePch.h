#pragma once

#pragma region STL
#include <vector>
#include <queue>
#include <unordered_map>
#pragma endregion

#pragma region DirectX
#pragma comment(lib, "d3d12")
#pragma comment(lib, "dxgi")
#pragma comment(lib, "dxguid")
#pragma comment(lib, "d3dcompiler")

#include "d3dx12.h"
#include "SimpleMath.h"
#include <d3d12.h>
#include <wrl.h>
#include <d3dcompiler.h>
#include <dxgi1_4.h>
#include <DirectXMath.h>
#include <DirectXPackedVector.h>
#include <DirectXColors.h>
#include "DXHelper.h"
using namespace DirectX;
using namespace DirectX::PackedVector;
using namespace Microsoft::WRL;


#ifdef _DEBUG
#pragma comment(lib, "DirectXTex\\DirectXTex_debug.lib")
#else
#pragma comment(lib, "DirectXTex\\DirectXTex.lib")
#endif
#include <DirectXTex/DirectXTex.h>
#include <DirectXTex/DirectXTex.inl>
#pragma endregion


#pragma region Define

#define interface class
#define abstract = 0

#pragma endregion
