Jerry_Development_surgicalKitUses = Jerry_Development_surgicalKitUses - 1;
Jerry_Development_ConsumeOneKit = 0;
if(Jerry_Development_surgicalKitUses <= 0) then {
    Jerry_Development_ConsumeOneKit = 1;
    Jerry_Development_surgicalKitUses = 5;
};