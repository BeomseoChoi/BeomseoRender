#pragma once

namespace device
{
	interface IDevice
	{
	public:
		IDevice();
		virtual ~IDevice() abstract;

	public:
		virtual bool Init() abstract;


	};
}