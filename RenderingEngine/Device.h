#pragma once
#include "IDevice.h"

namespace device
{
	class Device :
		public IDevice
	{
	public:
		virtual bool Init() override;

	private:
		ID3D12Device* m_Device;
		bool m_bUseWarpDevice = false;

	};

}

