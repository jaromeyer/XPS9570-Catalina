// Key remaps for the internal PS/2 keyboard
// Uncomment sections as needed, or add new remaps.
DefinitionBlock ("", "SSDT", 2, "ACDT", "ps2", 0)
{
    External (_SB_.PCI0.LPCB.PS2K, DeviceObj)
        
    Name(_SB.PCI0.LPCB.PS2K.RMCF, Package()
    {
        "Keyboard", Package()
        {
            "Custom PS2 Map", Package()
            {
                Package(){},
                "e037=64", // PrtSc=F13
                "54=64", // cmd+PrtScr=F13
                // "e022=67", // play/pause=F16
                "e065=68", // search=F17
                "e052=69", // insert=F18
            },
        },
    })
}
//EOF