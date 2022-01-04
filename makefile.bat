@echo off
cd C:\Users\tomo_\Desktop\AtCoder\%1
set FOLDER1=C:\Users\tomo_\Desktop\AtCoder\%1\%1%2
set FOLDER2=C:\Users\tomo_\Desktop\AtCoder\%1\%1%2\%3.cpp
if exist "%FOLDER1%" (
  cd %1%2
	if not exist "%FOLDER2%" (
    type nul > %3.cpp
    type temp > %3.cpp
  )
) else (
  md %1%2
  cd %1%2
	if not exist "%FOLDER2%" (
    type nul > %3.cpp
    type temp > %3.cpp
  )
)
code %3.cpp