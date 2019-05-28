#include "pch.h"
#include "TaskItem.h"
#if __has_include("TaskItem.g.cpp")
#include "TaskItem.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::BlankApp1::implementation
{
    TaskItem::TaskItem()
    {
        InitializeComponent();
    }

    int32_t TaskItem::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void TaskItem::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void TaskItem::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        
    }
}





