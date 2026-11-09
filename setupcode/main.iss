[Setup]
AppName=SquareGameSetup
AppVersion=1.3
DefaultDirName=C:\Program Files\SquareGame\bin
DefaultGroupName=SquareGame
UninstallDisplayIcon={app}\main.exe
Compression=lzma2
SolidCompression=yes
PrivilegesRequired=admin
[Files]
Source: "SquareGame1.9.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "settings.yml"; DestDir: "{app}"; Flags: ignoreversion
Source: "glfw3.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "libgcc_s_seh-1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "libraylib.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "libwinpthread-1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "libstdc++-6.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "libyaml-cpp.dll"; DestDir: "{app}"; Flags: ignoreversion
[Icons]
Name: "{userdesktop}\SquareGame"; Filename: "{app}\SquareGame1.9.exe"; WorkingDir: "{app}"
