/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBNotificationCenterDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL useDuetRecommendations; 
@property (getter=isBatteryWidgetAlwaysAvailable,nonatomic,readonly) BOOL batteryWidgetAlwaysAvailable; 
@property (nonatomic,readonly) BOOL showInternalWidgets; 
@property (getter=isWidgetSnapshottingEnabled,nonatomic,readonly) BOOL widgetSnapshottingEnabled; 
@property (getter=isWidgetLoggingEnabled,nonatomic,readonly) BOOL widgetLoggingEnabled; 
@property (nonatomic,readonly) BOOL showWidgetSnapshotDebugLabels; 
-(void)setUseDuetRecommendations:(BOOL)arg1 ;
-(BOOL)useDuetRecommendations;
-(void)setBatteryWidgetAlwaysAvailable:(BOOL)arg1 ;
-(BOOL)isBatteryWidgetAlwaysAvailable;
-(void)setShowWidgetSnapshotDebugLabels:(BOOL)arg1 ;
-(BOOL)showWidgetSnapshotDebugLabels;
-(void)setWidgetLoggingEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetLoggingEnabled;
-(void)setShowInternalWidgets:(BOOL)arg1 ;
-(BOOL)showInternalWidgets;
-(void)setWidgetSnapshottingEnabled:(BOOL)arg1 ;
-(BOOL)isWidgetSnapshottingEnabled;
-(void)_bindAndRegisterDefaults;
@end
