class CfgUIGrids {
    class IGUI {
        class Presets {
            class Arma3 {
                class Variables {
                    GVAR(volumeControl)[] = {
                        {
                            VOLUME_CONTROL_DEFAULT_X,
                            VOLUME_CONTROL_DEFAULT_Y,
                            VOLUME_CONTROL_DEFAULT_W,
                            VOLUME_CONTROL_DEFAULT_H
                        },
                        POS_W(1),
                        POS_H(1)
                    };
                    grid_ACRE_vehicleInfo[] = {
                        {
                            VEHICLE_INFO_DEFAULT_X,
                            VEHICLE_INFO_DEFAULT_Y,
                            VEHICLE_INFO_DEFAULT_W,
                            VEHICLE_INFO_DEFAULT_H
                        },
                        IGUI_GRID_VEHICLE_W,
                        IGUI_GRID_VEHICLE_H
                    };
                    grid_ACRE_recieving[] = {
                        {
                            "(SafeZoneX + SafeZoneW) - 0.352",
                            "(SafeZoneY + SafeZoneH) - 0.128",
                            "0.352",
                            "0.128"
                        },
                        "((safezoneW / safezoneH) min 1.2) / 40",
                        "(((safezoneW / safezoneH) min 1.2) / 1.2) / 25"
                    };
                };
            };
        };
        class Variables {
            class GVAR(volumeControl) {
                displayName = CSTRING(VolumeControlGrid_DisplayName);
                description = CSTRING(VolumeControlGrid_Description);
                preview = QPATHTOF(data\ui\volume_control_preview.paa);
                saveToProfile[] = {0, 1, 2, 3};
                canResize = 1;
            };
            class grid_ACRE_vehicleInfo {
                displayName = CSTRING(VehicleInfoGrid_DisplayName);
                description = CSTRING(VehicleInfoGrid_Description);
                preview = QPATHTOF(data\ui\IGUI_vehicleInfo_preview_ca.paa);
                saveToProfile[] = {0, 1, 2, 3}; // Save W and H as well due to 1.94 bug setting W to 0
                canResize = 0;
            };
            class grid_ACRE_recieving {
                displayName = CSTRING(ReceivingGrid);
                description = CSTRING(ReceivingGridDesc);
                //preview = QPATHTOF(data\ui\IGUI_receiving_preview_ca.paa);
                saveToProfile[] = {0,1,2,3};
                canResize = 0;
            };
        };
    };
};
