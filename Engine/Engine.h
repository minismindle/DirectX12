#pragma once
class Engine
{
public:

	void Init(const WindowInfo& info);
	void Render();
private:
	WindowInfo _window;
	D3D12_VIEWPORT _viewport = {};
	D3D12_RECT _scissorRect = {};
};

