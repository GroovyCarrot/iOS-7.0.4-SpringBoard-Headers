/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlert.h"

@interface SBVoiceControlAlert : SBAlert
{
    struct {
        unsigned int shouldBeActivated:1;
        unsigned int isReadyToBeActivated:1;
        unsigned int hasBeenActivated:1;
    } _voiceControlFlags;
    BOOL _expectsFaceContact;
    BOOL _expectsFaceContactInLandscape;
}

+ (void)_setNextRecognitionAudioInputPathForSession:(id)fp8 resetting:(BOOL)fp12;
+ (void)setNextRecognitionAudioInputPaths:(id)fp8;
+ (void)_configureSession:(id)fp8 forAlert:(id)fp12;
+ (BOOL)_bluetoothDevicesPickable;
+ (void)bluetoothDeviceTerminatedVoiceControl:(id)fp8;
+ (void)bluetoothDeviceRequestedVoiceControl:(id)fp8;
+ (BOOL)resetVoiceControlIfNecessary:(BOOL)fp8;
+ (BOOL)shouldEnterVoiceControl;
+ (void)unregisterForAlerts;
+ (void)registerForAlerts;
+ (id)pendingOrActiveAlert;
- (id)alertDisplayViewWithSize:(struct CGSize)fp8;
- (double)autoDimTime;
- (BOOL)handleMenuButtonTap;
- (void)handleHeadsetButtonUpFromActivation:(BOOL)fp8;
- (void)_proximityChanged:(id)fp8;
- (void)dealloc;
- (void)cancel;
- (void)cancelIfNotActivated;
- (void)activateWhenReady;
- (id)initFromMenuButton;
- (BOOL)expectsFaceContactInLandscape;
- (BOOL)expectsFaceContact;
- (void)setExpectsFaceContact:(BOOL)fp8 inLandscape:(BOOL)fp12;
- (void)setExpectsFaceContact:(BOOL)fp8;
- (void)activate;
- (void)deactivate;
- (BOOL)allowsEventOnlySuspension;
- (id)initFromBluetoothDevice:(id)fp8;
- (id)initFromWiredHeadsetButton;
- (id)init;
- (void)_setRoutingAttributesForWiredHeadset:(BOOL)fp8;
- (void)_prime;
- (BOOL)recognitionSessionWillBeginAction:(id)fp8;
- (void)_workspaceActivate;
- (id)_session;
- (void)_makeActive;
- (void)_resign;

@end
