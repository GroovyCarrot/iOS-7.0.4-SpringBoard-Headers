/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSArray, NSDateFormatter, NSHashTable, NSString, NSTimer;

@interface SBStatusBarStateAggregator : _ABAddressBookCopyLocalizedLabel
{
    unsigned int _coalescentBlockDepth;
    BOOL _hasPostedOnce;
    unsigned int _itemPostState[25];
    BOOL _nonItemDataChanged;
    CDAnonymousStruct10 _data;
    int _actions;
    NSHashTable *_postObservers;
    BOOL _notifyingPostObservers;
    NSDateFormatter *_timeItemDateFormatter;
    NSTimer *_timeItemTimer;
    NSString *_timeItemTimeString;
    NSString *_operatorName;
    NSString *_serviceString;
    NSString *_serviceCrossfadeString;
    NSArray *_countryCodesShowingEmergencyOnlyStatus;
    BOOL _showsActivityIndicatorOnHomeScreen;
    int _activityIndicatorEverywhereCount;
    BOOL _showsActivityIndicatorForNewsstand;
    int _syncActivityIndicatorCount;
    NSString *_activityDisplayIdentifier;
    BOOL _showingNotChargingItem;
    NSString *_batteryDetailString;
    BOOL _alarmEnabled;
    BOOL _applyingAssistantStyle;
}

+ (int)_thermalColorForLevel:(int)fp8;
+ (id)sharedInstance;
- (void)_noteNotChargingStatusChanged;
- (void)_setShowingNotChargingItem;
- (BOOL)_shouldShowNotChargingItem;
- (BOOL)_shouldShowEmergencyOnlyStatus;
- (id)_sbCarrierNameForOperator:(id)fp8;
- (id)_displayStringForRegistrationStatus:(int)fp8;
- (id)_displayStringForSIMStatus:(id)fp8;
- (BOOL)_simStatusMeansLocked:(id)fp8;
- (void)_noteAirplaneModeChanged;
- (void)_resetTimeItemFormatter;
- (void)_restartTimeItemTimer;
- (void)_stopTimeItemTimer;
- (void)_requestActions:(int)fp8;
- (void)_notifyNonItemDataChanged;
- (void)_notifyItemChanged:(int)fp8;
- (BOOL)_setItem:(int)fp8 enabled:(BOOL)fp12;
- (void)_postItem:(int)fp8 withState:(unsigned int)fp12;
- (void)updateStatusBarItem:(int)fp8;
- (void)_updateTetheringState;
- (void)_updateThermalColorItem;
- (void)_updateAssistantItem;
- (void)_updateAirplayItem;
- (void)_updateQuietModeItem;
- (void)_updateRotationLockItem;
- (void)_updateLocationItem;
- (void)_updateActivityItem;
- (void)_updateCallForwardingItem;
- (void)_updateVPNItem;
- (void)_updateAlarmItem;
- (void)_updateTTYItem;
- (void)_updateBluetoothBatteryItem;
- (void)_updateBluetoothItem;
- (void)_updateBatteryItems;
- (void)_updateDataNetworkItem;
- (void)_updateServiceItem;
- (void)_updateSignalStrengthItem;
- (void)_updateAirplaneMode;
- (void)_updateTimeItems;
- (void)_registerForNotifications;
- (void)removePostingObserver:(id)fp8;
- (void)addPostingObserver:(id)fp8;
- (void)sendStatusBarActions:(int)fp8;
- (void)setShowsSyncActivityIndicator:(BOOL)fp8;
- (void)setShowsActivityIndicatorForNewsstand:(BOOL)fp8;
- (void)setShowsActivityIndicatorEverywhere:(BOOL)fp8;
- (void)setShowsActivityIndicatorOnHomeScreen:(BOOL)fp8;
- (void)setAlarmEnabled:(BOOL)fp8;
- (id)operatorName;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (void)dealloc;
- (id)init;

@end
