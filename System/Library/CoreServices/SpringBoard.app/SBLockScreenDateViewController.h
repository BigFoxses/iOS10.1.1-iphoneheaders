/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBDateTimeOverrideObserver.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@class _UILegibilitySettings, NSString;

@interface SBLockScreenDateViewController : UIViewController <SBDateTimeOverrideObserver, _UISettingsKeyObserver> {

	NSNumber* _timerToken;
	BOOL _disablesUpdates;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,getter=isSubtitleHidden,nonatomic) BOOL subtitleHidden; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;               //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(id)dateViewIfExists;
-(void)_updateLegibilityStrength;
-(void)_updateFormat;
-(void)_setDisablesUpdates:(BOOL)arg1 ;
-(void)_backlightChanged;
-(void)dealloc;
-(NSString *)description;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_updateView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setCustomSubtitleView:(id)arg1 ;
-(BOOL)isSubtitleHidden;
-(void)setSubtitleHidden:(BOOL)arg1 ;
-(void)setContentAlpha:(double)arg1 withSubtitleVisible:(BOOL)arg2 ;
-(id)dateView;
-(void)_stopUpdateTimer;
-(void)_startUpdateTimer;
-(void)_addObservers;
@end

