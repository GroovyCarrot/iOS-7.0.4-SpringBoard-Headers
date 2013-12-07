/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : _ABAddressBookCopyLocalizedLabel
{
    NSMutableDictionary *_deviceQualityToProperties;
    unsigned int _style;
}

+ (id)overlayPropertiesFactoryWithStyle:(unsigned int)fp8;
- (unsigned int)style;
- (id)_fetchAndCachePropsForDeviceQuality:(int)fp8;
- (id)propertiesWithGraphicsQuality:(int)fp8;
- (id)propertiesWithDeviceDefaultGraphicsQuality;
- (void)dealloc;
- (id)initWithStyle:(unsigned int)fp8;

@end

