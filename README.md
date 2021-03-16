# Authoring Packaging Scenarios

This repo demonstrates C#/WinRT Authoring scenarios for packaging projects. We currently provide support for consumption of C#/WinRT components from unpackaged C++/WinRT desktop applications, via package or project reference. Going forwards we would like to support consumption from packaged C++/WinRT desktop applications as well.

The projects in this repo are as follows:
- AuthoringDemo is a simple C#/WinRT component (using a .NET 5 Class Library)
- CppConsoleApp is a C++/WinRT desktop console app, which has a project reference to the AuthoringDemo component and a winmd reference to AuthoringDemo.winmd. To demonstrate the package reference scenario, remove the two references and add a reference to the AuthoringDemo NuGet package generated by the component project.
- WapProjCpp is a packaging project that references CppConsoleApp. 
