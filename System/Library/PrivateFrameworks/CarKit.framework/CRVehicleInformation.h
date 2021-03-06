/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVExternalDevice;

@interface CRVehicleInformation : NSObject {

	int _mapsAmbientBrightnessNotifyToken;
	AVExternalDevice* _externalDevice;
	unsigned long long _mapsFallbackAmbientBrightness;

}

@property (nonatomic,retain) AVExternalDevice * externalDevice;                             //@synthesize externalDevice=_externalDevice - In the implementation block
@property (assign,nonatomic) unsigned long long mapsFallbackAmbientBrightness;              //@synthesize mapsFallbackAmbientBrightness=_mapsFallbackAmbientBrightness - In the implementation block
@property (nonatomic,readonly) unsigned long long driverPosition; 
@property (nonatomic,readonly) unsigned long long interactionRestrictions; 
@property (nonatomic,readonly) unsigned long long vehicleAmbientBrightness; 
-(id)init;
-(void)dealloc;
-(AVExternalDevice *)externalDevice;
-(void)setExternalDevice:(AVExternalDevice *)arg1 ;
-(void)_screenDidUpdate:(id)arg1 ;
-(void)_handleLimitedUIChanged:(id)arg1 ;
-(void)_handleNightModeChanged:(id)arg1 ;
-(void)_fetchMapsFallbackAmbientBrightnessWithToken:(int)arg1 ;
-(void)setMapsFallbackAmbientBrightness:(unsigned long long)arg1 ;
-(unsigned long long)mapsFallbackAmbientBrightness;
-(unsigned long long)interactionRestrictions;
-(unsigned long long)vehicleAmbientBrightness;
-(unsigned long long)driverPosition;
@end

