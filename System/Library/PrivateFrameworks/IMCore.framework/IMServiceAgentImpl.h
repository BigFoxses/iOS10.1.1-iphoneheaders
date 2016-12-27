/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMServiceAgent.h>

@interface IMServiceAgentImpl : IMServiceAgent
+(void)initialize;
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned long long)arg1 ;
+(id)imageURLForStatus:(unsigned long long)arg1 ;
+(void)_determineStatusImageAppearance;
+(id)sharedAgent;
+(void)_statusImageAppearanceChanged:(id)arg1 ;
+(id)notificationCenter;
-(id)init;
-(void)dealloc;
-(id)serviceWithName:(id)arg1 ;
-(void)vcCapabilitiesChanged:(unsigned long long)arg1 ;
-(unsigned long long)vcCapabilities;
-(void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 ;
-(void)_statusImageAppearanceChanged:(id)arg1 ;
-(void)_daemonConnected:(id)arg1 ;
-(void)_daemonDisconnected:(id)arg1 ;
-(void)launchIfNecessary;
-(void)_customMessagesChanged:(id)arg1 ;
-(id)myAvailableMessages;
-(id)myAwayMessages;
-(void)setMyAvailableMessages:(id)arg1 ;
-(void)setMyAwayMessages:(id)arg1 ;
-(id)notificationCenter;
-(void)setupComplete;
@end
