/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@interface _DKBluetoothMonitor : _DKMonitor
+(id)_eventWithState:(id)arg1 name:(id)arg2 address:(id)arg3 type:(int)arg4 ;
+(id)contextValueForBluetoothConnectionStatus:(BOOL)arg1 name:(id)arg2 address:(id)arg3 deviceType:(int)arg4 ;
+(id)eventStream;
+(id)entitlements;
-(void)stop;
-(void)start;
@end

