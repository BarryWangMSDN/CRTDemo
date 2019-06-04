#pragma once
#include "HomeViewModel.g.h"

namespace winrt::BlankApp1::implementation
{
    struct HomeViewModel : HomeViewModelT<HomeViewModel>
    {
        HomeViewModel() = default;

        BlankApp1::Taskdetail Taskdetail();
        Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> Taskdetails();


	private:
		BlankApp1::Taskdetail m_taskdetail{ nullptr };
		Windows::Foundation::Collections::IObservableVector<Windows::Foundation::IInspectable> m_taskdetailslist;
    };
}
