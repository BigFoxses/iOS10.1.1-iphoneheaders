/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNSettings.h>

@class NSString;

@interface MNMutableSettings : MNSettings

@property (assign,nonatomic) unsigned long long voiceVolume; 
@property (assign,nonatomic) unsigned long long distanceUnits; 
@property (assign,nonatomic) BOOL pauseSpokenAudio; 
@property (assign,nonatomic) BOOL muteSpeechOverride; 
@property (assign,nonatomic) BOOL speechEnabled; 
@property (assign,nonatomic) BOOL drivingVoiceGuidance; 
@property (assign,nonatomic) BOOL walkingVoiceGuidance; 
@property (assign,nonatomic) BOOL beepBeforeInstruction; 
@property (nonatomic,retain) NSString * voiceLanguage; 
@property (assign,nonatomic) double etaRequestInterval; 
@property (assign,nonatomic) double initialRequestDelay; 
@property (assign,nonatomic) double backgroundTimeWindow; 
@property (assign,nonatomic) long long fakeTrafficIncidentAlert; 
@property (assign,nonatomic) long long acceptFasterReroute; 
@property (assign,nonatomic) double alightSignalTimeBuffer; 
@property (assign,nonatomic) double initialTraceSpeedMultiplier; 
@property (assign,nonatomic) BOOL shouldLoadInitialRouteFromTrace; 
@property (assign,nonatomic) BOOL shouldLoadReroutesFromTrace; 
@property (assign,nonatomic) BOOL shouldLoadETAUpdatesFromTrace; 
@property (assign,nonatomic) BOOL isTracePlaybackCameraTestMode; 
+(id)settingsWithSettings:(id)arg1 ;
-(void)setDistanceUnits:(unsigned long long)arg1 ;
-(void)setVoiceVolume:(unsigned long long)arg1 ;
-(void)setPauseSpokenAudio:(BOOL)arg1 ;
-(void)setMuteSpeechOverride:(BOOL)arg1 ;
-(void)setSpeechEnabled:(BOOL)arg1 ;
-(void)setDrivingVoiceGuidance:(BOOL)arg1 ;
-(void)setWalkingVoiceGuidance:(BOOL)arg1 ;
-(void)setBeepBeforeInstruction:(BOOL)arg1 ;
-(void)setVoiceLanguage:(NSString *)arg1 ;
-(void)setEtaRequestInterval:(double)arg1 ;
-(void)setInitialRequestDelay:(double)arg1 ;
-(void)setBackgroundTimeWindow:(double)arg1 ;
-(void)setFakeTrafficIncidentAlert:(long long)arg1 ;
-(void)setAcceptFasterReroute:(long long)arg1 ;
-(void)setAlightSignalTimeBuffer:(double)arg1 ;
-(void)setInitialTraceSpeedMultiplier:(double)arg1 ;
-(void)setShouldLoadInitialRouteFromTrace:(BOOL)arg1 ;
-(void)setShouldLoadReroutesFromTrace:(BOOL)arg1 ;
-(void)setShouldLoadETAUpdatesFromTrace:(BOOL)arg1 ;
-(void)setIsTracePlaybackCameraTestMode:(BOOL)arg1 ;
@end

