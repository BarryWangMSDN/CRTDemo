#include "pch.h"
#include "HomeViewModel.h"
#include "HomeViewModel.g.cpp"

namespace winrt::BlankApp1::implementation
{
	//initlize
	HomeViewModel::HomeViewModel()
	{

	}

    BlankApp1::Taskdetail HomeViewModel::Taskdetail()
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> HomeViewModel::Taskdetails()
    {
        throw hresult_not_implemented();
    }
}
